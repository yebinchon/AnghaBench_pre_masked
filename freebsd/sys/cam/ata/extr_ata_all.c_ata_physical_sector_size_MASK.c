
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ata_params {int pss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ata_params*) ;

uint64_t
FUNC_1(struct ata_params *VAR_4)
{
 if ((VAR_4->pss & VAR_2) == VAR_3) {
  if (VAR_4->pss & VAR_1) {
   return ((uint64_t)FUNC_0(VAR_4) *
       (1 << (VAR_4->pss & VAR_0)));
  } else {
   return (uint64_t)FUNC_0(VAR_4);
  }
 }
 return (512);
}
