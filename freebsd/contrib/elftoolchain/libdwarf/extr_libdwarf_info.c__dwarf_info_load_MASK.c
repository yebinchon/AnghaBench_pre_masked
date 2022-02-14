
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct _Dwarf_CU {int dummy; } ;
struct TYPE_10__ {int signature; } ;
struct TYPE_13__ {int cu_dwarf_size; int cu_length_size; int cu_version; int cu_abbrev_offset; int cu_abbrev_offset_cur; int cu_pointer_size; int cu_type_offset; scalar_t__ cu_1st_offset; TYPE_1__ cu_type_sig; scalar_t__ cu_next_offset; scalar_t__ cu_length; scalar_t__ cu_offset; scalar_t__ cu_is_info; TYPE_3__* cu_dbg; } ;
struct TYPE_12__ {int dbg_info_loaded; scalar_t__ dbg_info_off; int dbg_types_loaded; scalar_t__ dbg_types_off; scalar_t__ (* read ) (scalar_t__,scalar_t__*,int) ;int dbg_tu; int dbg_cu; TYPE_2__* dbg_types_sec; TYPE_2__* dbg_info_sec; } ;
struct TYPE_11__ {scalar_t__ ds_size; scalar_t__ ds_data; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_2__ Dwarf_Section ;
typedef int Dwarf_Error ;
typedef TYPE_3__* Dwarf_Debug ;
typedef TYPE_4__* Dwarf_CU ;
typedef scalar_t__ Dwarf_Bool ;


 int FUNC_0 (TYPE_3__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,TYPE_4__*,int ) ;
 TYPE_4__* FUNC_2 (int,int) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__*,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__*,int) ;
 int FUNC_7 (scalar_t__,scalar_t__*,int) ;
 int FUNC_8 (scalar_t__,scalar_t__*,int) ;
 int FUNC_9 (scalar_t__,scalar_t__*,int) ;
 int FUNC_10 (scalar_t__,scalar_t__*,int) ;

int
FUNC_11(Dwarf_Debug VAR_6, Dwarf_Bool VAR_7, Dwarf_Bool VAR_8,
    Dwarf_Error *VAR_9)
{
 Dwarf_CU VAR_10;
 Dwarf_Section *VAR_11;
 int VAR_12, VAR_13;
 uint64_t VAR_14;
 uint64_t VAR_15;
 uint64_t VAR_16;

 VAR_13 = VAR_2;

 if (VAR_8) {
  if (VAR_6->dbg_info_loaded)
   return (VAR_13);
  VAR_16 = VAR_6->dbg_info_off;
  VAR_11 = VAR_6->dbg_info_sec;
  if (VAR_11 == ((void*)0))
   return (VAR_3);
 } else {
  if (VAR_6->dbg_types_loaded)
   return (VAR_13);
  VAR_16 = VAR_6->dbg_types_off;
  VAR_11 = VAR_6->dbg_types_sec;
  if (VAR_11 == ((void*)0))
   return (VAR_3);
 }

 while (VAR_16 < VAR_11->ds_size) {
  if ((VAR_10 = FUNC_2(1, sizeof(struct _Dwarf_CU))) == ((void*)0)) {
   FUNC_0(VAR_6, VAR_9, VAR_1);
   return (VAR_1);
  }

  VAR_10->cu_dbg = VAR_6;
  VAR_10->cu_is_info = VAR_8;
  VAR_10->cu_offset = VAR_16;

  VAR_14 = VAR_6->read(VAR_11->ds_data, &VAR_16, 4);
  if (VAR_14 == 0xffffffff) {
   VAR_14 = VAR_6->read(VAR_11->ds_data, &VAR_16, 8);
   VAR_12 = 8;
  } else
   VAR_12 = 4;
  VAR_10->cu_dwarf_size = VAR_12;






  if (VAR_14 > VAR_11->ds_size - VAR_16) {
   FUNC_3(VAR_10);
   FUNC_0(VAR_6, VAR_9, VAR_0);
   return (VAR_0);
  }


  VAR_15 = VAR_16 + VAR_14;
  if (VAR_8)
   VAR_6->dbg_info_off = VAR_15;
  else
   VAR_6->dbg_types_off = VAR_15;


  VAR_10->cu_length = VAR_14;
  VAR_10->cu_length_size = (VAR_12 == 4 ? 4 : 12);
  VAR_10->cu_version = VAR_6->read(VAR_11->ds_data, &VAR_16, 2);
  VAR_10->cu_abbrev_offset = VAR_6->read(VAR_11->ds_data, &VAR_16,
      VAR_12);
  VAR_10->cu_abbrev_offset_cur = VAR_10->cu_abbrev_offset;
  VAR_10->cu_pointer_size = VAR_6->read(VAR_11->ds_data, &VAR_16, 1);
  VAR_10->cu_next_offset = VAR_15;


  if (!VAR_8) {
   FUNC_4(VAR_10->cu_type_sig.signature,
       (char *) VAR_11->ds_data + VAR_16, 8);
   VAR_16 += 8;
   VAR_10->cu_type_offset = VAR_6->read(VAR_11->ds_data, &VAR_16,
       VAR_12);
  }


  if (VAR_8)
   FUNC_1(&VAR_6->dbg_cu, VAR_10, VAR_5);
  else
   FUNC_1(&VAR_6->dbg_tu, VAR_10, VAR_5);

  if (VAR_10->cu_version < 2 || VAR_10->cu_version > 4) {
   FUNC_0(VAR_6, VAR_9, VAR_4);
   VAR_13 = VAR_4;
   break;
  }

  VAR_10->cu_1st_offset = VAR_16;

  VAR_16 = VAR_15;

  if (!VAR_7)
   break;
 }

 if (VAR_8) {
  if ((Dwarf_Unsigned) VAR_6->dbg_info_off >= VAR_11->ds_size)
   VAR_6->dbg_info_loaded = 1;
 } else {
  if ((Dwarf_Unsigned) VAR_6->dbg_types_off >= VAR_11->ds_size)
   VAR_6->dbg_types_loaded = 1;
 }

 return (VAR_13);
}
