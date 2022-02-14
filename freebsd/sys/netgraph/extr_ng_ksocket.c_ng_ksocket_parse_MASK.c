
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_ksocket_alias {int family; int value; int * name; } ;


 scalar_t__ FUNC_0 (char const*,int *) ;
 scalar_t__ FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_2(const struct ng_ksocket_alias *VAR_0,
 const char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 char *VAR_5;


 for (VAR_3 = 0; VAR_0[VAR_3].name != ((void*)0); VAR_3++) {
  if (FUNC_0(VAR_1, VAR_0[VAR_3].name) == 0
      && VAR_0[VAR_3].family == VAR_2)
   return VAR_0[VAR_3].value;
 }


 VAR_4 = (int)FUNC_1(VAR_1, &VAR_5, 10);
 if (VAR_4 < 0 || *VAR_5 != '\0')
  return (-1);
 return (VAR_4);
}
