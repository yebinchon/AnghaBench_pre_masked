
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int dbg_cu; } ;
struct TYPE_11__ {scalar_t__ ld_hipc; scalar_t__ ld_lopc; } ;
struct TYPE_10__ {scalar_t__ ds_data; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef TYPE_1__ Dwarf_Section ;
typedef int * Dwarf_Ptr ;
typedef TYPE_2__ Dwarf_Locdesc ;
typedef int Dwarf_Error ;
typedef TYPE_3__* Dwarf_Debug ;
typedef scalar_t__ Dwarf_Addr ;


 int FUNC_0 (TYPE_3__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,int ,int,TYPE_2__***,int*,int*,int *) ;
 int FUNC_4 (int ) ;

int
FUNC_5(Dwarf_Debug VAR_6, Dwarf_Unsigned VAR_7,
    Dwarf_Addr *VAR_8, Dwarf_Addr *VAR_9, Dwarf_Ptr *VAR_10,
    Dwarf_Unsigned *VAR_11, Dwarf_Unsigned *VAR_12,
    Dwarf_Error *VAR_13)
{
 Dwarf_Locdesc *VAR_14, **VAR_15;
 Dwarf_Section *VAR_16;
 Dwarf_Signed VAR_17;
 int VAR_18, VAR_19;







 if (VAR_6 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0) ||
     VAR_11 == ((void*)0) || VAR_12 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_13, VAR_0);
  return (VAR_3);
 }

 VAR_19 = FUNC_3(VAR_6, FUNC_1(&VAR_6->dbg_cu), VAR_7,
     &VAR_15, &VAR_17, VAR_11, VAR_13);
 if (VAR_19 == VAR_2) {
  FUNC_0(VAR_6, VAR_13, VAR_4);
  return (VAR_4);
 } else if (VAR_19 != VAR_1)
  return (VAR_3);

 *VAR_8 = *VAR_9 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
  VAR_14 = VAR_15[VAR_18];
  if (VAR_18 == 0) {
   *VAR_8 = VAR_14->ld_hipc;
   *VAR_9 = VAR_14->ld_lopc;
  } else {
   if (VAR_14->ld_lopc < *VAR_9)
    *VAR_9 = VAR_14->ld_lopc;
   if (VAR_14->ld_hipc > *VAR_8)
    *VAR_8 = VAR_14->ld_hipc;
  }
 }

 VAR_16 = FUNC_2(VAR_6, ".debug_loc");
 FUNC_4(VAR_16 != ((void*)0));
 *VAR_10 = (uint8_t *) VAR_16->ds_data + VAR_7;
 *VAR_12 = VAR_7 + *VAR_11;

 return (VAR_5);
}
