
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_io_buffer {struct tomoyo_io_buffer* write_buf; struct tomoyo_io_buffer* read_buf; } ;
struct file {struct tomoyo_io_buffer* private_data; } ;


 int FUNC_0 (struct tomoyo_io_buffer*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0)
{
 struct tomoyo_io_buffer *VAR_1 = VAR_0->private_data;


 FUNC_0(VAR_1->read_buf);
 VAR_1->read_buf = ((void*)0);
 FUNC_0(VAR_1->write_buf);
 VAR_1->write_buf = ((void*)0);
 FUNC_0(VAR_1);
 VAR_1 = ((void*)0);
 VAR_0->private_data = ((void*)0);
 return 0;
}
