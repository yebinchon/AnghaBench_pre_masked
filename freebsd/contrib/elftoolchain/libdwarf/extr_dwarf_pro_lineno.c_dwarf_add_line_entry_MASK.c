
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct _Dwarf_Line {int dummy; } ;
struct TYPE_11__ {scalar_t__ ln_addr; int ln_bblock; int ln_stmt; scalar_t__ ln_endseq; int ln_column; void* ln_lineno; void* ln_fileno; scalar_t__ ln_symndx; TYPE_2__* ln_li; } ;
struct TYPE_10__ {int li_lnlen; int li_lnlist; } ;
struct TYPE_9__ {TYPE_2__* dbgp_lineinfo; } ;
typedef void* Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef TYPE_2__* Dwarf_LineInfo ;
typedef TYPE_3__* Dwarf_Line ;
typedef int Dwarf_Error ;
typedef scalar_t__ Dwarf_Bool ;
typedef scalar_t__ Dwarf_Addr ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_2 (int *,int ,int ) ;
 int VAR_4 ;
 TYPE_3__* FUNC_3 (int,int) ;
 int VAR_5 ;

Dwarf_Unsigned
FUNC_4(Dwarf_P_Debug VAR_6, Dwarf_Unsigned VAR_7,
    Dwarf_Addr VAR_8, Dwarf_Unsigned VAR_9, Dwarf_Signed VAR_10,
    Dwarf_Bool VAR_11, Dwarf_Bool VAR_12, Dwarf_Error *VAR_13)
{
 Dwarf_LineInfo VAR_14;
 Dwarf_Line VAR_15;

 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_13, VAR_0);
  return (VAR_2);
 }

 VAR_14 = VAR_6->dbgp_lineinfo;

 VAR_15 = FUNC_2(&VAR_14->li_lnlist, VAR_4, VAR_5);

 if (VAR_15 == ((void*)0) || VAR_15->ln_addr > VAR_8) {
  FUNC_0(VAR_6, VAR_13, VAR_0);
  return (VAR_2);
 }

 if ((VAR_15 = FUNC_3(1, sizeof(struct _Dwarf_Line))) == ((void*)0)) {
  FUNC_0(VAR_6, VAR_13, VAR_1);
  return (VAR_2);
 }
 VAR_15->ln_li = VAR_14;
 VAR_15->ln_addr = VAR_8;
 VAR_15->ln_symndx = 0;
 VAR_15->ln_fileno = VAR_7;
 VAR_15->ln_lineno = VAR_9;
 VAR_15->ln_column = VAR_10;
 VAR_15->ln_bblock = VAR_12 != 0;
 VAR_15->ln_stmt = VAR_11 != 0;
 VAR_15->ln_endseq = 0;
 FUNC_1(&VAR_14->li_lnlist, VAR_15, VAR_5);
 VAR_14->li_lnlen++;

 return (VAR_3);
}
