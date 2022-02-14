
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; int s_blocksize; } ;
typedef int b_blocknr_t ;



__attribute__((used)) static inline void FUNC_0(struct super_block *VAR_0,
       b_blocknr_t VAR_1,
       unsigned int *VAR_2,
       unsigned int *VAR_3)
{


 *VAR_2 = VAR_1 >> (VAR_0->s_blocksize_bits + 3);

 *VAR_3 = VAR_1 & ((VAR_0->s_blocksize << 3) - 1);
}
