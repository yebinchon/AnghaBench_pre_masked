
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nai_realm {char* realm; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct nai_realm *VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;
 int VAR_5 = 0;

 if (VAR_0->realm == ((void*)0) || VAR_1 == ((void*)0))
  return 0;

 if (FUNC_2(VAR_0->realm, ';') == ((void*)0))
  return FUNC_1(VAR_0->realm, VAR_1) == 0;

 VAR_2 = FUNC_3(VAR_0->realm);
 if (VAR_2 == ((void*)0))
  return 0;

 VAR_3 = VAR_2;
 while (*VAR_3) {
  VAR_4 = FUNC_2(VAR_3, ';');
  if (VAR_4)
   *VAR_4 = '\0';
  if (FUNC_1(VAR_3, VAR_1) == 0) {
   VAR_5 = 1;
   break;
  }
  if (VAR_4 == ((void*)0))
   break;
  VAR_3 = VAR_4 + 1;
 }

 FUNC_0(VAR_2);

 return VAR_5;
}
