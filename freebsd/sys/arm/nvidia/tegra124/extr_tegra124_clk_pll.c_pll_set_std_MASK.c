
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct mnp_bits {int m_width; int n_width; int p_width; int p_shift; } ;
struct pll_sc {scalar_t__ iddq_reg; int lock_enable; int misc_reg; int base_reg; int iddq_mask; struct mnp_bits mnp_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pll_sc*,scalar_t__,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct pll_sc*,int ,int*) ;
 int FUNC_2 (struct pll_sc*,int ,int) ;
 int FUNC_3 (struct pll_sc*,int) ;
 int FUNC_4 (struct pll_sc*) ;
 int FUNC_5 (struct pll_sc*) ;
 int FUNC_6 (int,int,int ,int) ;
 int FUNC_7 (struct pll_sc*) ;

__attribute__((used)) static int
FUNC_8(struct pll_sc *VAR_7, uint64_t VAR_8, uint64_t *VAR_9, int VAR_10,
    uint32_t VAR_11, uint32_t VAR_12, uint32_t VAR_13)
{
 uint32_t VAR_14;
 struct mnp_bits *VAR_15;
 int VAR_16;

 VAR_15 = &VAR_7->mnp_bits;
 if (VAR_11 >= (1 << VAR_15->m_width))
  return (VAR_3);
 if (VAR_12 >= (1 << VAR_15->n_width))
  return (VAR_3);
 if (FUNC_3(VAR_7, VAR_13) >= (1 << VAR_15->p_width))
  return (VAR_3);

 if (VAR_10 & VAR_0) {
  if (((VAR_10 & (VAR_2 | VAR_1)) == 0) &&
      (*VAR_9 != (((VAR_8 / VAR_11) * VAR_12) /VAR_13)))
   return (VAR_3);

  *VAR_9 = ((VAR_8 / VAR_11) * VAR_12) /VAR_13;

  return (0);
 }

 FUNC_4(VAR_7);


 if (VAR_7->iddq_reg != 0)
  FUNC_0(VAR_7, VAR_7->iddq_reg, VAR_7->iddq_mask, 0);

 FUNC_1(VAR_7, VAR_7->base_reg, &VAR_14);
 VAR_14 = FUNC_6(VAR_14, VAR_11, VAR_4, VAR_15->m_width);
 VAR_14 = FUNC_6(VAR_14, VAR_12, VAR_5, VAR_15->n_width);
 VAR_14 = FUNC_6(VAR_14, FUNC_3(VAR_7, VAR_13), VAR_15->p_shift,
     VAR_15->p_width);
 FUNC_2(VAR_7, VAR_7->base_reg, VAR_14);


 FUNC_1(VAR_7, VAR_7->base_reg, &VAR_14);
 VAR_14 |= VAR_6;
 FUNC_2(VAR_7, VAR_7->base_reg, VAR_14);


 FUNC_1(VAR_7, VAR_7->misc_reg, &VAR_14);
 VAR_14 |= VAR_7->lock_enable;
 FUNC_2(VAR_7, VAR_7->misc_reg, VAR_14);

 VAR_16 = FUNC_7(VAR_7);
 if (VAR_16 != 0) {

  FUNC_1(VAR_7, VAR_7->base_reg, &VAR_14);
  VAR_14 &= ~VAR_6;
  FUNC_2(VAR_7, VAR_7->base_reg, VAR_14);
  return (VAR_16);
 }
 FUNC_1(VAR_7, VAR_7->misc_reg, &VAR_14);

 FUNC_5(VAR_7);
 *VAR_9 = ((VAR_8 / VAR_11) * VAR_12) / VAR_13;
 return 0;
}
