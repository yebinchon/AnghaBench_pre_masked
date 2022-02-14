
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_operations {int dummy; } ;
struct seq_net_private {struct net* net; } ;
struct net {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct seq_net_private* FUNC_1 (struct file*,struct seq_operations const*,int) ;
 struct net* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct net*) ;

int FUNC_4(struct inode *VAR_2, struct file *VAR_3,
   const struct seq_operations *VAR_4, int VAR_5)
{
 struct net *VAR_6;
 struct seq_net_private *VAR_7;

 FUNC_0(VAR_5 < sizeof(*VAR_7));

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_6);
  return -VAR_0;
 }



 return 0;
}
