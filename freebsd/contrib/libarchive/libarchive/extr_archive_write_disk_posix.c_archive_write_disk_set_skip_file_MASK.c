
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_disk {int skip_file_set; void* skip_file_ino; void* skip_file_dev; int archive; } ;
struct archive {int dummy; } ;
typedef void* la_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,char*) ;

int
FUNC_1(struct archive *VAR_3, la_int64_t VAR_4, la_int64_t VAR_5)
{
 struct archive_write_disk *VAR_6 = (struct archive_write_disk *)VAR_3;
 FUNC_0(&VAR_6->archive, VAR_2,
     VAR_1, "archive_write_disk_set_skip_file");
 VAR_6->skip_file_set = 1;
 VAR_6->skip_file_dev = VAR_4;
 VAR_6->skip_file_ino = VAR_5;
 return (VAR_0);
}
