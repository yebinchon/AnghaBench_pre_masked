
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 char* FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3(char **VAR_0, u_int VAR_1)
{
 u_int VAR_2;
 char *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 = FUNC_2(VAR_0[VAR_2], FUNC_1());
  FUNC_0(VAR_0[VAR_2]);
  VAR_0[VAR_2] = VAR_3;
 }
}
