
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct dtsec_mii_reg {int miimcom; int miimstat; int miimind; int miimadd; int miimcfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 () ;

int FUNC_4(struct dtsec_mii_reg *VAR_4, uint8_t VAR_5,
  uint8_t VAR_6, uint16_t *VAR_7, uint16_t VAR_8)
{
 uint32_t VAR_9;


 FUNC_2((uint32_t)FUNC_0(VAR_8), &VAR_4->miimcfg);
 FUNC_3();


 VAR_9 = (uint32_t)((VAR_5 << VAR_1) | VAR_6);
 FUNC_2(VAR_9, &VAR_4->miimadd);
 FUNC_3();


 FUNC_2(VAR_2, &VAR_4->miimcom);

 VAR_9 = FUNC_1(&VAR_4->miimcom);
 FUNC_3();



 while ((FUNC_1(&VAR_4->miimind)) & VAR_3)
                 ;


 *VAR_7 = (uint16_t)FUNC_1(&VAR_4->miimstat);
 FUNC_3();

 FUNC_2(0, &VAR_4->miimcom);

 VAR_9 = FUNC_1(&VAR_4->miimcom);

 if (*VAR_7 == 0xffff)
  return -VAR_0;

 return 0;
}
