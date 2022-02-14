
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dtsec_regs {int* gaddr; int* igaddr; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int,int*) ;

void FUNC_2(struct dtsec_regs *VAR_0, int VAR_1, bool VAR_2)
{
 int VAR_3 = (VAR_1 >> 5) & 0xf;
 int VAR_4 = VAR_1 & 0x1f;
 uint32_t VAR_5 = 0x80000000 >> VAR_4;
 uint32_t *VAR_6;

 if (VAR_3 > 7)
  VAR_6 = &VAR_0->gaddr[VAR_3-8];
 else
  VAR_6 = &VAR_0->igaddr[VAR_3];

 if (VAR_2)
  FUNC_1(FUNC_0(VAR_6) | VAR_5, VAR_6);
 else
  FUNC_1(FUNC_0(VAR_6) & (~VAR_5), VAR_6);
}
