
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int s_blocksize; int s_blocksize_bits; } ;



__attribute__((used)) static inline u64 FUNC_0(struct super_block *VAR_0,
      u64 VAR_1)
{
 VAR_1 += VAR_0->s_blocksize - 1;
 return VAR_1 >> VAR_0->s_blocksize_bits;
}
