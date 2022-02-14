
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {int dummy; } ;
struct autr_ta {int s; int fetched; int revoked; int last_change; } ;
 int VAR_0 ;
 int FUNC_0 (struct module_env*,struct autr_ta*,int*) ;
 int FUNC_1 (struct module_env*,struct autr_ta*,int*) ;
 int FUNC_2 (struct module_env*,struct autr_ta*,int*) ;
 int FUNC_3 (struct module_env*,struct autr_ta*,int*) ;
 int FUNC_4 (struct module_env*,struct autr_ta*,int*) ;
 int FUNC_5 (struct module_env*,struct autr_ta*,int*) ;
 int FUNC_6 (struct autr_ta*) ;
 int FUNC_7 (struct module_env*,struct autr_ta*,int*) ;
 int FUNC_8 (struct autr_ta*,int ,char*) ;

__attribute__((used)) static void
FUNC_9(struct module_env* VAR_1, struct autr_ta* VAR_2, int* VAR_3)
{
 FUNC_6(VAR_2);
 switch(VAR_2->s) {

 case 129:

  if (VAR_2->fetched)
   FUNC_3(VAR_1, VAR_2, VAR_3);
  break;

 case 133:

  if (!VAR_2->fetched)
   FUNC_2(VAR_1, VAR_2, VAR_3);

  else FUNC_0(VAR_1, VAR_2, VAR_3);
  break;

 case 128:

  if (VAR_2->revoked)
   FUNC_5(VAR_1, VAR_2, VAR_3);

  else if (!VAR_2->fetched)
   FUNC_2(VAR_1, VAR_2, VAR_3);
  else if(!VAR_2->last_change) {
   FUNC_8(VAR_2, VAR_0, "first seen");
   FUNC_7(VAR_1, VAR_2, VAR_3);
  }
  break;

 case 132:

  if (VAR_2->revoked)
   FUNC_5(VAR_1, VAR_2, VAR_3);

  else if (VAR_2->fetched)
   FUNC_1(VAR_1, VAR_2, VAR_3);
  break;

 case 130:
  if (VAR_2->fetched)
   FUNC_7(VAR_1, VAR_2, VAR_3);

  else FUNC_4(VAR_1, VAR_2, VAR_3);
  break;

 case 131:
 default:
  break;
 }
}
