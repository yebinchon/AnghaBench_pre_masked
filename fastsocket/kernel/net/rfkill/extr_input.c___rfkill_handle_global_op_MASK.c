
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rfkill_sched_op { ____Placeholder_rfkill_sched_op } rfkill_sched_op ;


 unsigned int VAR_0 ;




 int FUNC_0 (int,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int,int) ;

__attribute__((used)) static void FUNC_5(enum rfkill_sched_op VAR_1)
{
 unsigned int VAR_2;

 switch (VAR_1) {
 case 131:
  FUNC_1();
  break;
 case 130:
  FUNC_3();
  break;
 case 128:
  FUNC_2();
  break;
 case 129:
  FUNC_2();
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   FUNC_4(VAR_2, 0);
  break;
 default:

  FUNC_1();
  FUNC_0(1, "Unknown requested operation %d! "
   "rfkill Emergency Power Off activated\n",
   VAR_1);
 }
}
