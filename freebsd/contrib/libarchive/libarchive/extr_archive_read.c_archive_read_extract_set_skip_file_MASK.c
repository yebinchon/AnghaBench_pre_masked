
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int skip_file_set; void* skip_file_ino; void* skip_file_dev; } ;
struct archive {int dummy; } ;
typedef void* la_int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct archive*,int ,int ,char*) ;

void
FUNC_1(struct archive *VAR_3, la_int64_t VAR_4,
    la_int64_t VAR_5)
{
 struct archive_read *VAR_6 = (struct archive_read *)VAR_3;

 if (VAR_0 != FUNC_0(VAR_3, VAR_1,
  VAR_2, "archive_read_extract_set_skip_file"))
  return;
 VAR_6->skip_file_set = 1;
 VAR_6->skip_file_dev = VAR_4;
 VAR_6->skip_file_ino = VAR_5;
}
