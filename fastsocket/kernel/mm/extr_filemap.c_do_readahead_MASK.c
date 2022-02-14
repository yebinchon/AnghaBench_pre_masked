
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
typedef int ssize_t ;
typedef int pgoff_t ;
struct TYPE_2__ {int readpage; } ;


 int VAR_0 ;
 int FUNC_0 (struct address_space*,struct file*,int ,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_1(struct address_space *VAR_1, struct file *VAR_2,
      pgoff_t VAR_3, unsigned long VAR_4)
{
 if (!VAR_1 || !VAR_1->a_ops || !VAR_1->a_ops->readpage)
  return -VAR_0;

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 return 0;
}
