
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dtsec_regs {int maccfg1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct dtsec_regs *VAR_2, bool VAR_3, bool VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_0(&VAR_2->maccfg1);

 if (VAR_3)
  VAR_5 &= ~VAR_0;

 if (VAR_4)
  VAR_5 &= ~VAR_1;

 FUNC_1(VAR_5, &VAR_2->maccfg1);
}
