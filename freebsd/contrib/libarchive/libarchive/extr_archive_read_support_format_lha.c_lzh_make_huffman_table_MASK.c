
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct huffman {int* freq; int tbl_bits; int max_bits; int* tbl; int shift_bits; unsigned char* bitlen; int len_avail; int tree_used; int tree_avail; struct htree_t* tree; } ;
struct htree_t {int left; int right; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static int
FUNC_1(struct huffman *VAR_1)
{
 uint16_t *VAR_2;
 const unsigned char *VAR_3;
 int VAR_4[17], VAR_5[17];
 int VAR_6, VAR_7 = 0, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;




 VAR_8 = 0;
 for (VAR_6 = 1, VAR_10 = 1 << 15; VAR_6 <= 16; VAR_6++, VAR_10 >>= 1) {
  VAR_4[VAR_6] = VAR_8;
  VAR_5[VAR_6] = VAR_10;
  if (VAR_1->freq[VAR_6]) {
   VAR_8 += VAR_1->freq[VAR_6] * VAR_10;
   VAR_7 = VAR_6;
  }
 }
 if (VAR_8 != 0x10000 || VAR_7 > VAR_1->tbl_bits)
  return (0);

 VAR_1->max_bits = VAR_7;






 if (VAR_7 < 16) {
  int VAR_13 = 16 - VAR_7;
  for (VAR_6 = 1; VAR_6 <= VAR_7; VAR_6++) {
   VAR_4[VAR_6] >>= VAR_13;
   VAR_5[VAR_6] >>= VAR_13;
  }
 }
 if (VAR_7 > VAR_0) {
  unsigned VAR_14;
  uint16_t *VAR_15;

  VAR_11 = VAR_7 - VAR_0;
  for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++) {
   VAR_4[VAR_6] >>= VAR_11;
   VAR_5[VAR_6] >>= VAR_11;
  }
  VAR_14 = VAR_4[VAR_0] +
      VAR_5[VAR_0] * VAR_1->freq[VAR_0];
  VAR_15 = &(VAR_1->tbl[VAR_14]);
  while (VAR_15 < &VAR_1->tbl[1U<<VAR_0])
   *VAR_15++ = 0;
 } else
  VAR_11 = 0;
 VAR_1->shift_bits = VAR_11;




 VAR_9 = 1 << VAR_0;
 VAR_2 = VAR_1->tbl;
 VAR_3 = VAR_1->bitlen;
 VAR_12 = VAR_1->len_avail;
 VAR_1->tree_used = 0;
 for (VAR_6 = 0; VAR_6 < VAR_12; VAR_6++) {
  uint16_t *VAR_16;
  int VAR_17, VAR_18;
  uint16_t VAR_19;
  int VAR_20;
  struct htree_t *VAR_21;

  if (VAR_3[VAR_6] == 0)
   continue;

  VAR_17 = VAR_3[VAR_6];
  VAR_8 = VAR_4[VAR_17];
  VAR_18 = VAR_5[VAR_17];
  if (VAR_17 <= VAR_0) {

   if ((VAR_4[VAR_17] = VAR_8 + VAR_18) > VAR_9)
    return (0);

   VAR_16 = &(VAR_2[VAR_8]);
   if (VAR_18 > 7) {
    uint16_t *VAR_22;

    VAR_18 -= 8;
    VAR_22 = &VAR_16[VAR_18];
    VAR_22[0] = (uint16_t)VAR_6;
    VAR_22[1] = (uint16_t)VAR_6;
    VAR_22[2] = (uint16_t)VAR_6;
    VAR_22[3] = (uint16_t)VAR_6;
    VAR_22[4] = (uint16_t)VAR_6;
    VAR_22[5] = (uint16_t)VAR_6;
    VAR_22[6] = (uint16_t)VAR_6;
    VAR_22[7] = (uint16_t)VAR_6;
    if (VAR_18 > 7) {
     VAR_18 -= 8;
     FUNC_0(&VAR_16[VAR_18], VAR_22,
      8 * sizeof(uint16_t));
     VAR_22 = &VAR_16[VAR_18];
     while (VAR_18 > 15) {
      VAR_18 -= 16;
      FUNC_0(&VAR_16[VAR_18], VAR_22,
       16 * sizeof(uint16_t));
     }
    }
    if (VAR_18)
     FUNC_0(VAR_16, VAR_22, VAR_18 * sizeof(uint16_t));
   } else {
    while (VAR_18 > 1) {
     VAR_16[--VAR_18] = (uint16_t)VAR_6;
     VAR_16[--VAR_18] = (uint16_t)VAR_6;
    }
    if (VAR_18)
     VAR_16[--VAR_18] = (uint16_t)VAR_6;
   }
   continue;
  }





  VAR_4[VAR_17] = VAR_8 + VAR_18;
  VAR_19 = 1U << (VAR_11 -1);
  VAR_20 = VAR_17 - VAR_0;

  VAR_16 = &(VAR_2[VAR_8 >> VAR_11]);
  if (*VAR_16 == 0) {
   *VAR_16 = VAR_12 + VAR_1->tree_used;
   VAR_21 = &(VAR_1->tree[VAR_1->tree_used++]);
   if (VAR_1->tree_used > VAR_1->tree_avail)
    return (0);
   VAR_21->left = 0;
   VAR_21->right = 0;
  } else {
   if (*VAR_16 < VAR_12 ||
       *VAR_16 >= (VAR_12 + VAR_1->tree_used))
    return (0);
   VAR_21 = &(VAR_1->tree[*VAR_16 - VAR_12]);
  }
  while (--VAR_20 > 0) {
   if (VAR_8 & VAR_19) {
    if (VAR_21->left < VAR_12) {
     VAR_21->left = VAR_12 + VAR_1->tree_used;
     VAR_21 = &(VAR_1->tree[VAR_1->tree_used++]);
     if (VAR_1->tree_used > VAR_1->tree_avail)
      return (0);
     VAR_21->left = 0;
     VAR_21->right = 0;
    } else {
     VAR_21 = &(VAR_1->tree[VAR_21->left - VAR_12]);
    }
   } else {
    if (VAR_21->right < VAR_12) {
     VAR_21->right = VAR_12 + VAR_1->tree_used;
     VAR_21 = &(VAR_1->tree[VAR_1->tree_used++]);
     if (VAR_1->tree_used > VAR_1->tree_avail)
      return (0);
     VAR_21->left = 0;
     VAR_21->right = 0;
    } else {
     VAR_21 = &(VAR_1->tree[VAR_21->right - VAR_12]);
    }
   }
   VAR_19 >>= 1;
  }
  if (VAR_8 & VAR_19) {
   if (VAR_21->left != 0)
    return (0);
   VAR_21->left = (uint16_t)VAR_6;
  } else {
   if (VAR_21->right != 0)
    return (0);
   VAR_21->right = (uint16_t)VAR_6;
  }
 }
 return (1);
}
