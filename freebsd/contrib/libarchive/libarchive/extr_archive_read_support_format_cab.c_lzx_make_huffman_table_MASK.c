
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct huffman {int* freq; int tbl_bits; int max_bits; unsigned char* bitlen; int len_size; scalar_t__ tree_used; scalar_t__* tbl; } ;



__attribute__((used)) static int
FUNC_0(struct huffman *VAR_0)
{
 uint16_t *VAR_1;
 const unsigned char *VAR_2;
 int VAR_3[17], VAR_4[17];
 int VAR_5, VAR_6 = 0, VAR_7, VAR_8, VAR_9;
 int VAR_10;




 VAR_7 = 0;
 for (VAR_5 = 1, VAR_9 = 1 << 15; VAR_5 <= 16; VAR_5++, VAR_9 >>= 1) {
  VAR_3[VAR_5] = VAR_7;
  VAR_4[VAR_5] = VAR_9;
  if (VAR_0->freq[VAR_5]) {
   VAR_7 += VAR_0->freq[VAR_5] * VAR_9;
   VAR_6 = VAR_5;
  }
 }
 if ((VAR_7 & 0xffff) != 0 || VAR_6 > VAR_0->tbl_bits)
  return (0);

 VAR_0->max_bits = VAR_6;






 if (VAR_6 < 16) {
  int VAR_11 = 16 - VAR_6;
  for (VAR_5 = 1; VAR_5 <= VAR_6; VAR_5++) {
   VAR_3[VAR_5] >>= VAR_11;
   VAR_4[VAR_5] >>= VAR_11;
  }
 }




 VAR_8 = 1 << VAR_0->tbl_bits;
 VAR_1 = VAR_0->tbl;
 VAR_2 = VAR_0->bitlen;
 VAR_10 = VAR_0->len_size;
 VAR_0->tree_used = 0;
 for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++) {
  uint16_t *VAR_12;
  int VAR_13, VAR_14;

  if (VAR_2[VAR_5] == 0)
   continue;

  VAR_13 = VAR_2[VAR_5];
  if (VAR_13 > VAR_8)
   return (0);
  VAR_7 = VAR_3[VAR_13];
  VAR_14 = VAR_4[VAR_13];

  if ((VAR_3[VAR_13] = VAR_7 + VAR_14) > VAR_8)
   return (0);

  VAR_12 = &(VAR_1[VAR_7]);
  while (--VAR_14 >= 0)
   VAR_12[VAR_14] = (uint16_t)VAR_5;
 }
 return (1);
}
