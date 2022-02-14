
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ at_form; TYPE_1__* u; TYPE_2__* at_die; } ;
struct TYPE_9__ {int signature; } ;
struct TYPE_8__ {int * die_dbg; } ;
struct TYPE_7__ {int u64; int u8p; } ;
typedef TYPE_3__ Dwarf_Sig8 ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef TYPE_4__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;

int
FUNC_3(Dwarf_Attribute VAR_5, Dwarf_Sig8 *VAR_6, Dwarf_Error *VAR_7)
{
 Dwarf_Debug VAR_8;

 VAR_8 = VAR_5 != ((void*)0) ? VAR_5->at_die->die_dbg : ((void*)0);

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
  FUNC_0(VAR_8, VAR_7, VAR_0);
  return (VAR_2);
 }

 if (VAR_5->at_form != VAR_4) {
  FUNC_0(VAR_8, VAR_7, VAR_1);
  return (VAR_2);
 }

 FUNC_1(VAR_5->u[0].u64 == 8);
 FUNC_2(VAR_6->signature, VAR_5->u[1].u8p, VAR_5->u[0].u64);

 return (VAR_3);
}
