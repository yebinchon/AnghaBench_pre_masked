
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct huffman {int* tbl; int len_size; } ;



__attribute__((used)) static inline int
FUNC_0(struct huffman *VAR_0, unsigned VAR_1)
{
 int VAR_2;
 VAR_2 = VAR_0->tbl[VAR_1];
 if (VAR_2 < VAR_0->len_size)
  return (VAR_2);
 return (0);
}
