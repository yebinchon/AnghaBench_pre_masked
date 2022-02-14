
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_clone {int dummy; } ;


 int ** VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static int
FUNC_1(struct if_clone *VAR_1, const char *VAR_2)
{
 int VAR_3;

 for(VAR_3 = 0; VAR_0[VAR_3] != ((void*)0); VAR_3++) {
  if (FUNC_0(VAR_0[VAR_3], VAR_2) == 0)
   return (1);
 }

 return (0);
}
