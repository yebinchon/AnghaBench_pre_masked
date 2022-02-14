
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct super_block {int s_blocksize_bits; } ;


 int VAR_0 ;

__attribute__((used)) static inline u16 FUNC_0(struct super_block *VAR_1)
{
 return VAR_0 / (1 << VAR_1->s_blocksize_bits);
}
