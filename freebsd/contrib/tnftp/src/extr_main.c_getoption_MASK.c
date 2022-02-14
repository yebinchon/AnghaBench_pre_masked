
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* name; } ;


 struct option* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

struct option *
FUNC_1(const char *VAR_1)
{
 const char *VAR_2;
 struct option *VAR_3;

 if (VAR_1 == ((void*)0))
  return (((void*)0));
 for (VAR_3 = VAR_0; (VAR_2 = VAR_3->name) != ((void*)0); VAR_3++) {
  if (FUNC_0(VAR_2, VAR_1) == 0)
   return (VAR_3);
 }
 return (((void*)0));
}
