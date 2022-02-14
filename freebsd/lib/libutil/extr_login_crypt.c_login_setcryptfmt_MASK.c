
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int login_cap_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int * FUNC_2 (char*) ;
 char* FUNC_3 (int *,char*,char const*,int *) ;
 int VAR_0 ;

const char *
FUNC_4(login_cap_t *VAR_1, const char *VAR_2, const char *VAR_3) {
 const char *VAR_4;

 VAR_4 = FUNC_3(VAR_1, "passwd_format", VAR_2, ((void*)0));
 if (FUNC_2("CRYPT_DEBUG") != ((void*)0))
  FUNC_1(VAR_0, "login_setcryptfmt: "
      "passwd_format = %s\n", VAR_4);
 if (VAR_4 == ((void*)0))
  return (VAR_3);
 if (!FUNC_0(VAR_4))
  return (VAR_3);
 return (VAR_4);
}
