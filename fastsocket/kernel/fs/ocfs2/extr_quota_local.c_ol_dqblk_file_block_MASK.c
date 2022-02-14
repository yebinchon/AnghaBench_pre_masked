
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {unsigned int s_blocksize_bits; } ;
typedef unsigned int loff_t ;



__attribute__((used)) static inline unsigned int FUNC_0(struct super_block *VAR_0, loff_t VAR_1)
{
 return VAR_1 >> VAR_0->s_blocksize_bits;
}
