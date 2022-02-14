
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct objfile {int dummy; } ;


 struct type* VAR_0 ;
 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (struct objfile*) ;
 int VAR_1 ;

__attribute__((used)) static struct type *
FUNC_2 (char **VAR_2, struct objfile *VAR_3)
{
  FUNC_0 (&VAR_1, "couldn't parse type; debugger out of date?");
  while (1)
    {

      while (**VAR_2 != '\0')
 {
   (*VAR_2)++;
 }


      if ((*VAR_2)[-1] == '\\' || (*VAR_2)[-1] == '?')
 {
   *VAR_2 = FUNC_1 (VAR_3);
 }
      else
 {
   break;
 }
    }
  return (VAR_0);
}
