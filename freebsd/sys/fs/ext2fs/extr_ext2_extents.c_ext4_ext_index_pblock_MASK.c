
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_extent_index {int ei_leaf_lo; scalar_t__ ei_leaf_hi; } ;
typedef int e4fs_daddr_t ;



__attribute__((used)) static inline e4fs_daddr_t
FUNC_0(struct ext4_extent_index *VAR_0)
{
 e4fs_daddr_t VAR_1;

 VAR_1 = VAR_0->ei_leaf_lo;
 VAR_1 |= (e4fs_daddr_t)VAR_0->ei_leaf_hi << 32;

 return (VAR_1);
}
