
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct _Dwarf_MacroSet {int dummy; } ;
struct TYPE_14__ {int dbg_mslist; } ;
struct TYPE_13__ {int ms_cnt; int * ms_mdlist; } ;
struct TYPE_12__ {scalar_t__ ds_size; } ;
typedef int Dwarf_Unsigned ;
typedef TYPE_1__ Dwarf_Section ;
typedef int Dwarf_Macro_Details ;
typedef TYPE_2__* Dwarf_MacroSet ;
typedef int Dwarf_Error ;
typedef TYPE_3__* Dwarf_Debug ;


 int FUNC_0 (TYPE_3__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*,scalar_t__*,int *,int*,int *) ;
 void* FUNC_5 (int,int) ;
 int VAR_2 ;

int
FUNC_6(Dwarf_Debug VAR_3, Dwarf_Error *VAR_4)
{
 Dwarf_MacroSet VAR_5;
 Dwarf_Unsigned VAR_6;
 Dwarf_Section *VAR_7;
 uint64_t VAR_8, VAR_9;
 int VAR_10;

 if ((VAR_7 = FUNC_2(VAR_3, ".debug_macinfo")) == ((void*)0))
  return (VAR_1);

 VAR_8 = 0;
 while (VAR_8 < VAR_7->ds_size) {

  VAR_9 = VAR_8;

  VAR_10 = FUNC_4(VAR_3, VAR_7, &VAR_8, ((void*)0), &VAR_6, VAR_4);
  if (VAR_10 != VAR_1)
   return (VAR_10);

  if (VAR_6 == 0)
   break;

  if ((VAR_5 = FUNC_5(1, sizeof(struct _Dwarf_MacroSet))) == ((void*)0)) {
   FUNC_0(VAR_3, VAR_4, VAR_0);
   VAR_10 = VAR_0;
   goto fail_cleanup;
  }
  FUNC_1(&VAR_3->dbg_mslist, VAR_5, VAR_2);

  if ((VAR_5->ms_mdlist = FUNC_5(VAR_6, sizeof(Dwarf_Macro_Details)))
      == ((void*)0)) {
   FUNC_0(VAR_3, VAR_4, VAR_0);
   VAR_10 = VAR_0;
   goto fail_cleanup;
  }

  VAR_5->ms_cnt = VAR_6;

  VAR_8 = VAR_9;

  VAR_10 = FUNC_4(VAR_3, VAR_7, &VAR_8, VAR_5->ms_mdlist,
      ((void*)0), VAR_4);

  if (VAR_10 != VAR_1) {
   FUNC_0(VAR_3, VAR_4, VAR_0);
   VAR_10 = VAR_0;
   goto fail_cleanup;
  }
 }

 return (VAR_1);

fail_cleanup:

 FUNC_3(VAR_3);

 return (VAR_10);
}
