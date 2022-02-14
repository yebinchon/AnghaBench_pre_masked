
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcc_state {int family; } ;
struct seq_operations {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct vcc_state* FUNC_0 (struct file*,struct seq_operations const*,int) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2,
 int VAR_3, const struct seq_operations *VAR_4)
{
 struct vcc_state *VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_4, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->family = VAR_3;
 return 0;
}
