
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mnp_bits {int p_width; int p_shift; int n_width; int m_width; } ;
struct pll_sc {int base_reg; struct mnp_bits mnp_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pll_sc*,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct pll_sc *VAR_2, uint32_t *VAR_3, uint32_t *VAR_4, uint32_t *VAR_5)
{
 uint32_t VAR_6;
 struct mnp_bits *VAR_7;

 VAR_7 = &VAR_2->mnp_bits;
 FUNC_0(VAR_2, VAR_2->base_reg, &VAR_6);
 *VAR_3 = FUNC_1(VAR_6, VAR_0, VAR_7->m_width);
 *VAR_4 = FUNC_1(VAR_6, VAR_1, VAR_7->n_width);
 *VAR_5 = FUNC_1(VAR_6, VAR_7->p_shift, VAR_7->p_width);
}
