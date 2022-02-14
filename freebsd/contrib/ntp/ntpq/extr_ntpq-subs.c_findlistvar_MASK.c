
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varlist {int * name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;

__attribute__((used)) static struct varlist *
FUNC_1(
 struct varlist *VAR_1,
 char *VAR_2
 )
{
 struct varlist *VAR_3;

 for (VAR_3 = VAR_1; VAR_3 < VAR_1 + VAR_0 && VAR_3->name != ((void*)0); VAR_3++)
  if (!FUNC_0(VAR_2, VAR_3->name))
   return VAR_3;
 if (VAR_3 < VAR_1 + VAR_0)
  return VAR_3;

 return ((void*)0);
}
