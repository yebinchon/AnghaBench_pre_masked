
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct dtsec_mii_reg {int miimind; int miimcon; int miimadd; int miimcom; int miimcfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 () ;

int FUNC_4(struct dtsec_mii_reg *VAR_2, uint8_t VAR_3,
  uint8_t VAR_4, uint16_t VAR_5, uint16_t VAR_6)
{
 uint32_t VAR_7;


 FUNC_2((uint32_t)FUNC_0(VAR_6), &VAR_2->miimcfg);
 FUNC_3();


 FUNC_2(0, &VAR_2->miimcom);

 VAR_7 = FUNC_1(&VAR_2->miimcom);
 FUNC_3();


 VAR_7 = (uint32_t)((VAR_3 << VAR_0) | VAR_4);
 FUNC_2(VAR_7, &VAR_2->miimadd);
 FUNC_3();


 FUNC_2((uint32_t)VAR_5, &VAR_2->miimcon);

 VAR_7 = FUNC_1(&VAR_2->miimcon);
 FUNC_3();



 while ((FUNC_1(&VAR_2->miimind)) & VAR_1)
                 ;

 return 0;
}
