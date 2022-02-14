
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dc_tag; int * dc_create; } ;
typedef TYPE_1__ die_creator_t ;
typedef scalar_t__ Dwarf_Half ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const die_creator_t *
FUNC_0(Dwarf_Half VAR_1)
{
 const die_creator_t *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->dc_create != ((void*)0); VAR_2++) {
  if (VAR_2->dc_tag == VAR_1)
   return (VAR_2);
 }

 return (((void*)0));
}
