
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct gcov_node {scalar_t__ num_loaded; } ;
struct gcov_info {int dummy; } ;
struct file {struct seq_file* private_data; } ;
typedef size_t ssize_t ;
typedef int off_t ;


 int FUNC_0 (struct gcov_info*) ;
 int FUNC_1 (struct gcov_info*) ;
 struct gcov_info* FUNC_2 (int ) ;
 struct gcov_node* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (struct gcov_node*) ;
 int FUNC_7 (struct gcov_node*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct file *VAR_1, const char *VAR_2, size_t VAR_3, off_t *VAR_4)
{
 struct seq_file *VAR_5;
 struct gcov_info *VAR_6;
 struct gcov_node *VAR_7;

 VAR_5 = VAR_1->private_data;
 VAR_6 = FUNC_2(VAR_5->private);
 FUNC_4(&VAR_0);
 VAR_7 = FUNC_3(FUNC_0(VAR_6));
 if (VAR_7) {

  if (VAR_7->num_loaded == 0)
   FUNC_6(VAR_7);
  else
   FUNC_7(VAR_7);
 }

 FUNC_1(VAR_6);
 FUNC_5(&VAR_0);

 return (VAR_3);
}
