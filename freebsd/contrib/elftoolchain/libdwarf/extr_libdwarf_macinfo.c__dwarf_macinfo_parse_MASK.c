
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_10__ {int (* read ) (scalar_t__,scalar_t__*,int) ;} ;
struct TYPE_9__ {int dmd_type; char* dmd_macro; void* dmd_fileindex; void* dmd_lineno; scalar_t__ dmd_offset; } ;
struct TYPE_8__ {scalar_t__ ds_size; scalar_t__ ds_data; } ;
typedef void* Dwarf_Unsigned ;
typedef void* Dwarf_Signed ;
typedef TYPE_1__ Dwarf_Section ;
typedef TYPE_2__ Dwarf_Macro_Details ;
typedef int Dwarf_Error ;
typedef TYPE_3__* Dwarf_Debug ;


 int FUNC_0 (TYPE_3__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 void* FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_4(Dwarf_Debug VAR_3, Dwarf_Section *VAR_4, uint64_t *VAR_5,
    Dwarf_Macro_Details *VAR_6, Dwarf_Unsigned *VAR_7, Dwarf_Error *VAR_8)
{
 Dwarf_Unsigned VAR_9;
 Dwarf_Signed VAR_10[VAR_2];
 char *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_12 = 0;
 VAR_14 = 0;
 VAR_10[VAR_14] = -1;
 while (*VAR_5 < VAR_4->ds_size) {

  if (VAR_6 != ((void*)0))
   VAR_6[VAR_12].dmd_offset = *VAR_5;

  VAR_13 = VAR_3->read(VAR_4->ds_data, VAR_5, 1);

  if (VAR_6 != ((void*)0)) {
   VAR_6[VAR_12].dmd_type = VAR_13;
   VAR_6[VAR_12].dmd_fileindex = VAR_10[VAR_14];
  }

  switch (VAR_13) {
  case 0:
   break;
  case 132:
  case 129:
  case 128:
   VAR_9 = FUNC_1(VAR_4->ds_data, VAR_5);
   VAR_11 = (char *) VAR_4->ds_data;
   if (VAR_6 != ((void*)0)) {
    VAR_6[VAR_12].dmd_lineno = VAR_9;
    VAR_6[VAR_12].dmd_macro = VAR_11 + *VAR_5;

   }
   while (VAR_11[(*VAR_5)++] != '\0')
    ;
   break;
  case 130:
   VAR_9 = FUNC_1(VAR_4->ds_data, VAR_5);
   if (VAR_14 >= VAR_2 - 1) {
    FUNC_2(0);
   }
   VAR_10[++VAR_14] = FUNC_1(VAR_4->ds_data, VAR_5);
   if (VAR_6 != ((void*)0)) {
    VAR_6[VAR_12].dmd_lineno = VAR_9;
    VAR_6[VAR_12].dmd_fileindex = VAR_10[VAR_14];
   }
   break;
  case 131:
   if (VAR_14 > 0) {
    VAR_14--;
    break;
   }

  default:
   FUNC_0(VAR_3, VAR_8,
       VAR_0);
   return (VAR_0);
  }

  VAR_12++;

  if (VAR_13 == 0)
   break;
 }

 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_12;

 return (VAR_1);
}
