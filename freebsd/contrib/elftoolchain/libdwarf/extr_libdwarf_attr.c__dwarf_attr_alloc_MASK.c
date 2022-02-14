
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _Dwarf_Attribute {int dummy; } ;
struct TYPE_3__ {int die_dbg; } ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Die ;
typedef int * Dwarf_Attribute ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int,int) ;

int
FUNC_3(Dwarf_Die VAR_2, Dwarf_Attribute *VAR_3, Dwarf_Error *VAR_4)
{
 Dwarf_Attribute VAR_5;

 FUNC_1(VAR_2 != ((void*)0));
 FUNC_1(VAR_3 != ((void*)0));

 if ((VAR_5 = FUNC_2(1, sizeof(struct _Dwarf_Attribute))) == ((void*)0)) {
  FUNC_0(VAR_2->die_dbg, VAR_4, VAR_0);
  return (VAR_0);
 }

 *VAR_3 = VAR_5;

 return (VAR_1);
}
