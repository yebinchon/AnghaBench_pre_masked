
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct _Dwarf_Attribute {int dummy; } ;
struct TYPE_14__ {scalar_t__ at_attrib; int at_form; TYPE_1__* u; } ;
struct TYPE_13__ {int die_name; int die_attr; } ;
struct TYPE_12__ {int s; } ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Die ;
typedef TYPE_3__* Dwarf_Attribute ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *,TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__**,int *) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_3(Dwarf_Die VAR_3, Dwarf_Attribute VAR_4, Dwarf_Attribute *VAR_5,
    Dwarf_Error *VAR_6)
{
 Dwarf_Attribute VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_1(VAR_3, &VAR_7, VAR_6)) != VAR_1)
  return (VAR_8);

 FUNC_2(VAR_7, VAR_4, sizeof(struct _Dwarf_Attribute));

 FUNC_0(&VAR_3->die_attr, VAR_7, VAR_2);


 if (VAR_7->at_attrib == VAR_0) {
  switch (VAR_7->at_form) {
  case 128:
   VAR_3->die_name = VAR_7->u[1].s;
   break;
  case 129:
   VAR_3->die_name = VAR_7->u[0].s;
   break;
  default:
   break;
  }
 }

 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_7;

 return (VAR_1);
}
