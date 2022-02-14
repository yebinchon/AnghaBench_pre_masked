
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct huffman {scalar_t__ len_size; size_t* tbl; scalar_t__* bitlen; scalar_t__ shift_bits; scalar_t__ max_bits; } ;



__attribute__((used)) static int
FUNC_0(struct huffman *VAR_0, uint16_t VAR_1)
{
 if (VAR_1 >= VAR_0->len_size)
  return (0);
 VAR_0->tbl[0] = VAR_1;
 VAR_0->max_bits = 0;
 VAR_0->shift_bits = 0;
 VAR_0->bitlen[VAR_0->tbl[0]] = 0;
 return (1);
}
