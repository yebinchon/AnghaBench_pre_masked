
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct rchan_buf {int dummy; } ;
struct file {struct rchan_buf* private_data; } ;


 int FUNC_0 (struct rchan_buf*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct rchan_buf *VAR_2 = VAR_0->private_data;
 return FUNC_0(VAR_2, VAR_1);
}
