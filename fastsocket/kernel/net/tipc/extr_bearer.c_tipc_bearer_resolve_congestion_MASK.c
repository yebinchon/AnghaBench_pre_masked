
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct bearer {TYPE_1__ publ; int cong_links; } ;


 int FUNC_0 (struct bearer*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bearer*,struct link*) ;

int FUNC_5(struct bearer *VAR_0, struct link *VAR_1)
{
 int VAR_2 = 1;

 if (FUNC_1(&VAR_0->cong_links))
  return 1;
 FUNC_2(&VAR_0->publ.lock);
 if (!FUNC_0(VAR_0)) {
  FUNC_4(VAR_0, VAR_1);
  VAR_2 = 0;
 }
 FUNC_3(&VAR_0->publ.lock);
 return VAR_2;
}
