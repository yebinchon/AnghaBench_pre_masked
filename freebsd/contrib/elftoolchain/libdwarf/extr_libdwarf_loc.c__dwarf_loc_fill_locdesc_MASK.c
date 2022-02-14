
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int ld_cents; int * ld_s; } ;
typedef TYPE_1__ Dwarf_Locdesc ;
typedef int Dwarf_Loc ;
typedef int Dwarf_Error ;
typedef int Dwarf_Debug ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*,int ,int ,int ,int *,scalar_t__) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int,int) ;

int
FUNC_4(Dwarf_Debug VAR_3, Dwarf_Locdesc *VAR_4, uint8_t *VAR_5,
    uint64_t VAR_6, uint8_t VAR_7, uint8_t VAR_8,
    uint8_t VAR_9, Dwarf_Error *VAR_10)
{
 int VAR_11;

 FUNC_2(VAR_4 != ((void*)0));
 FUNC_2(VAR_5 != ((void*)0));
 FUNC_2(VAR_6 > 0);


 if ((VAR_11 = FUNC_1(VAR_3, ((void*)0), VAR_7, VAR_8,
     VAR_9, VAR_5, VAR_6)) < 0) {
  FUNC_0(VAR_3, VAR_10, VAR_0);
  return (VAR_0);
 }

 VAR_4->ld_cents = VAR_11;
 if (VAR_11 <= 0)
  return (VAR_2);

 if ((VAR_4->ld_s = FUNC_3(VAR_11, sizeof(Dwarf_Loc))) == ((void*)0)) {
  FUNC_0(VAR_3, VAR_10, VAR_1);
  return (VAR_1);
 }

 (void) FUNC_1(VAR_3, VAR_4, VAR_7, VAR_8,
     VAR_9, VAR_5, VAR_6);

 return (VAR_2);
}
