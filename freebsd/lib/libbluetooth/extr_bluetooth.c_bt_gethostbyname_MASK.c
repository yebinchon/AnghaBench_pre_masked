
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char* h_name; char** h_aliases; } ;


 int FUNC_0 () ;
 struct hostent* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char*,char const*) ;

struct hostent *
FUNC_4(char const *VAR_1)
{
 struct hostent *VAR_2;
 char **VAR_3;

 FUNC_2(VAR_0);
 while ((VAR_2 = FUNC_1()) != ((void*)0)) {
  if (FUNC_3(VAR_2->h_name, VAR_1) == 0)
   break;
  for (VAR_3 = VAR_2->h_aliases; *VAR_3 != ((void*)0); VAR_3++)
   if (FUNC_3(*VAR_3, VAR_1) == 0)
    goto found;
 }
found:
 FUNC_0();

 return (VAR_2);
}
