
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int always_on; } ;
struct regnode {int enable_cnt; int flags; struct regnode* parent; TYPE_1__ std_param; } ;


 int FUNC_0 (struct regnode*,int,int*) ;
 int FUNC_1 (struct regnode*) ;
 int FUNC_2 (struct regnode*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct regnode*) ;

int
FUNC_6(struct regnode *VAR_1)
{
 int VAR_2;
 int VAR_3;

 FUNC_3();
 VAR_3 = 0;

 FUNC_2(VAR_1);

 if (VAR_1->enable_cnt == 1 &&
     (VAR_1->flags & VAR_0) == 0 &&
     !VAR_1->std_param.always_on) {
  VAR_3 = FUNC_0(VAR_1, 0, &VAR_2);
  if (VAR_3 != 0) {
   FUNC_1(VAR_1);
   return (VAR_3);
  }
  FUNC_4(VAR_2);
 }
 VAR_1->enable_cnt--;
 FUNC_1(VAR_1);

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3 != 0)
  return (VAR_3);
 if (VAR_1->parent != ((void*)0))
  VAR_3 = FUNC_6(VAR_1->parent);
 return (VAR_3);
}
