
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_name_struct {char const* name; char const* alias; int * subalign; int * align; scalar_t__ ok_to_load; int * next; int * vma; } ;
typedef int etree_type ;


 struct section_name_struct** FUNC_0 (char const*,struct section_name_struct**) ;

__attribute__((used)) static void
FUNC_1 (struct section_name_struct **VAR_0,
   const char *VAR_1,
   etree_type *VAR_2,
   const char *VAR_3,
   etree_type *VAR_4,
   etree_type *VAR_5)
{
  struct section_name_struct **VAR_6 = FUNC_0 (VAR_1, VAR_0);

  (*VAR_6)->name = VAR_1;
  (*VAR_6)->vma = VAR_2;
  (*VAR_6)->next = ((void*)0);
  (*VAR_6)->ok_to_load = 0;
  (*VAR_6)->alias = VAR_3;
  (*VAR_6)->align = VAR_4;
  (*VAR_6)->subalign = VAR_5;
}
