
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net {int proc_net; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef int filldir_t ;
struct TYPE_3__ {int d_inode; } ;


 int VAR_0 ;
 struct net* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct file*,void*,int ) ;
 int FUNC_2 (struct net*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
  filldir_t VAR_3)
{
 int VAR_4;
 struct net *VAR_5;

 VAR_4 = -VAR_0;
 VAR_5 = FUNC_0(VAR_1->f_path.dentry->d_inode);
 if (VAR_5 != ((void*)0)) {
  VAR_4 = FUNC_1(VAR_5->proc_net, VAR_1, VAR_2, VAR_3);
  FUNC_2(VAR_5);
 }
 return VAR_4;
}
