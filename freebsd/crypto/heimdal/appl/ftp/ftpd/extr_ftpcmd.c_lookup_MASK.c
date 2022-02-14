
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tab {int * name; } ;


 scalar_t__ FUNC_0 (char*,int *) ;

__attribute__((used)) static struct tab *
FUNC_1(struct tab *VAR_0, char *VAR_1)
{

 for (; VAR_0->name != ((void*)0); VAR_0++)
  if (FUNC_0(VAR_1, VAR_0->name) == 0)
   return (VAR_0);
 return (0);
}
