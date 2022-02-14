
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* die_cu; int * die_dbg; } ;
struct TYPE_9__ {int cu_version; } ;
struct TYPE_8__ {int at_attrib; int * at_ld; TYPE_5__* at_die; TYPE_1__* u; int at_form; } ;
struct TYPE_7__ {int u64; } ;
typedef int Dwarf_Signed ;
typedef int **** Dwarf_Locdesc ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef TYPE_2__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_5__*,TYPE_2__*,int *) ;
 int FUNC_2 (int *,TYPE_4__*,int ,int *******,int*,int *,int *) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int *,int *****,int *,int *) ;
 int FUNC_5 (int ******) ;

int
FUNC_6(Dwarf_Attribute VAR_8, Dwarf_Locdesc ***VAR_9,
    Dwarf_Signed *VAR_10, Dwarf_Error *VAR_11)
{
 Dwarf_Debug VAR_12;
 int VAR_13;

 VAR_12 = VAR_8 != ((void*)0) ? VAR_8->at_die->die_dbg : ((void*)0);

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0)) {
  FUNC_0(VAR_12, VAR_11, VAR_0);
  return (VAR_5);
 }

 switch (VAR_8->at_attrib) {
 case 142:
 case 138:
 case 141:
 case 144:
 case 143:
 case 140:
 case 139:
 case 137:
 case 136:
  switch (VAR_8->at_form) {
  case 131:
  case 130:






   if (VAR_8->at_die->die_cu->cu_version >= 4) {
    FUNC_0(VAR_12, VAR_11, VAR_4);
    return (VAR_6);
   }

  case 128:
   VAR_13 = FUNC_2(VAR_12, VAR_8->at_die->die_cu,
       VAR_8->u[0].u64, VAR_9, VAR_10, ((void*)0), VAR_11);
   if (VAR_13 == VAR_4) {
    FUNC_0(VAR_12, VAR_11, VAR_13);
    return (VAR_6);
   }
   if (VAR_13 != VAR_3)
    return (VAR_5);
   return (VAR_7);
  case 135:
  case 134:
  case 133:
  case 132:
  case 129:
   if (VAR_8->at_ld == ((void*)0)) {
    VAR_13 = FUNC_1(VAR_8->at_die, VAR_8, VAR_11);
    if (VAR_13 != VAR_3)
     return (VAR_5);
   }
   *VAR_9 = FUNC_3(1, sizeof(Dwarf_Locdesc *));
   if (*VAR_9 == ((void*)0)) {
    FUNC_0(VAR_12, VAR_11, VAR_2);
    return (VAR_5);
   }
   (*VAR_9)[0] = FUNC_3(1, sizeof(Dwarf_Locdesc));
   if ((*VAR_9)[0] == ((void*)0)) {
    FUNC_5(*VAR_9);
    FUNC_0(VAR_12, VAR_11, VAR_2);
    return (VAR_5);
   }
   if (FUNC_4(VAR_12, (*VAR_9)[0], VAR_8->at_ld, VAR_11) !=
       VAR_3) {
    FUNC_5(&(*VAR_9)[0]);
    FUNC_5(*VAR_9);
    return (VAR_5);
   }
   *VAR_10 = 1;
   return (VAR_7);
  default:

   FUNC_0(VAR_12, VAR_11, VAR_1);
   return (VAR_6);
  }
 default:

  FUNC_0(VAR_12, VAR_11, VAR_0);
  return (VAR_5);
 }
}
