
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_msg_type_name_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 () ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_9(int VAR_9)
{
 mach_msg_type_name_t VAR_10;




 if (FUNC_5(FUNC_8(), VAR_3,
     &VAR_7) != VAR_0) {
  FUNC_1("Allocation of port set failed");
  return (-1);
 }





 if (FUNC_5(FUNC_8(), VAR_4,
     &VAR_8) != VAR_0 ||
     FUNC_7(FUNC_8(), VAR_8, VAR_7) !=
     VAR_0) {
  FUNC_1("Allocation of signal port failed");
  return (-1);
 }




 if (VAR_9) {



  if ((VAR_6 = FUNC_3(VAR_5)) ==
      VAR_2 || FUNC_7(FUNC_8(),
      VAR_6, VAR_7) != VAR_0) {
   FUNC_1("Cannot get Mach control port"
                            " via launchd");
   return (-1);
  } else
   FUNC_0("Mach control port registered"
       " via launchd");
 } else {



  if (FUNC_5(FUNC_8(),
      VAR_4, &VAR_6) != VAR_0 ||
      FUNC_7(FUNC_8(), VAR_6,
      VAR_7) != VAR_0)
   FUNC_1("Allocation of trigger port failed");




  FUNC_6(FUNC_8(), VAR_6,
      VAR_1, &VAR_6, &VAR_10);




  if (FUNC_2(FUNC_4(),
      VAR_6) != VAR_0) {
                        FUNC_1("Cannot set Mach control port");
   return (-1);
  } else
   FUNC_0("Mach control port registered");
 }

 return (0);
}
