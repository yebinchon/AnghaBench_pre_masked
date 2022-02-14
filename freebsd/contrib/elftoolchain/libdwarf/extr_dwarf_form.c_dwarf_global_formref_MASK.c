
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int at_form; TYPE_3__* at_die; TYPE_1__* u; } ;
struct TYPE_8__ {TYPE_2__* die_cu; int * die_dbg; } ;
struct TYPE_7__ {scalar_t__ cu_offset; } ;
struct TYPE_6__ {int u64; } ;
typedef scalar_t__ Dwarf_Off ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef TYPE_4__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
int
FUNC_1(Dwarf_Attribute VAR_4, Dwarf_Off *VAR_5,
    Dwarf_Error *VAR_6)
{
 int VAR_7;
 Dwarf_Debug VAR_8;

 VAR_8 = VAR_4 != ((void*)0) ? VAR_4->at_die->die_dbg : ((void*)0);

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
  FUNC_0(VAR_8, VAR_6, VAR_0);
  return (VAR_2);
 }

 switch (VAR_4->at_form) {
 case 130:
 case 128:
  *VAR_5 = (Dwarf_Off) VAR_4->u[0].u64;
  VAR_7 = VAR_3;
  break;
 case 134:
 case 133:
 case 132:
 case 131:
 case 129:
  *VAR_5 = (Dwarf_Off) VAR_4->u[0].u64 +
   VAR_4->at_die->die_cu->cu_offset;
  VAR_7 = VAR_3;
  break;
 default:
  FUNC_0(VAR_8, VAR_6, VAR_1);
  VAR_7 = VAR_2;
 }

 return (VAR_7);
}
