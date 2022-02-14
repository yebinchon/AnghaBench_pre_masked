
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_blocks; int i_mode; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct inode *VAR_0)
{
 return (FUNC_0(VAR_0->i_mode) &&
  VAR_0->i_blocks == 0);
}
