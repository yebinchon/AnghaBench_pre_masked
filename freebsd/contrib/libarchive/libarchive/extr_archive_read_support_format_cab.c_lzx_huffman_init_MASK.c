
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct huffman {int len_size; int tbl_bits; int * tbl; int * bitlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (size_t,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,int ,size_t) ;

__attribute__((used)) static int
FUNC_4(struct huffman *VAR_2, size_t VAR_3, int VAR_4)
{

 if (VAR_2->bitlen == ((void*)0) || VAR_2->len_size != (int)VAR_3) {
  FUNC_1(VAR_2->bitlen);
  VAR_2->bitlen = FUNC_0(VAR_3, sizeof(VAR_2->bitlen[0]));
  if (VAR_2->bitlen == ((void*)0))
   return (VAR_0);
  VAR_2->len_size = (int)VAR_3;
 } else
  FUNC_3(VAR_2->bitlen, 0, VAR_3 * sizeof(VAR_2->bitlen[0]));
 if (VAR_2->tbl == ((void*)0)) {
  VAR_2->tbl = FUNC_2(((size_t)1 << VAR_4) * sizeof(VAR_2->tbl[0]));
  if (VAR_2->tbl == ((void*)0))
   return (VAR_0);
  VAR_2->tbl_bits = VAR_4;
 }
 return (VAR_1);
}
