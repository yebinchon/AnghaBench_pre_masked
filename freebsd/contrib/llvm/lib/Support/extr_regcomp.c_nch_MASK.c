
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse {TYPE_1__* g; } ;
typedef int cset ;
struct TYPE_2__ {int csetsize; } ;


 scalar_t__ FUNC_0 (int *,size_t) ;

__attribute__((used)) static int
FUNC_1(struct parse *VAR_0, cset *VAR_1)
{
 size_t VAR_2;
 size_t VAR_3 = (size_t)VAR_0->g->csetsize;
 int VAR_4 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  if (FUNC_0(VAR_1, VAR_2))
   VAR_4++;
 return(VAR_4);
}
