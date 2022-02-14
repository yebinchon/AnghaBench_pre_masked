
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ at_form; TYPE_1__* u; TYPE_2__* at_die; } ;
struct TYPE_6__ {int * die_dbg; } ;
struct TYPE_5__ {int u64; } ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef scalar_t__ Dwarf_Bool ;
typedef TYPE_3__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

int
FUNC_1(Dwarf_Attribute VAR_6, Dwarf_Bool *VAR_7, Dwarf_Error *VAR_8)
{
 int VAR_9;
 Dwarf_Debug VAR_10;

 VAR_10 = VAR_6 != ((void*)0) ? VAR_6->at_die->die_dbg : ((void*)0);

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
  FUNC_0(VAR_10, VAR_8, VAR_0);
  return (VAR_2);
 }

 if (VAR_6->at_form == VAR_4 ||
     VAR_6->at_form == VAR_5) {
  *VAR_7 = (Dwarf_Bool) (!!VAR_6->u[0].u64);
  VAR_9 = VAR_3;
 } else {
  FUNC_0(VAR_10, VAR_8, VAR_1);
  VAR_9 = VAR_2;
 }

 return (VAR_9);
}
