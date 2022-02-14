
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct core_fns {scalar_t__ (* check_format ) (int *) ;struct core_fns* next; } ;
typedef int bfd ;


 struct core_fns* VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1 (bfd *VAR_1)
{
  struct core_fns *VAR_2;

  for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    {
      if (VAR_2->check_format (VAR_1))
 {
   return (1);
 }
    }
  return (0);
}
