
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpio {size_t entry_bytes_remaining; } ;
struct archive_write {scalar_t__ format_data; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct archive_write*,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(struct archive_write *VAR_0, const void *VAR_1, size_t VAR_2)
{
 struct cpio *VAR_3;
 int VAR_4;

 VAR_3 = (struct cpio *)VAR_0->format_data;
 if (VAR_2 > VAR_3->entry_bytes_remaining)
  VAR_2 = (size_t)VAR_3->entry_bytes_remaining;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_3->entry_bytes_remaining -= VAR_2;
 if (VAR_4 >= 0)
  return (VAR_2);
 else
  return (VAR_4);
}
