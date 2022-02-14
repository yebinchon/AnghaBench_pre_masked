
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
struct _Dwarf_Rangelist {int dummy; } ;
struct TYPE_14__ {int dbg_rllist; } ;
struct TYPE_13__ {struct TYPE_13__* rl_rgarray; scalar_t__ rl_rglen; int rl_offset; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef int Dwarf_Section ;
typedef int Dwarf_Ranges ;
typedef TYPE_1__* Dwarf_Rangelist ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Debug ;
typedef int Dwarf_CU ;


 int FUNC_0 (TYPE_2__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int * FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,int ,int *,int ,TYPE_1__*,scalar_t__*) ;
 TYPE_1__* FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int) ;
 int VAR_3 ;

int
FUNC_7(Dwarf_Debug VAR_4, Dwarf_CU VAR_5, uint64_t VAR_6,
    Dwarf_Rangelist *VAR_7, Dwarf_Error *VAR_8)
{
 Dwarf_Section *VAR_9;
 Dwarf_Rangelist VAR_10;
 Dwarf_Unsigned VAR_11;
 int VAR_12;

 if ((VAR_9 = FUNC_2(VAR_4, ".debug_ranges")) == ((void*)0)) {
  FUNC_0(VAR_4, VAR_8, VAR_2);
  return (VAR_2);
 }

 if ((VAR_10 = FUNC_6(sizeof(struct _Dwarf_Rangelist))) == ((void*)0)) {
  FUNC_0(VAR_4, VAR_8, VAR_0);
  return (VAR_0);
 }

 VAR_10->rl_offset = VAR_6;

 VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_9, VAR_6, ((void*)0), &VAR_11);
 if (VAR_12 != VAR_1) {
  FUNC_5(VAR_10);
  return (VAR_12);
 }

 VAR_10->rl_rglen = VAR_11;
 if (VAR_11 != 0) {
  if ((VAR_10->rl_rgarray = FUNC_4(VAR_11, sizeof(Dwarf_Ranges))) ==
      ((void*)0)) {
   FUNC_5(VAR_10);
   FUNC_0(VAR_4, VAR_8, VAR_0);
   return (VAR_0);
  }

  VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_9, VAR_6, VAR_10->rl_rgarray,
      ((void*)0));
  if (VAR_12 != VAR_1) {
   FUNC_5(VAR_10->rl_rgarray);
   FUNC_5(VAR_10);
   return (VAR_12);
  }
 } else
  VAR_10->rl_rgarray = ((void*)0);

 FUNC_1(&VAR_4->dbg_rllist, VAR_10, VAR_3);
 *VAR_7 = VAR_10;

 return (VAR_1);
}
