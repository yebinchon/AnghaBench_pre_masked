
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct huffman {int tree_avail; int len_size; int tbl_bits; int * tree; int * tbl; int * bitlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct huffman *VAR_3, size_t VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_3->bitlen == ((void*)0)) {
  VAR_3->bitlen = FUNC_0(VAR_4 * sizeof(VAR_3->bitlen[0]));
  if (VAR_3->bitlen == ((void*)0))
   return (VAR_0);
 }
 if (VAR_3->tbl == ((void*)0)) {
  if (VAR_5 < VAR_2)
   VAR_6 = VAR_5;
  else
   VAR_6 = VAR_2;
  VAR_3->tbl = FUNC_0(((size_t)1 << VAR_6) * sizeof(VAR_3->tbl[0]));
  if (VAR_3->tbl == ((void*)0))
   return (VAR_0);
 }
 if (VAR_3->tree == ((void*)0) && VAR_5 > VAR_2) {
  VAR_3->tree_avail = 1 << (VAR_5 - VAR_2 + 4);
  VAR_3->tree = FUNC_0(VAR_3->tree_avail * sizeof(VAR_3->tree[0]));
  if (VAR_3->tree == ((void*)0))
   return (VAR_0);
 }
 VAR_3->len_size = (int)VAR_4;
 VAR_3->tbl_bits = VAR_5;
 return (VAR_1);
}
