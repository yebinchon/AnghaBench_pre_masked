
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct huffman {int* tbl; unsigned int shift_bits; int len_avail; } ;


 int FUNC_0 (struct huffman*,unsigned int,int) ;

__attribute__((used)) static inline int
FUNC_1(struct huffman *VAR_0, unsigned VAR_1)
{
 int VAR_2;




 VAR_2 = VAR_0->tbl[VAR_1 >> VAR_0->shift_bits];
 if (VAR_2 < VAR_0->len_avail || VAR_0->len_avail == 0)
  return (VAR_2);

 return (FUNC_0(VAR_0, VAR_1, VAR_2));
}
