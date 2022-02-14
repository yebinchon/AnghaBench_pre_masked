
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; } ;
typedef int mode_t ;
struct TYPE_2__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct dentry *VAR_6)
{
 mode_t VAR_7 = VAR_6->d_inode->i_mode;
 int VAR_8 = 0;


 if (FUNC_2(VAR_7 & VAR_4))
  VAR_8 = VAR_1;





 if (FUNC_2((VAR_7 & VAR_3) && (VAR_7 & VAR_5)))
  VAR_8 |= VAR_0;

 if (FUNC_2(VAR_8 && !FUNC_1(VAR_2) && FUNC_0(VAR_7)))
  return VAR_8;

 return 0;
}
