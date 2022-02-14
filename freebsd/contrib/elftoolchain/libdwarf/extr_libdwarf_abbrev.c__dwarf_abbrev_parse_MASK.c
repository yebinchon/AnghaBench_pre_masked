
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_13__ {int ab_length; } ;
struct TYPE_12__ {int (* read ) (int ,scalar_t__*,int) ;} ;
struct TYPE_11__ {scalar_t__ ds_size; int ds_data; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_1__ Dwarf_Section ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Debug ;
typedef int Dwarf_CU ;
typedef TYPE_3__* Dwarf_Abbrev ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int ,scalar_t__,TYPE_3__**,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,int *,int *) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__*,int) ;

int
FUNC_6(Dwarf_Debug VAR_2, Dwarf_CU VAR_3, Dwarf_Unsigned *VAR_4,
    Dwarf_Abbrev *VAR_5, Dwarf_Error *VAR_6)
{
 Dwarf_Section *VAR_7;
 uint64_t VAR_8;
 uint64_t VAR_9;
 uint64_t VAR_10;
 uint64_t VAR_11;
 uint64_t VAR_12;
 uint64_t VAR_13;
 uint8_t VAR_14;
 int VAR_15;

 FUNC_4(VAR_5 != ((void*)0));

 VAR_7 = FUNC_2(VAR_2, ".debug_abbrev");
 if (VAR_7 == ((void*)0) || *VAR_4 >= VAR_7->ds_size)
  return (VAR_1);

 VAR_11 = *VAR_4;

 VAR_9 = FUNC_3(VAR_7->ds_data, VAR_4);
 if (VAR_9 == 0) {

  VAR_15 = FUNC_0(VAR_3, VAR_9, 0, 0, VAR_11, VAR_5,
      VAR_6);
  if (VAR_15 == VAR_0) {
   (*VAR_5)->ab_length = 1;
   return (VAR_15);
  } else
   return (VAR_15);
 }
 VAR_13 = FUNC_3(VAR_7->ds_data, VAR_4);
 VAR_14 = VAR_2->read(VAR_7->ds_data, VAR_4, 1);
 if ((VAR_15 = FUNC_0(VAR_3, VAR_9, VAR_13, VAR_14, VAR_11,
     VAR_5, VAR_6)) != VAR_0)
  return (VAR_15);


 do {
  VAR_12 = *VAR_4;
  VAR_8 = FUNC_3(VAR_7->ds_data, VAR_4);
  VAR_10 = FUNC_3(VAR_7->ds_data, VAR_4);
  if (VAR_8 != 0)
   if ((VAR_15 = FUNC_1(VAR_2, *VAR_5, VAR_8,
       VAR_10, VAR_12, ((void*)0), VAR_6)) != VAR_0)
    return (VAR_15);
 } while (VAR_8 != 0);

 (*VAR_5)->ab_length = *VAR_4 - VAR_11;

 return (VAR_15);
}
