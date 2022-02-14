
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_entry {scalar_t__ local_header_offset; } ;
struct archive_rb_node {int dummy; } ;



__attribute__((used)) static int
FUNC_0(const struct archive_rb_node *VAR_0, const struct archive_rb_node *VAR_1)
{
 const struct zip_entry *VAR_2 = (const struct zip_entry *)VAR_0;
 const struct zip_entry *VAR_3 = (const struct zip_entry *)VAR_1;

 if (VAR_2->local_header_offset > VAR_3->local_header_offset)
  return -1;
 if (VAR_2->local_header_offset < VAR_3->local_header_offset)
  return 1;
 return 0;
}
