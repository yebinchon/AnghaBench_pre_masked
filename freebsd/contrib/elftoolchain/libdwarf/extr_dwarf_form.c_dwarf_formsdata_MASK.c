
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_7__ {int at_form; TYPE_2__* u; TYPE_1__* at_die; } ;
struct TYPE_6__ {int s64; } ;
struct TYPE_5__ {int * die_dbg; } ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef TYPE_3__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






int
FUNC_1(Dwarf_Attribute VAR_4, Dwarf_Signed *VAR_5,
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
 case 132:
  *VAR_5 = (int8_t) VAR_4->u[0].s64;
  VAR_7 = VAR_3;
  break;
 case 131:
  *VAR_5 = (int16_t) VAR_4->u[0].s64;
  VAR_7 = VAR_3;
  break;
 case 130:
  *VAR_5 = (int32_t) VAR_4->u[0].s64;
  VAR_7 = VAR_3;
  break;
 case 129:
 case 128:
  *VAR_5 = VAR_4->u[0].s64;
  VAR_7 = VAR_3;
  break;
 default:
  FUNC_0(VAR_8, VAR_6, VAR_1);
  VAR_7 = VAR_2;
 }

 return (VAR_7);
}
