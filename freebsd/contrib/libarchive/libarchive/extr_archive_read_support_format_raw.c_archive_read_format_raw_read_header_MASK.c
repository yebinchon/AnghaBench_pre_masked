
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct raw_info {scalar_t__ end_of_file; } ;
struct TYPE_4__ {char* archive_format_name; int archive_format; } ;
struct archive_read {TYPE_2__ archive; TYPE_1__* format; } ;
struct archive_entry {int dummy; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_read*,struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,int ) ;
 int FUNC_2 (struct archive_entry*,char*) ;
 int FUNC_3 (struct archive_entry*,int) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_3,
    struct archive_entry *VAR_4)
{
 struct raw_info *VAR_5;

 VAR_5 = (struct raw_info *)(VAR_3->format->data);
 if (VAR_5->end_of_file)
  return (VAR_1);

 VAR_3->archive.archive_format = VAR_2;
 VAR_3->archive.archive_format_name = "raw";
 FUNC_2(VAR_4, "data");
 FUNC_1(VAR_4, VAR_0);
 FUNC_3(VAR_4, 0644);



 return FUNC_0(VAR_3, VAR_4);
}
