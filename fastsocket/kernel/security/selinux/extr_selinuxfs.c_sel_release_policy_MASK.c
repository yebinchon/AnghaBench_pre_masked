
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_load_memory {int data; } ;
struct inode {int dummy; } ;
struct file {struct policy_load_memory* private_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct policy_load_memory*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct policy_load_memory *VAR_3 = VAR_2->private_data;

 FUNC_0(!VAR_3);

 VAR_0 = 0;

 FUNC_2(VAR_3->data);
 FUNC_1(VAR_3);

 return 0;
}
