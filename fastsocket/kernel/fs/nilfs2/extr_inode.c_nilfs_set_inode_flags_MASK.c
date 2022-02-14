
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_flags; int i_mapping; } ;
struct TYPE_2__ {unsigned int i_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct inode *VAR_11)
{
 unsigned int VAR_12 = FUNC_0(VAR_11)->i_flags;

 VAR_11->i_flags &= ~(VAR_9 | VAR_5 | VAR_7 | VAR_8 |
       VAR_6);
 if (VAR_12 & VAR_4)
  VAR_11->i_flags |= VAR_9;
 if (VAR_12 & VAR_0)
  VAR_11->i_flags |= VAR_5;
 if (VAR_12 & VAR_2)
  VAR_11->i_flags |= VAR_7;

 if (VAR_12 & VAR_3)

  VAR_11->i_flags |= VAR_8;
 if (VAR_12 & VAR_1)
  VAR_11->i_flags |= VAR_6;
 FUNC_2(VAR_11->i_mapping,
        FUNC_1(VAR_11->i_mapping) & ~VAR_10);
}
