
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int FUNC_0 (char***,int *,char*,char*) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int ) ;
 char* FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(char **VAR_0, char ***VAR_1, u_int *VAR_2,
    const char *VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6;

 if (VAR_0 == ((void*)0))
  return;

 for(VAR_6 = 0; VAR_0[VAR_6] != ((void*)0); VAR_6++) {
  VAR_4 = FUNC_5(VAR_0[VAR_6]);
  if ((VAR_5 = FUNC_4(VAR_4, "=")) == ((void*)0)) {
   FUNC_2(VAR_4);
   continue;
  }
  *VAR_5++ = '\0';

  if (VAR_3 == ((void*)0) ||
      FUNC_3(VAR_4, VAR_3, 0) != 1) {
   FUNC_1("Copy environment: %s=%s", VAR_4, VAR_5);
   FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5);
  }

  FUNC_2(VAR_4);
 }
}
