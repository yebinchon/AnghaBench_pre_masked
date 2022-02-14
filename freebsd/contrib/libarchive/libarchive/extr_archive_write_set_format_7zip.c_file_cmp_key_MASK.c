
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int name_len; } ;
struct archive_rb_node {int dummy; } ;



__attribute__((used)) static int
FUNC_0(const struct archive_rb_node *VAR_0, const void *VAR_1)
{
 const struct file *VAR_2 = (const struct file *)VAR_0;

 return (VAR_2->name_len - *(const char *)VAR_1);
}
