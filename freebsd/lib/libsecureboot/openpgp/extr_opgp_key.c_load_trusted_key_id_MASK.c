
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kfile ;
typedef int OpenPGP_key ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int * FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int,char*,char const*,char const*) ;
 char** VAR_2 ;

__attribute__((used)) static OpenPGP_key *
FUNC_3(const char *VAR_3)
{
 char VAR_4[VAR_0];
 const char **VAR_5;
 size_t VAR_6;

 for (VAR_5 = VAR_2; *VAR_5; VAR_5++) {
  VAR_6 = (size_t)FUNC_2(VAR_4, sizeof(VAR_4), "%s/%s", *VAR_5, VAR_3);
  if (VAR_6 >= sizeof(VAR_4))
   return (((void*)0));
  if (FUNC_0(VAR_4, VAR_1) == 0) {
   return (FUNC_1(VAR_4));
  }
 }
 return (((void*)0));
}
