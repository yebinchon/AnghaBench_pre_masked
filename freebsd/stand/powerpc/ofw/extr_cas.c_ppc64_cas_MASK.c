
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ihandle_t ;
typedef scalar_t__ cell_t ;


 int FUNC_0 (char*,int,int,int,int *,scalar_t__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;




 int VAR_1 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,...) ;

int
FUNC_6(void)
{
 int VAR_2;
 ihandle_t VAR_3;
 cell_t VAR_4;


 switch (FUNC_3() & VAR_0) {
  case 131:
  case 130:
  case 129:
  case 128:
   break;
  default:
   return (0);
 }


 if (FUNC_4())
  return (0);

 VAR_3 = FUNC_2("/");
 if (VAR_3 == -1) {
  FUNC_5("cas: failed to open / node\n");
  return (-1);
 }

 if ((VAR_2 = FUNC_0("ibm,client-architecture-support",
     VAR_3, 1, 1, &VAR_1, &VAR_4)))
  FUNC_5("cas: failed to call CAS method\n");
 else if (VAR_4) {
  FUNC_5("cas: error: 0x%08lX\n", VAR_4);
  VAR_2 = -1;
 }

 FUNC_1(VAR_3);
 return (VAR_2);
}
