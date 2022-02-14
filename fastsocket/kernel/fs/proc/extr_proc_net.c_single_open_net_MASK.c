
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct net* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct file*,int (*) (struct seq_file*,void*),struct net*) ;

int FUNC_3(struct inode *VAR_1, struct file *VAR_2,
  int (*VAR_3)(struct seq_file *, void *))
{
 int VAR_4;
 struct net *VAR_5;

 VAR_4 = -VAR_0;
 VAR_5 = FUNC_0(VAR_1);
 if (VAR_5 == ((void*)0))
  goto err_net;

 VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_5);
 if (VAR_4 < 0)
  goto err_open;

 return 0;

err_open:
 FUNC_1(VAR_5);
err_net:
 return VAR_4;
}
