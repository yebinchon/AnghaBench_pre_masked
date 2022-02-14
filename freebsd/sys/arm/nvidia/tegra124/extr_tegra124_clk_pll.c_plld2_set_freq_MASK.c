
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct mnp_bits {int m_width; int n_width; } ;
struct pll_sc {struct pdiv_table* pdiv_table; struct mnp_bits mnp_bits; } ;
struct pdiv_table {scalar_t__ divider; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pll_sc*,int,int*,int,int,int,int) ;

__attribute__((used)) static int
FUNC_1(struct pll_sc *VAR_7, uint64_t VAR_8, uint64_t *VAR_9, int VAR_10)
{
 uint32_t VAR_11, VAR_12, VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16;
 uint64_t VAR_17, VAR_18;
 int64_t VAR_19, VAR_20;
 struct mnp_bits *VAR_21;
 struct pdiv_table *VAR_22;
 int VAR_23, VAR_24;

 VAR_21 = &VAR_7->mnp_bits;
 VAR_22 = VAR_7->pdiv_table;
 VAR_20 = VAR_2;

 for (VAR_23 = 0; VAR_22[VAR_23].divider != 0; VAR_23++) {
  VAR_13 = VAR_22[VAR_23].divider;


  VAR_17 = *VAR_9 * VAR_13;
  if (VAR_17 < VAR_6)
   continue;
  if (VAR_17 > VAR_5)
   break;

  for (VAR_11 = 1; VAR_11 < (1 << VAR_21->m_width); VAR_11++) {
   VAR_12 = (*VAR_9 * VAR_13 * VAR_11 + VAR_8 / 2) / VAR_8;


   if (VAR_12 == 0)
    continue;
   if (VAR_12 >= (1 << VAR_21->n_width))
    break;
   VAR_17 = (VAR_8 * VAR_12) / VAR_11;
   if (VAR_17 > VAR_5 || VAR_17 < VAR_6)
    continue;
   VAR_18 = VAR_8 / VAR_11;
   if (VAR_18 > VAR_3 || VAR_17 < VAR_4)
    continue;


   VAR_19 = *VAR_9 - VAR_17 / VAR_13;
   if (VAR_19 < 0)
    VAR_19 = -VAR_19;
   if (VAR_19 < VAR_20) {
    VAR_20 = VAR_19;
    VAR_16 = VAR_13;
    VAR_14 = VAR_11;
    VAR_15 = VAR_12;
   }
   if (VAR_19 == 0)
    goto done;
  }
 }
done:




 if (VAR_20 > ((*VAR_9 * 100) / 4))
  return (VAR_1);

 if (VAR_10 & VAR_0)
  return (0);
 VAR_24 = FUNC_0(VAR_7, VAR_8, VAR_9, VAR_10, VAR_14, VAR_15, VAR_16);

 return (VAR_24);
}
