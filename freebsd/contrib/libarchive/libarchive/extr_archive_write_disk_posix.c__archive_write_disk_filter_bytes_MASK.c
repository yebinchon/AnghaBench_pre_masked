
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_disk {int total_bytes_written; } ;
struct archive {int dummy; } ;
typedef int int64_t ;



__attribute__((used)) static int64_t
FUNC_0(struct archive *VAR_0, int VAR_1)
{
 struct archive_write_disk *VAR_2 = (struct archive_write_disk *)VAR_0;
 (void)VAR_1;
 if (VAR_1 == -1 || VAR_1 == 0)
  return (VAR_2->total_bytes_written);
 return (-1);
}
