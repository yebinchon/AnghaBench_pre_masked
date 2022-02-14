
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_hal2 {struct hal2_ctl_regs* ctl_regs; } ;
struct hal2_ctl_regs {int iar; int idr3; int idr2; int idr1; int idr0; } ;


 int FUNC_0 (struct hal2_ctl_regs*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(struct snd_hal2 *VAR_0, u16 VAR_1, u16 VAR_2)
{
 struct hal2_ctl_regs *VAR_3 = VAR_0->ctl_regs;

 FUNC_4(FUNC_1(VAR_1), &VAR_3->iar);
 FUNC_0(VAR_3);
 FUNC_4((FUNC_3(&VAR_3->idr0) & 0xffff) & ~VAR_2, &VAR_3->idr0);
 FUNC_4(0, &VAR_3->idr1);
 FUNC_4(0, &VAR_3->idr2);
 FUNC_4(0, &VAR_3->idr3);
 FUNC_4(FUNC_2(VAR_1), &VAR_3->iar);
 FUNC_0(VAR_3);
}
