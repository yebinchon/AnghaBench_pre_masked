
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_6__ {unsigned long long ld_hipc; int * ld_s; scalar_t__ ld_lopc; } ;
typedef TYPE_1__ Dwarf_Locdesc ;
typedef int Dwarf_Error ;
typedef int Dwarf_Debug ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*,int *,int ,int ,int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;

int
FUNC_4(Dwarf_Debug VAR_2, Dwarf_Locdesc **VAR_3, uint8_t *VAR_4,
    uint64_t VAR_5, uint8_t VAR_6, uint8_t VAR_7,
    uint8_t VAR_8, Dwarf_Error *VAR_9)
{
 Dwarf_Locdesc *VAR_10;
 int VAR_11;

 if ((VAR_10 = FUNC_3(sizeof(Dwarf_Locdesc))) == ((void*)0)) {
  FUNC_0(VAR_2, VAR_9, VAR_0);
  return (VAR_0);
 }
 VAR_10->ld_lopc = 0;
 VAR_10->ld_hipc = ~0ULL;
 VAR_10->ld_s = ((void*)0);

 VAR_11 = FUNC_1(VAR_2, VAR_10, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9);
 if (VAR_11 != VAR_1) {
  FUNC_2(VAR_10);
  return (VAR_11);
 }

 *VAR_3 = VAR_10;

 return (VAR_11);
}
