
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct super_block {int dummy; } ;
struct TYPE_2__ {unsigned int s_clustersize_bits; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct super_block *VAR_1,
       unsigned long VAR_2)
{
 u32 VAR_3 = VAR_2;
 unsigned int VAR_4 = FUNC_0(VAR_1)->s_clustersize_bits;

 if (FUNC_1(VAR_0 > VAR_4))
  VAR_3 = VAR_2 << (VAR_0 - VAR_4);
 else if (VAR_0 < VAR_4)
  VAR_3 = VAR_2 >> (VAR_4 - VAR_0);

 return VAR_3;
}
