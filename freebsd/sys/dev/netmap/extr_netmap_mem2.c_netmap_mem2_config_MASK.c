
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_mem_d {int flags; int lasterr; TYPE_1__* params; int * pools; } ;
struct TYPE_2__ {int size; int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct netmap_mem_d *VAR_2)
{
 int VAR_3;

 if (!FUNC_1(VAR_2->params))
  goto out;

 FUNC_3("reconfiguring");

 if (VAR_2->flags & VAR_0) {

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
   FUNC_2(&VAR_2->pools[VAR_3]);
  }
  VAR_2->flags &= ~VAR_0;
 }

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2->lasterr = FUNC_0(&VAR_2->pools[VAR_3],
    VAR_2->params[VAR_3].num, VAR_2->params[VAR_3].size);
  if (VAR_2->lasterr)
   goto out;
 }

out:

 return VAR_2->lasterr;
}
