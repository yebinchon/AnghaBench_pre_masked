
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint64_t ;
struct _Dwarf_AttrDef {int dummy; } ;
struct TYPE_8__ {int ab_atnum; int ab_attrdef; } ;
struct TYPE_7__ {void* ad_offset; void* ad_form; void* ad_attrib; } ;
typedef int Dwarf_Error ;
typedef int Dwarf_Debug ;
typedef TYPE_1__* Dwarf_AttrDef ;
typedef TYPE_2__* Dwarf_Abbrev ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int) ;

int
FUNC_3(Dwarf_Debug VAR_4, Dwarf_Abbrev VAR_5, uint64_t VAR_6,
    uint64_t VAR_7, uint64_t VAR_8, Dwarf_AttrDef *VAR_9, Dwarf_Error *VAR_10)
{
 Dwarf_AttrDef VAR_11;

 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_4, VAR_10, VAR_0);
  return (VAR_0);
 }

 if ((VAR_11 = FUNC_2(sizeof(struct _Dwarf_AttrDef))) == ((void*)0)) {
  FUNC_0(VAR_4, VAR_10, VAR_1);
  return (VAR_1);
 }


 VAR_11->ad_attrib = VAR_6;
 VAR_11->ad_form = VAR_7;
 VAR_11->ad_offset = VAR_8;


 FUNC_1(&VAR_5->ab_attrdef, VAR_11, VAR_3);


 VAR_5->ab_atnum++;

 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_11;

 return (VAR_2);
}
