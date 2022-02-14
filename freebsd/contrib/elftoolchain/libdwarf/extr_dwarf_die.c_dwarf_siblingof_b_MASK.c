
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_24__ {scalar_t__ at_form; TYPE_3__* u; } ;
struct TYPE_23__ {int cu_next_offset; int cu_dwarf_size; scalar_t__ cu_offset; int cu_1st_offset; } ;
struct TYPE_22__ {TYPE_6__* dbg_tu_current; TYPE_6__* dbg_cu_current; int * dbg_types_sec; int * dbg_info_sec; } ;
struct TYPE_21__ {int die_dbg; scalar_t__ die_next_off; TYPE_2__* die_ab; TYPE_1__* die_cu; } ;
struct TYPE_20__ {scalar_t__ u64; } ;
struct TYPE_19__ {scalar_t__ ab_children; } ;
struct TYPE_18__ {scalar_t__ cu_is_info; } ;
typedef int Dwarf_Section ;
typedef int Dwarf_Error ;
typedef TYPE_4__* Dwarf_Die ;
typedef TYPE_5__* Dwarf_Debug ;
typedef TYPE_6__* Dwarf_CU ;
typedef scalar_t__ Dwarf_Bool ;
typedef TYPE_7__* Dwarf_Attribute ;


 int FUNC_0 (TYPE_5__*,int *,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_7__* FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ,int *,TYPE_6__*,int ,scalar_t__,int ,TYPE_4__**,int,int *) ;
 int FUNC_3 (TYPE_5__*,int ,scalar_t__,TYPE_4__**,int *) ;

int
FUNC_4(Dwarf_Debug VAR_10, Dwarf_Die VAR_11, Dwarf_Die *VAR_12,
    Dwarf_Bool VAR_13, Dwarf_Error *VAR_14)
{
 Dwarf_CU VAR_15;
 Dwarf_Attribute VAR_16;
 Dwarf_Section *VAR_17;
 uint64_t VAR_18;
 int VAR_19, VAR_20;

 if (VAR_10 == ((void*)0) || VAR_12 == ((void*)0)) {
  FUNC_0(VAR_10, VAR_14, VAR_2);
  return (VAR_6);
 }

 VAR_17 = VAR_13 ? VAR_10->dbg_info_sec : VAR_10->dbg_types_sec;
 VAR_15 = VAR_13 ? VAR_10->dbg_cu_current : VAR_10->dbg_tu_current;

 if (VAR_15 == ((void*)0)) {
  FUNC_0(VAR_10, VAR_14, VAR_3);
  return (VAR_6);
 }


 if (VAR_11 == ((void*)0))
  return (FUNC_3(VAR_10, VAR_15->cu_1st_offset, VAR_13,
      VAR_12, VAR_14));





 if (VAR_13 != VAR_11->die_cu->cu_is_info) {
  FUNC_0(VAR_10, VAR_14, VAR_2);
  return (VAR_6);
 }





 VAR_20 = 0;
 if (VAR_11->die_ab->ab_children == VAR_1)
  VAR_18 = VAR_11->die_next_off;
 else {




  if ((VAR_16 = FUNC_1(VAR_11, VAR_0)) != ((void*)0)) {
   if (VAR_16->at_form != VAR_9)
    VAR_18 = VAR_16->u[0].u64 + VAR_15->cu_offset;
   else
    VAR_18 = VAR_16->u[0].u64;
  } else {
   VAR_18 = VAR_11->die_next_off;
   VAR_20 = 1;
  }
 }

 VAR_19 = FUNC_2(VAR_11->die_dbg, VAR_17, VAR_15, VAR_15->cu_dwarf_size, VAR_18,
     VAR_15->cu_next_offset, VAR_12, VAR_20, VAR_14);

 if (VAR_19 == VAR_5) {
  FUNC_0(VAR_10, VAR_14, VAR_5);
  return (VAR_7);
 } else if (VAR_19 != VAR_4)
  return (VAR_6);

 return (VAR_8);
}
