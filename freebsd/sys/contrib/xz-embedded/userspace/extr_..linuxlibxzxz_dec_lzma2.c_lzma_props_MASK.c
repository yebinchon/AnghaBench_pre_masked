
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int pos_mask; int literal_pos_mask; int lc; } ;
struct xz_dec_lzma2 {TYPE_1__ lzma; } ;


 int FUNC_0 (struct xz_dec_lzma2*) ;

__attribute__((used)) static bool FUNC_1(struct xz_dec_lzma2 *VAR_0, uint8_t VAR_1)
{
 if (VAR_1 > (4 * 5 + 4) * 9 + 8)
  return 0;

 VAR_0->lzma.pos_mask = 0;
 while (VAR_1 >= 9 * 5) {
  VAR_1 -= 9 * 5;
  ++VAR_0->lzma.pos_mask;
 }

 VAR_0->lzma.pos_mask = (1 << VAR_0->lzma.pos_mask) - 1;

 VAR_0->lzma.literal_pos_mask = 0;
 while (VAR_1 >= 9) {
  VAR_1 -= 9;
  ++VAR_0->lzma.literal_pos_mask;
 }

 VAR_0->lzma.lc = VAR_1;

 if (VAR_0->lzma.lc + VAR_0->lzma.literal_pos_mask > 4)
  return 0;

 VAR_0->lzma.literal_pos_mask = (1 << VAR_0->lzma.literal_pos_mask) - 1;

 FUNC_0(VAR_0);

 return 1;
}
