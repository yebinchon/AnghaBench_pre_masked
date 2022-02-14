
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {char* buf; unsigned int size; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (struct file*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 unsigned VAR_5 = 4096 * (1 + FUNC_2() / 32);
 char *VAR_6;
 struct seq_file *VAR_7;
 int VAR_8;


 if (VAR_5 > 128 * 1024)
  VAR_5 = 128 * 1024;
 VAR_6 = FUNC_1(VAR_5, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_4, VAR_2, ((void*)0));
 if (!VAR_8) {
  VAR_7 = VAR_4->private_data;
  VAR_7->buf = VAR_6;
  VAR_7->size = VAR_5;
 } else
  FUNC_0(VAR_6);
 return VAR_8;
}
