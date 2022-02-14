
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct huffman {int shift_bits; int len_avail; int tree_used; struct htree_t* tree; } ;
struct htree_t {int left; int right; } ;



__attribute__((used)) static int
FUNC_0(struct huffman *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct htree_t *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0->tree;
 VAR_4 = VAR_0->shift_bits;
 while (VAR_2 >= VAR_0->len_avail) {
  VAR_2 -= VAR_0->len_avail;
  if (VAR_4-- <= 0 || VAR_2 >= VAR_0->tree_used)
   return (0);
  if (VAR_1 & (1U << VAR_4))
   VAR_2 = VAR_3[VAR_2].left;
  else
   VAR_2 = VAR_3[VAR_2].right;
 }
 return (VAR_2);
}
