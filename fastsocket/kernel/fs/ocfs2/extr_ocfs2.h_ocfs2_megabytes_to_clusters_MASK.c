
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int s_clustersize_bits; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct super_block *VAR_1,
             unsigned int VAR_2)
{
 FUNC_0(VAR_0 > 1048576);

 return VAR_2 << (20 - FUNC_1(VAR_1)->s_clustersize_bits);
}
