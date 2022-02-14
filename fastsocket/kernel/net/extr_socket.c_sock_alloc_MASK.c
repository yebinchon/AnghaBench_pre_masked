
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct inode {int i_mode; int i_gid; int i_uid; } ;
struct TYPE_2__ {int mnt_sb; } ;


 struct socket* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct socket*,int ) ;
 struct inode* FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct socket *FUNC_6(void)
{
 struct inode *VAR_5;
 struct socket *VAR_6;

 VAR_5 = FUNC_4(VAR_2->mnt_sb);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_5);

 FUNC_3(VAR_6, VAR_4);
 VAR_5->i_mode = VAR_0 | VAR_1;
 VAR_5->i_uid = FUNC_2();
 VAR_5->i_gid = FUNC_1();

 FUNC_5(VAR_3, 1);
 return VAR_6;
}
