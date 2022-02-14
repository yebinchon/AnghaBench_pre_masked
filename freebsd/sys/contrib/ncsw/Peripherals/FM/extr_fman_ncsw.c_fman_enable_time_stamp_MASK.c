
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct fman_fpm_regs {int fmfp_tsc1; int fmfp_tsc2; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct fman_fpm_regs *VAR_2,
    uint8_t VAR_3,
    uint16_t VAR_4)
{
 uint32_t VAR_5;
 uint64_t VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8 = (uint32_t)(1 << VAR_3);
 VAR_7 = VAR_8 / VAR_4;




 VAR_6 = ((uint64_t)VAR_8 << 16) - ((uint64_t)VAR_7 << 16) * VAR_4;

 if (FUNC_0(VAR_6, VAR_4))
  VAR_6++;

 VAR_5 = (VAR_7 << VAR_1) | (uint16_t)VAR_6;
 FUNC_1(VAR_5, &VAR_2->fmfp_tsc2);


 FUNC_1(VAR_0, &VAR_2->fmfp_tsc1);
}
