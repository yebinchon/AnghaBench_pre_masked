
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef enum Dwarf_Form_Class { ____Placeholder_Dwarf_Form_Class } Dwarf_Form_Class ;
struct TYPE_11__ {int at_form; TYPE_1__* u; } ;
struct TYPE_10__ {int cu_length_size; int cu_version; } ;
struct TYPE_9__ {TYPE_3__* die_cu; int * die_dbg; } ;
struct TYPE_8__ {int u64; } ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Die ;
typedef int * Dwarf_Debug ;
typedef TYPE_3__* Dwarf_CU ;
typedef TYPE_4__* Dwarf_Attribute ;
typedef int Dwarf_Addr ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;

int
FUNC_3(Dwarf_Die VAR_6, Dwarf_Addr *VAR_7, Dwarf_Half *VAR_8,
    enum Dwarf_Form_Class *VAR_9, Dwarf_Error *VAR_10)
{
 Dwarf_Attribute VAR_11;
 Dwarf_Debug VAR_12;
 Dwarf_CU VAR_13;

 VAR_12 = VAR_6 != ((void*)0) ? VAR_6->die_dbg : ((void*)0);

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
  FUNC_0(VAR_12, VAR_10, VAR_1);
  return (VAR_3);
 }

 if ((VAR_11 = FUNC_1(VAR_6, VAR_0)) == ((void*)0)) {
  FUNC_0(VAR_12, VAR_10, VAR_2);
  return (VAR_4);
 }

 *VAR_7 = VAR_11->u[0].u64;

 if (VAR_8 != ((void*)0)) {
  *VAR_8 = VAR_11->at_form;
 }

 if (VAR_9 != ((void*)0)) {
  VAR_13 = VAR_6->die_cu;
  *VAR_9 = FUNC_2(VAR_13->cu_version,
      VAR_0, VAR_13->cu_length_size == 4 ? 4 : 8,
      VAR_11->at_form);
 }

 return (VAR_5);
}
