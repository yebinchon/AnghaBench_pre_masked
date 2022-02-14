
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint_t ;
typedef int uint64_t ;
struct TYPE_5__ {size_t* fsm_typesz; size_t* fsm_enc; } ;
typedef TYPE_1__ fp_size_map_t ;
struct TYPE_6__ {int dw_ptrsz; } ;
typedef TYPE_2__ dwarf_t ;
typedef scalar_t__ Dwarf_Signed ;
typedef int Dwarf_Off ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (char*,int ,size_t) ;

__attribute__((used)) static uint_t
FUNC_1(dwarf_t *VAR_4, Dwarf_Off VAR_5, Dwarf_Signed VAR_6, size_t VAR_7)
{
 const fp_size_map_t *VAR_8 = VAR_3;
 uint_t VAR_9 = VAR_4->dw_ptrsz == sizeof (uint64_t);
 uint_t VAR_10 = 1, VAR_11 = 0;

 if (VAR_6 == VAR_1) {
  VAR_10 = 2;
  VAR_11 = 1;
 } else if (VAR_6 == VAR_2



     )
  VAR_11 = 2;

 while (VAR_8->fsm_typesz[VAR_9] != 0) {
  if (VAR_8->fsm_typesz[VAR_9] * VAR_10 == VAR_7)
   return (VAR_8->fsm_enc[VAR_11]);
  VAR_8++;
 }

 FUNC_0("die %llu: unrecognized real type size %u\n", VAR_5, VAR_7);

 return (0);
}
