
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int ServerOpCodes ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_2(ServerOpCodes VAR_0, u_int VAR_1, char **VAR_2)
{
 u_int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_1("%s %s\n", FUNC_0(VAR_0), VAR_2[VAR_3]);
}
