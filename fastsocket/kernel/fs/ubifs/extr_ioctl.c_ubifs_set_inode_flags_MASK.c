
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_flags; } ;
struct TYPE_2__ {unsigned int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 TYPE_1__* FUNC_0 (struct inode*) ;

void FUNC_1(struct inode *VAR_8)
{
 unsigned int VAR_9 = FUNC_0(VAR_8)->flags;

 VAR_8->i_flags &= ~(VAR_3 | VAR_0 | VAR_2 | VAR_1);
 if (VAR_9 & VAR_7)
  VAR_8->i_flags |= VAR_3;
 if (VAR_9 & VAR_4)
  VAR_8->i_flags |= VAR_0;
 if (VAR_9 & VAR_6)
  VAR_8->i_flags |= VAR_2;
 if (VAR_9 & VAR_5)
  VAR_8->i_flags |= VAR_1;
}
