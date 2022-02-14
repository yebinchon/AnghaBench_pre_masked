
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct _Dwarf_LineFile {int dummy; } ;
struct TYPE_11__ {void* lf_size; void* lf_mtime; void* lf_dirndx; int * lf_fname; } ;
struct TYPE_10__ {void* li_lflen; int li_lflist; } ;
struct TYPE_9__ {TYPE_2__* dbgp_lineinfo; } ;
typedef void* Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef TYPE_2__* Dwarf_LineInfo ;
typedef TYPE_3__* Dwarf_LineFile ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_1__*,int *,void*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;
 TYPE_3__* FUNC_3 (int) ;
 int * FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;

Dwarf_Unsigned
FUNC_6(Dwarf_P_Debug VAR_4, char *VAR_5, Dwarf_Unsigned VAR_6,
    Dwarf_Unsigned VAR_7, Dwarf_Unsigned VAR_8, Dwarf_Error *VAR_9)
{
 Dwarf_LineInfo VAR_10;
 Dwarf_LineFile VAR_11;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || FUNC_5(VAR_5) == 0) {
  FUNC_0(VAR_4, VAR_9, VAR_0);
  return (VAR_2);
 }

 VAR_10 = VAR_4->dbgp_lineinfo;

 if ((VAR_11 = FUNC_3(sizeof(struct _Dwarf_LineFile))) == ((void*)0)) {
  FUNC_0(VAR_4, VAR_9, VAR_1);
  return (VAR_1);
 }

 if ((VAR_11->lf_fname = FUNC_4(VAR_5)) == ((void*)0)) {
  FUNC_2(VAR_11);
  FUNC_0(VAR_4, VAR_9, VAR_1);
  return (VAR_1);
 }
 VAR_11->lf_dirndx = VAR_6;
 VAR_11->lf_mtime = VAR_7;
 VAR_11->lf_size = VAR_8;
 FUNC_1(&VAR_10->li_lflist, VAR_11, VAR_3);

 return (++VAR_10->li_lflen);
}
