
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker {int need_to_exit; int base; } ;






 int FUNC_0 (int ) ;

void
FUNC_1(int VAR_0, void* VAR_1)
{


 struct worker* VAR_2 = (struct worker*)VAR_1;
 switch(VAR_0) {

  case 131:
   FUNC_0(VAR_2->base);
   break;

  case 130:
   VAR_2->need_to_exit = 1;
   FUNC_0(VAR_2->base);
   break;

  case 129:
   VAR_2->need_to_exit = 1;
   FUNC_0(VAR_2->base);
   break;

  case 128:
   VAR_2->need_to_exit = 1;
   FUNC_0(VAR_2->base);
   break;
  default:

   break;
 }
}
