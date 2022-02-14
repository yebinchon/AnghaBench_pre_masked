
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_extent {int e_start_lo; scalar_t__ e_start_hi; } ;
typedef int e4fs_daddr_t ;



__attribute__((used)) static inline e4fs_daddr_t
FUNC_0(struct ext4_extent *VAR_0)
{
 e4fs_daddr_t VAR_1;

 VAR_1 = VAR_0->e_start_lo;
 VAR_1 |= (e4fs_daddr_t)VAR_0->e_start_hi << 32;

 return (VAR_1);
}
