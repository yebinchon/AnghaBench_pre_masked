
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {scalar_t__ ab_atnum; int ab_attrdef; } ;
struct TYPE_7__ {int ad_form; int ad_offset; int ad_attrib; } ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Off ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_AttrDef ;
typedef TYPE_2__* Dwarf_Abbrev ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;

int
FUNC_4(Dwarf_Abbrev VAR_6, Dwarf_Signed VAR_7,
    Dwarf_Half *VAR_8, Dwarf_Signed *VAR_9, Dwarf_Off *VAR_10,
    Dwarf_Error *VAR_11)
{
 Dwarf_AttrDef VAR_12;
 int VAR_13;

 if (VAR_6 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0) ||
     VAR_10 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_11, VAR_0);
  return (VAR_2);
 }

 if (VAR_7 < 0 || (uint64_t) VAR_7 >= VAR_6->ab_atnum) {
  FUNC_0(((void*)0), VAR_11, VAR_1);
  return (VAR_3);
 }

 VAR_12 = FUNC_1(&VAR_6->ab_attrdef);
 for (VAR_13 = 0; VAR_13 < VAR_7 && VAR_12 != ((void*)0); VAR_13++)
  VAR_12 = FUNC_2(VAR_12, VAR_5);

 FUNC_3(VAR_12 != ((void*)0));

 *VAR_8 = VAR_12->ad_attrib;
 *VAR_9 = VAR_12->ad_form;
 *VAR_10 = VAR_12->ad_offset;

 return (VAR_4);
}
