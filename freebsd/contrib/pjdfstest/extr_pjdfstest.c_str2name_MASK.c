
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {int n_name; int * n_str; } ;


 scalar_t__ FUNC_0 (int *,char*) ;

__attribute__((used)) static int
FUNC_1(struct name *VAR_0, char *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].n_str != ((void*)0); VAR_2++) {
  if (FUNC_0(VAR_0[VAR_2].n_str, VAR_1) == 0)
   return (VAR_0[VAR_2].n_name);
 }
 return (-1);
}
