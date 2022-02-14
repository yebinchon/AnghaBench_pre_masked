
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {TYPE_1__* u; } ;
struct TYPE_18__ {TYPE_2__* cu_lineinfo; } ;
struct TYPE_17__ {TYPE_5__* die_cu; int * die_dbg; } ;
struct TYPE_16__ {char* lf_fullpath; char* lf_fname; } ;
struct TYPE_15__ {char** li_lfnarray; int li_lflist; scalar_t__ li_lflen; } ;
struct TYPE_14__ {int u64; } ;
typedef int Dwarf_Signed ;
typedef TYPE_2__* Dwarf_LineInfo ;
typedef TYPE_3__* Dwarf_LineFile ;
typedef int Dwarf_Error ;
typedef TYPE_4__* Dwarf_Die ;
typedef int * Dwarf_Debug ;
typedef TYPE_5__* Dwarf_CU ;
typedef TYPE_6__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,int ) ;
 TYPE_6__* FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,int *) ;
 int VAR_8 ;
 char** FUNC_5 (int) ;

int
FUNC_6(Dwarf_Die VAR_9, char ***VAR_10, Dwarf_Signed *VAR_11,
    Dwarf_Error *VAR_12)
{
 Dwarf_LineInfo VAR_13;
 Dwarf_LineFile VAR_14;
 Dwarf_Debug VAR_15;
 Dwarf_CU VAR_16;
 Dwarf_Attribute VAR_17;
 int VAR_18;

 VAR_15 = VAR_9 != ((void*)0) ? VAR_9->die_dbg : ((void*)0);

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 == ((void*)0)) {
  FUNC_0(VAR_15, VAR_12, VAR_1);
  return (VAR_5);
 }

 if ((VAR_17 = FUNC_3(VAR_9, VAR_0)) == ((void*)0)) {
  FUNC_0(VAR_15, VAR_12, VAR_4);
  return (VAR_6);
 }

 VAR_16 = VAR_9->die_cu;
 if (VAR_16->cu_lineinfo == ((void*)0)) {
  if (FUNC_4(VAR_9, VAR_17->u[0].u64, VAR_12) !=
      VAR_3)
   return (VAR_5);
 }
 if (VAR_16->cu_lineinfo == ((void*)0)) {
  FUNC_0(VAR_15, VAR_12, VAR_4);
  return (VAR_6);
 }

 VAR_13 = VAR_16->cu_lineinfo;
 *VAR_11 = (Dwarf_Signed) VAR_13->li_lflen;

 if (*VAR_11 == 0) {
  FUNC_0(VAR_15, VAR_12, VAR_4);
  return (VAR_6);
 }

 if (VAR_13->li_lfnarray != ((void*)0)) {
  *VAR_10 = VAR_13->li_lfnarray;
  return (VAR_7);
 }

 if ((VAR_13->li_lfnarray = FUNC_5(*VAR_11 * sizeof(char *))) == ((void*)0)) {
  FUNC_0(VAR_15, VAR_12, VAR_2);
  return (VAR_5);
 }

 for (VAR_18 = 0, VAR_14 = FUNC_1(&VAR_13->li_lflist);
      VAR_18 < *VAR_11 && VAR_14 != ((void*)0); VAR_18++, VAR_14 = FUNC_2(VAR_14, VAR_8)) {
  if (VAR_14->lf_fullpath)
   VAR_13->li_lfnarray[VAR_18] = VAR_14->lf_fullpath;
  else
   VAR_13->li_lfnarray[VAR_18] = VAR_14->lf_fname;
 }

 *VAR_10 = VAR_13->li_lfnarray;

 return (VAR_7);
}
