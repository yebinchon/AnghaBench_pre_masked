
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {char const* at_relsec; TYPE_1__* u; void* at_relsym; int at_form; int at_attrib; TYPE_2__* at_die; } ;
struct TYPE_14__ {int dbg_pointer_size; } ;
struct TYPE_13__ {int die_attr; } ;
struct TYPE_12__ {void* u64; } ;
typedef void* Dwarf_Unsigned ;
typedef TYPE_2__* Dwarf_P_Die ;
typedef TYPE_3__* Dwarf_P_Debug ;
typedef TYPE_4__* Dwarf_P_Attribute ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_4__* Dwarf_Attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__**,int *) ;
 int FUNC_2 (int) ;
 int VAR_3 ;

int
FUNC_3(Dwarf_P_Debug VAR_4, Dwarf_P_Die VAR_5, Dwarf_Half VAR_6,
    Dwarf_Unsigned VAR_7, Dwarf_Unsigned VAR_8, const char *VAR_9,
    Dwarf_P_Attribute *VAR_10, Dwarf_Error *VAR_11)
{
 Dwarf_Attribute VAR_12;
 int VAR_13;

 FUNC_2(VAR_4 != ((void*)0) && VAR_5 != ((void*)0));

 if ((VAR_13 = FUNC_1(VAR_5, &VAR_12, VAR_11)) != VAR_0)
  return (VAR_13);

 VAR_12->at_die = VAR_5;
 VAR_12->at_attrib = VAR_6;
 if (VAR_4->dbg_pointer_size == 4)
  VAR_12->at_form = VAR_1;
 else
  VAR_12->at_form = VAR_2;
 VAR_12->at_relsym = VAR_8;
 VAR_12->at_relsec = VAR_9;
 VAR_12->u[0].u64 = VAR_7;

 FUNC_0(&VAR_5->die_attr, VAR_12, VAR_3);

 if (VAR_10)
  *VAR_10 = VAR_12;

 return (VAR_0);
}
