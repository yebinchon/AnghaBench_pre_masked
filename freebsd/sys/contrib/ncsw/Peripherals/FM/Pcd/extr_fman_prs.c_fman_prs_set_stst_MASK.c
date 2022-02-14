
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman_prs_regs {int fmpr_ppsc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct fman_prs_regs *VAR_1, bool VAR_2)
{
 if (VAR_2)
  FUNC_0(VAR_0, &VAR_1->fmpr_ppsc);
 else
  FUNC_0(0, &VAR_1->fmpr_ppsc);
}
