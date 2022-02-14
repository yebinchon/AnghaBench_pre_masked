
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ld_cents; int * ld_s; int ld_hipc; int ld_lopc; } ;
typedef TYPE_1__ Dwarf_Locdesc ;
typedef int Dwarf_Loc ;
typedef int Dwarf_Error ;
typedef int Dwarf_Debug ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_4(Dwarf_Debug VAR_2, Dwarf_Locdesc *VAR_3, Dwarf_Locdesc *VAR_4,
    Dwarf_Error *VAR_5)
{

 FUNC_1(VAR_4 != ((void*)0) && VAR_3 != ((void*)0));

 VAR_3->ld_lopc = VAR_4->ld_lopc;
 VAR_3->ld_hipc = VAR_4->ld_hipc;
 VAR_3->ld_cents = VAR_4->ld_cents;

 if (VAR_3->ld_cents > 0) {
  VAR_3->ld_s = FUNC_2(VAR_3->ld_cents, sizeof(Dwarf_Loc));
  if (VAR_3->ld_s == ((void*)0)) {
   FUNC_0(VAR_2, VAR_5, VAR_0);
   return (VAR_0);
  }
  FUNC_3(VAR_3->ld_s, VAR_4->ld_s, VAR_4->ld_cents *
      sizeof(Dwarf_Loc));
 } else
  VAR_3->ld_s = ((void*)0);

 return (VAR_1);
}
