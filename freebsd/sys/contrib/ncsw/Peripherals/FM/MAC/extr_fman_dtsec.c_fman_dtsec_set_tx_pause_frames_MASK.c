
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct dtsec_regs {int maccfg1; int ptv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct dtsec_regs *VAR_1, uint16_t VAR_2)
{
 uint32_t VAR_3 = 0;



 if (VAR_2) {
  VAR_3 = FUNC_0(&VAR_1->ptv);
  VAR_3 &= 0xffff0000;
  VAR_3 |= VAR_2 & 0x0000ffff;
  FUNC_1(VAR_3, &VAR_1->ptv);


  FUNC_1(FUNC_0(&VAR_1->maccfg1) | VAR_0,
    &VAR_1->maccfg1);
 } else
  FUNC_1(FUNC_0(&VAR_1->maccfg1) & ~VAR_0,
    &VAR_1->maccfg1);
}
