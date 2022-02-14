
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint64_t ;
struct _Dwarf_Abbrev {int dummy; } ;
struct TYPE_8__ {int ab_attrdef; scalar_t__ ab_atnum; scalar_t__ ab_length; void* ab_offset; int ab_children; void* ab_tag; void* ab_entry; } ;
struct TYPE_7__ {int cu_abbrev_hash; int * cu_dbg; } ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef TYPE_1__* Dwarf_CU ;
typedef TYPE_2__* Dwarf_Abbrev ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_3 (int) ;

int
FUNC_4(Dwarf_CU VAR_4, uint64_t VAR_5, uint64_t VAR_6, uint8_t VAR_7,
    uint64_t VAR_8, Dwarf_Abbrev *VAR_9, Dwarf_Error *VAR_10)
{
 Dwarf_Abbrev VAR_11;
 Dwarf_Debug VAR_12;

 VAR_12 = VAR_4 != ((void*)0) ? VAR_4->cu_dbg : ((void*)0);

 if ((VAR_11 = FUNC_3(sizeof(struct _Dwarf_Abbrev))) == ((void*)0)) {
  FUNC_0(VAR_12, VAR_10, VAR_0);
  return (VAR_0);
 }


 VAR_11->ab_entry = VAR_5;
 VAR_11->ab_tag = VAR_6;
 VAR_11->ab_children = VAR_7;
 VAR_11->ab_offset = VAR_8;
 VAR_11->ab_length = 0;
 VAR_11->ab_atnum = 0;


 FUNC_2(&VAR_11->ab_attrdef);


 if (VAR_4 != ((void*)0))
  FUNC_1(VAR_3, VAR_4->cu_abbrev_hash, VAR_2,
      sizeof(VAR_11->ab_entry), VAR_11);

 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_11;

 return (VAR_1);
}
