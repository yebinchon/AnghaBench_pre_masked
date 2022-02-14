
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ name_len; int utf16name; } ;
struct archive_rb_node {int dummy; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(const struct archive_rb_node *VAR_0,
    const struct archive_rb_node *VAR_1)
{
 const struct file *VAR_2 = (const struct file *)VAR_0;
 const struct file *VAR_3 = (const struct file *)VAR_1;

 if (VAR_2->name_len == VAR_3->name_len)
  return (FUNC_0(VAR_2->utf16name, VAR_3->utf16name, VAR_2->name_len));
 return (VAR_2->name_len > VAR_3->name_len)?1:-1;
}
