
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpio {scalar_t__ padding; scalar_t__ entry_bytes_remaining; } ;
struct archive_write {scalar_t__ format_data; } ;


 int FUNC_0 (struct archive_write*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_0)
{
 struct cpio *VAR_1;

 VAR_1 = (struct cpio *)VAR_0->format_data;
 return (FUNC_0(VAR_0,
  (size_t)VAR_1->entry_bytes_remaining + VAR_1->padding));
}
