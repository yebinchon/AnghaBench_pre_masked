
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct super_block {int dummy; } ;
typedef unsigned int pgoff_t ;
struct TYPE_2__ {unsigned int s_clustersize_bits; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 unsigned int VAR_0 ;

__attribute__((used)) static inline pgoff_t FUNC_1(struct super_block *VAR_1,
       u32 VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1)->s_clustersize_bits;
        pgoff_t VAR_4 = VAR_2;

 if (VAR_0 > VAR_3) {
  VAR_4 = (pgoff_t)VAR_2 >> (VAR_0 - VAR_3);
 } else if (VAR_0 < VAR_3) {
  VAR_4 = (pgoff_t)VAR_2 << (VAR_3 - VAR_0);
 }

 return VAR_4;
}
