
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _Dwarf_Die {int dummy; } ;
struct TYPE_4__ {int die_attr; } ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Die ;
typedef int Dwarf_Debug ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int,int) ;

int
FUNC_4(Dwarf_Debug VAR_2, Dwarf_Die *VAR_3, Dwarf_Error *VAR_4)
{
 Dwarf_Die VAR_5;

 FUNC_2(VAR_3 != ((void*)0));

 if ((VAR_5 = FUNC_3(1, sizeof(struct _Dwarf_Die))) == ((void*)0)) {
  FUNC_0(VAR_2, VAR_4, VAR_0);
  return (VAR_0);
 }

 FUNC_1(&VAR_5->die_attr);

 *VAR_3 = VAR_5;

 return (VAR_1);
}
