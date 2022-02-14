
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct seq_file {int dummy; } ;
struct security_mnt_opts {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct security_mnt_opts*) ;
 int FUNC_1 (struct super_block*,struct security_mnt_opts*) ;
 int FUNC_2 (struct seq_file*,struct security_mnt_opts*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, struct super_block *VAR_2)
{
 struct security_mnt_opts VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_3);
 if (VAR_4) {

  if (VAR_4 == -VAR_0)
   VAR_4 = 0;
  return VAR_4;
 }

 FUNC_2(VAR_1, &VAR_3);

 FUNC_0(&VAR_3);

 return VAR_4;
}
