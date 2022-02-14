
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct _Dwarf_LineInfo {int dummy; } ;
struct _Dwarf_ArangeSet {int dummy; } ;
struct TYPE_8__ {int dbg_offset_size; int dbg_pointer_size; int dbgp_flags; TYPE_2__* dbgp_as; TYPE_1__* dbgp_lineinfo; int dbgp_fdelist; int dbgp_cielist; int dbgp_drslist; int dbgp_seclist; int dbgp_pelist; int dbgp_dielist; int write_alloc; int write; int dbgp_isa; } ;
struct TYPE_7__ {int as_arlist; } ;
struct TYPE_6__ {int li_lnlist; int li_lflist; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Error ;
typedef TYPE_3__* Dwarf_Debug ;


 int FUNC_0 (TYPE_3__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int,int) ;

__attribute__((used)) static int
FUNC_4(Dwarf_Debug VAR_17, Dwarf_Unsigned VAR_18, Dwarf_Error *VAR_19)
{


 VAR_17->dbg_offset_size = 4;

 if (VAR_18 & VAR_2 && VAR_18 & VAR_3) {
  FUNC_0(VAR_17, VAR_19, VAR_8);
  return (VAR_8);
 }

 if ((VAR_18 & VAR_2) == 0 && (VAR_18 & VAR_3) == 0)
  VAR_18 |= VAR_2;

 if (VAR_18 & VAR_3)
  VAR_17->dbg_pointer_size = 8;
 else
  VAR_17->dbg_pointer_size = 4;

 if (VAR_18 & VAR_0 && VAR_18 & VAR_1) {
  FUNC_0(VAR_17, VAR_19, VAR_8);
  return (VAR_8);
 }

 if (VAR_18 & VAR_0)
  VAR_17->dbgp_isa = VAR_11;
 else
  VAR_17->dbgp_isa = VAR_12;

 if (VAR_18 & VAR_6 && VAR_18 & VAR_7) {
  FUNC_0(VAR_17, VAR_19, VAR_8);
  return (VAR_8);
 }

 if ((VAR_18 & VAR_6) == 0 &&
     (VAR_18 & VAR_7) == 0) {

  VAR_18 |= VAR_6;



 }

 if (VAR_18 & VAR_6) {
  VAR_17->write = VAR_15;
  VAR_17->write_alloc = VAR_16;
 } else if (VAR_18 & VAR_7) {
  VAR_17->write = VAR_13;
  VAR_17->write_alloc = VAR_14;
 } else
  FUNC_2(0);

 if (VAR_18 & VAR_4 &&
     VAR_18 & VAR_5) {
  FUNC_0(VAR_17, VAR_19, VAR_8);
  return (VAR_8);
 }

 if ((VAR_18 & VAR_4) == 0 &&
     (VAR_18 & VAR_5) == 0)
  VAR_18 |= VAR_4;

 VAR_17->dbgp_flags = VAR_18;

 FUNC_1(&VAR_17->dbgp_dielist);
 FUNC_1(&VAR_17->dbgp_pelist);
 FUNC_1(&VAR_17->dbgp_seclist);
 FUNC_1(&VAR_17->dbgp_drslist);
 FUNC_1(&VAR_17->dbgp_cielist);
 FUNC_1(&VAR_17->dbgp_fdelist);

 if ((VAR_17->dbgp_lineinfo = FUNC_3(1, sizeof(struct _Dwarf_LineInfo))) ==
     ((void*)0)) {
  FUNC_0(VAR_17, VAR_19, VAR_9);
  return (VAR_9);
 }
 FUNC_1(&VAR_17->dbgp_lineinfo->li_lflist);
 FUNC_1(&VAR_17->dbgp_lineinfo->li_lnlist);

 if ((VAR_17->dbgp_as = FUNC_3(1, sizeof(struct _Dwarf_ArangeSet))) ==
     ((void*)0)) {
  FUNC_0(VAR_17, VAR_19, VAR_9);
  return (VAR_9);
 }
 FUNC_1(&VAR_17->dbgp_as->as_arlist);

 return (VAR_10);
}
