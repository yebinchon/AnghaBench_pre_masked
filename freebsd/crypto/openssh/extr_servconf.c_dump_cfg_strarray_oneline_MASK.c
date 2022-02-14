
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef scalar_t__ ServerOpCodes ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(ServerOpCodes VAR_1, u_int VAR_2, char **VAR_3)
{
 u_int VAR_4;

 if (VAR_2 <= 0 && VAR_1 != VAR_0)
  return;
 FUNC_1("%s", FUNC_0(VAR_1));
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_1(" %s", VAR_3[VAR_4]);
 if (VAR_1 == VAR_0 && VAR_2 == 0)
  FUNC_1(" any");
 FUNC_1("\n");
}
