
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_flags; int i_sb; } ;
typedef int __u16 ;
struct TYPE_2__ {int i_flags; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct inode *VAR_8, __u16 * VAR_9)
{
 if (FUNC_1(VAR_8->i_sb)) {
  if (VAR_8->i_flags & VAR_4)
   *VAR_9 |= VAR_0;
  else
   *VAR_9 &= ~VAR_0;
  if (VAR_8->i_flags & VAR_6)
   *VAR_9 |= VAR_3;
  else
   *VAR_9 &= ~VAR_3;
  if (VAR_8->i_flags & VAR_5)
   *VAR_9 |= VAR_1;
  else
   *VAR_9 &= ~VAR_1;
  if (FUNC_0(VAR_8)->i_flags & VAR_7)
   *VAR_9 |= VAR_2;
  else
   *VAR_9 &= ~VAR_2;
 }
}
