
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,int ,int*) ;
 int VAR_2 ;

void
FUNC_3(int VAR_3, u_int32_t VAR_4, int VAR_5)
{
 if (FUNC_2(VAR_3, VAR_0, &VAR_4))
  FUNC_0(1, "DIOCSETDEBUG");
 if ((VAR_5 & VAR_1) == 0) {
  FUNC_1(VAR_2, "debug level set to '");
  switch (VAR_4) {
  case 129:
   FUNC_1(VAR_2, "none");
   break;
  case 128:
   FUNC_1(VAR_2, "urgent");
   break;
  case 131:
   FUNC_1(VAR_2, "misc");
   break;
  case 130:
   FUNC_1(VAR_2, "loud");
   break;
  default:
   FUNC_1(VAR_2, "<invalid>");
   break;
  }
  FUNC_1(VAR_2, "'\n");
 }
}
