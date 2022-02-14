
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pccard_function {int ccr_mask; scalar_t__ pf_ccr_offset; int pf_ccrh; int pf_ccrt; } ;


 int FUNC_0 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct pccard_function *VAR_0, int VAR_1, int VAR_2)
{
 if ((VAR_0->ccr_mask) & (1 << (VAR_1 / 2))) {
  FUNC_0(VAR_0->pf_ccrt, VAR_0->pf_ccrh,
      VAR_0->pf_ccr_offset + VAR_1, VAR_2);
 }
}
