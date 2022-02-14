
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int32_t ;
struct ata_params {int pss; scalar_t__ lss_2; scalar_t__ lss_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

uint32_t
FUNC_0(struct ata_params *VAR_3)
{
 if ((VAR_3->pss & VAR_1) == VAR_2 &&
     (VAR_3->pss & VAR_0)) {
  return (((u_int32_t)VAR_3->lss_1 |
      ((u_int32_t)VAR_3->lss_2 << 16)) * 2);
 }
 return (512);
}
