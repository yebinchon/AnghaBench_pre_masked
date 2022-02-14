
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct bin_buffer* private_data; } ;
struct bin_buffer {struct bin_buffer* buffer; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bin_buffer*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct inode * VAR_1, struct file * VAR_2)
{
 struct bin_buffer *VAR_3 = VAR_2->private_data;

 FUNC_2(&VAR_0);
 FUNC_0(&VAR_3->list);
 FUNC_3(&VAR_0);

 FUNC_1(VAR_3->buffer);
 FUNC_1(VAR_3);
 return 0;
}
