
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct _Dwarf_Line {int dummy; } ;
struct TYPE_10__ {scalar_t__ ln_symndx; int ln_addr; TYPE_2__* ln_li; } ;
struct TYPE_9__ {int li_lnlen; int li_lnlist; } ;
struct TYPE_8__ {TYPE_2__* dbgp_lineinfo; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef TYPE_2__* Dwarf_LineInfo ;
typedef TYPE_3__* Dwarf_Line ;
typedef int Dwarf_Error ;
typedef int Dwarf_Addr ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_2 (int,int) ;
 int VAR_4 ;

Dwarf_Unsigned
FUNC_3(Dwarf_P_Debug VAR_5, Dwarf_Addr VAR_6, Dwarf_Unsigned VAR_7,
    Dwarf_Error *VAR_8)
{
 Dwarf_LineInfo VAR_9;
 Dwarf_Line VAR_10;

 if (VAR_5 == ((void*)0) || VAR_7 == 0) {
  FUNC_0(VAR_5, VAR_8, VAR_0);
  return (VAR_2);
 }

 VAR_9 = VAR_5->dbgp_lineinfo;

 if ((VAR_10 = FUNC_2(1, sizeof(struct _Dwarf_Line))) == ((void*)0)) {
  FUNC_0(VAR_5, VAR_8, VAR_1);
  return (VAR_2);
 }
 VAR_10->ln_li = VAR_9;
 VAR_10->ln_addr = VAR_6;
 VAR_10->ln_symndx = VAR_7;
 FUNC_1(&VAR_9->li_lnlist, VAR_10, VAR_4);
 VAR_9->li_lnlen++;

 return (VAR_3);
}
