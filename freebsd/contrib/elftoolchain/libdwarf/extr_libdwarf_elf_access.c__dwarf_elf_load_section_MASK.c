
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ed_data; int * ed_alloc; } ;
struct TYPE_5__ {size_t eo_seccnt; TYPE_3__* eo_data; } ;
struct TYPE_4__ {int * d_buf; } ;
typedef int Dwarf_Small ;
typedef size_t Dwarf_Half ;
typedef TYPE_2__ Dwarf_Elf_Object ;
typedef TYPE_3__ Dwarf_Elf_Data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

int
FUNC_1(void *VAR_5, Dwarf_Half VAR_6, Dwarf_Small** VAR_7,
    int *VAR_8)
{
 Dwarf_Elf_Object *VAR_9;
 Dwarf_Elf_Data *VAR_10;

 VAR_9 = VAR_5;
 FUNC_0(VAR_9 != ((void*)0));

 if (VAR_7 == ((void*)0)) {
  if (VAR_8)
   *VAR_8 = VAR_0;
  return (VAR_2);
 }

 if (VAR_6 >= VAR_9->eo_seccnt) {
  if (VAR_8)
   *VAR_8 = VAR_1;
  return (VAR_3);
 }

 VAR_10 = &VAR_9->eo_data[VAR_6];

 if (VAR_10->ed_alloc != ((void*)0))
  *VAR_7 = VAR_10->ed_alloc;
 else {
  if (VAR_10->ed_data == ((void*)0)) {
   if (VAR_8)
    *VAR_8 = VAR_1;
   return (VAR_3);
  }
  *VAR_7 = VAR_10->ed_data->d_buf;
 }

 return (VAR_4);
}
