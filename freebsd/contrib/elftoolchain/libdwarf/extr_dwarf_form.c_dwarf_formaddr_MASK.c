
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ at_form; TYPE_2__* u; TYPE_1__* at_die; } ;
struct TYPE_6__ {int u64; } ;
struct TYPE_5__ {int * die_dbg; } ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef TYPE_3__* Dwarf_Attribute ;
typedef int Dwarf_Addr ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_1(Dwarf_Attribute VAR_5, Dwarf_Addr *VAR_6, Dwarf_Error *VAR_7)
{
 int VAR_8;
 Dwarf_Debug VAR_9;

 VAR_9 = VAR_5 != ((void*)0) ? VAR_5->at_die->die_dbg : ((void*)0);

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
  FUNC_0(VAR_9, VAR_7, VAR_0);
  return (VAR_2);
 }

 if (VAR_5->at_form == VAR_4) {
  *VAR_6 = VAR_5->u[0].u64;
  VAR_8 = VAR_3;
 } else {
  FUNC_0(VAR_9, VAR_7, VAR_1);
  VAR_8 = VAR_2;
 }

 return (VAR_8);
}
