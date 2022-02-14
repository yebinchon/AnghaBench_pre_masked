
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_types {int * types; struct stab_types* next; } ;
struct stab_handle {unsigned int files; struct stab_types** file_types; } ;
typedef int debug_type ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct stab_types*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static debug_type *
FUNC_4 (struct stab_handle *VAR_2, const int *VAR_3)
{
  int VAR_4;
  int VAR_5;
  struct stab_types **VAR_6;

  VAR_4 = VAR_3[0];
  VAR_5 = VAR_3[1];

  if (VAR_4 < 0 || (unsigned int) VAR_4 >= VAR_2->files)
    {
      FUNC_1 (VAR_1, FUNC_0("Type file number %d out of range\n"), VAR_4);
      return ((void*)0);
    }
  if (VAR_5 < 0)
    {
      FUNC_1 (VAR_1, FUNC_0("Type index number %d out of range\n"), VAR_5);
      return ((void*)0);
    }

  VAR_6 = VAR_2->file_types + VAR_4;

  while (VAR_5 >= VAR_0)
    {
      if (*VAR_6 == ((void*)0))
 {
   *VAR_6 = (struct stab_types *) FUNC_3 (sizeof **VAR_6);
   FUNC_2 (*VAR_6, 0, sizeof **VAR_6);
 }
      VAR_6 = &(*VAR_6)->next;
      VAR_5 -= VAR_0;
    }
  if (*VAR_6 == ((void*)0))
    {
      *VAR_6 = (struct stab_types *) FUNC_3 (sizeof **VAR_6);
      FUNC_2 (*VAR_6, 0, sizeof **VAR_6);
    }

  return (*VAR_6)->types + VAR_5;
}
