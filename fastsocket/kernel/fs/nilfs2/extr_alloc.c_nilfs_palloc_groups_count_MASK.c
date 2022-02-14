
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned long i_blkbits; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline unsigned long
FUNC_0(const struct inode *VAR_1)
{
 return 1UL << (VAR_0 - (VAR_1->i_blkbits + 3 ));
}
