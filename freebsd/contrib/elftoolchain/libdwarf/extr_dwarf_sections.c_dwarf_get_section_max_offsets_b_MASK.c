
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dbg_seccnt; TYPE_1__* dbg_section; } ;
struct TYPE_4__ {char* ds_name; scalar_t__ ds_size; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_2__* Dwarf_Debug ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,scalar_t__) ;
 int FUNC_1 (char const*,char*) ;

int
FUNC_2(Dwarf_Debug VAR_2, Dwarf_Unsigned *VAR_3,
    Dwarf_Unsigned *VAR_4, Dwarf_Unsigned *VAR_5,
    Dwarf_Unsigned *VAR_6, Dwarf_Unsigned *VAR_7,
    Dwarf_Unsigned *VAR_8, Dwarf_Unsigned *VAR_9,
    Dwarf_Unsigned *VAR_10, Dwarf_Unsigned *VAR_11,
    Dwarf_Unsigned *VAR_12, Dwarf_Unsigned *VAR_13,
    Dwarf_Unsigned *VAR_14)
{
 const char *VAR_15;
 Dwarf_Unsigned VAR_16;
 int VAR_17;

 if (VAR_2 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_3, 0);
 FUNC_0(VAR_4, 0);
 FUNC_0(VAR_5, 0);
 FUNC_0(VAR_6, 0);
 FUNC_0(VAR_7, 0);
 FUNC_0(VAR_8, 0);
 FUNC_0(VAR_9, 0);
 FUNC_0(VAR_10, 0);
 FUNC_0(VAR_11, 0);
 FUNC_0(VAR_12, 0);
 FUNC_0(VAR_13, 0);
 FUNC_0(VAR_14, 0);

 for (VAR_17 = 0; (Dwarf_Unsigned) VAR_17 < VAR_2->dbg_seccnt; VAR_17++) {
  VAR_15 = VAR_2->dbg_section[VAR_17].ds_name;
  VAR_16 = VAR_2->dbg_section[VAR_17].ds_size;
  if (!FUNC_1(VAR_15, ".debug_info"))
   FUNC_0(VAR_3, VAR_16);
  else if (!FUNC_1(VAR_15, ".debug_abbrev"))
   FUNC_0(VAR_4, VAR_16);
  else if (!FUNC_1(VAR_15, ".debug_line"))
   FUNC_0(VAR_5, VAR_16);
  else if (!FUNC_1(VAR_15, ".debug_loc"))
   FUNC_0(VAR_6, VAR_16);
  else if (!FUNC_1(VAR_15, ".debug_aranges"))
   FUNC_0(VAR_7, VAR_16);
  else if (!FUNC_1(VAR_15, ".debug_macinfo"))
   FUNC_0(VAR_8, VAR_16);
  else if (!FUNC_1(VAR_15, ".debug_pubnames"))
   FUNC_0(VAR_9, VAR_16);
  else if (!FUNC_1(VAR_15, ".debug_str"))
   FUNC_0(VAR_10, VAR_16);
  else if (!FUNC_1(VAR_15, ".debug_frame"))
   FUNC_0(VAR_11, VAR_16);
  else if (!FUNC_1(VAR_15, ".debug_ranges"))
   FUNC_0(VAR_12, VAR_16);
  else if (!FUNC_1(VAR_15, ".debug_pubtypes"))
   FUNC_0(VAR_13, VAR_16);
  else if (!FUNC_1(VAR_15, ".debug_types"))
   FUNC_0(VAR_14, VAR_16);
 }

 return (VAR_1);
}
