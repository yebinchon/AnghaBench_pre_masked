
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct _Dwarf_P_Section {int dummy; } ;
struct TYPE_11__ {int dbgp_seccnt; int dbgp_seclist; } ;
struct TYPE_10__ {struct TYPE_10__* ds_name; scalar_t__ ds_cap; int * ds_data; } ;
typedef TYPE_1__* Dwarf_P_Section ;
typedef TYPE_2__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_2__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int,int) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (size_t) ;
 TYPE_1__* FUNC_6 (char const*) ;

int
FUNC_7(Dwarf_P_Debug VAR_4, Dwarf_P_Section *VAR_5, const char *VAR_6,
    int VAR_7, Dwarf_Error *VAR_8)
{
 Dwarf_P_Section VAR_9;

 FUNC_2(VAR_4 != ((void*)0) && VAR_5 != ((void*)0) && VAR_6 != ((void*)0));

 if ((VAR_9 = FUNC_3(1, sizeof(struct _Dwarf_P_Section))) == ((void*)0)) {
  FUNC_0(VAR_4, VAR_8, VAR_0);
  return (VAR_0);
 }

 if ((VAR_9->ds_name = FUNC_6(VAR_6)) == ((void*)0)) {
  FUNC_4(VAR_9);
  FUNC_0(VAR_4, VAR_8, VAR_0);
  return (VAR_0);
 }

 if (!VAR_7) {
  VAR_9->ds_cap = VAR_2;
  if ((VAR_9->ds_data = FUNC_5((size_t) VAR_9->ds_cap)) == ((void*)0)) {
   FUNC_4(VAR_9->ds_name);
   FUNC_4(VAR_9);
   FUNC_0(VAR_4, VAR_8, VAR_0);
   return (VAR_0);
  }
  FUNC_1(&VAR_4->dbgp_seclist, VAR_9, VAR_3);
  VAR_4->dbgp_seccnt++;
 }

 *VAR_5 = VAR_9;

 return (VAR_1);
}
