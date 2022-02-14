
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnutar {size_t entry_bytes_remaining; } ;
struct archive_write {scalar_t__ format_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct archive_write*,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(struct archive_write *VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct gnutar *VAR_4;
 int VAR_5;

 VAR_4 = (struct gnutar *)VAR_1->format_data;
 if (VAR_3 > VAR_4->entry_bytes_remaining)
  VAR_3 = (size_t)VAR_4->entry_bytes_remaining;
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 VAR_4->entry_bytes_remaining -= VAR_3;
 if (VAR_5 != VAR_0)
  return (VAR_5);
 return (VAR_3);
}
