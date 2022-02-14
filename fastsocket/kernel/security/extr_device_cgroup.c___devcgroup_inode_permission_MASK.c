
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (short,int ,int ,short) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;

int FUNC_5(struct inode *VAR_6, int VAR_7)
{
 short VAR_8, VAR_9 = 0;

 if (FUNC_0(VAR_6->i_mode))
  VAR_8 = VAR_2;
 if (FUNC_1(VAR_6->i_mode))
  VAR_8 = VAR_3;
 if (VAR_7 & VAR_5)
  VAR_9 |= VAR_1;
 if (VAR_7 & VAR_4)
  VAR_9 |= VAR_0;

 return FUNC_2(VAR_8, FUNC_3(VAR_6), FUNC_4(VAR_6),
   VAR_9);
}
