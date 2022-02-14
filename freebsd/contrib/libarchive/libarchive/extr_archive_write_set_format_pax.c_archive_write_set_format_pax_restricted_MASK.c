
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_write {TYPE_1__ archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(struct archive *VAR_3)
{
 struct archive_write *VAR_4 = (struct archive_write *)VAR_3;
 int VAR_5;

 FUNC_0(VAR_3, VAR_2,
     VAR_1, "archive_write_set_format_pax_restricted");

 VAR_5 = FUNC_1(&VAR_4->archive);
 VAR_4->archive.archive_format = VAR_0;
 VAR_4->archive.archive_format_name = "restricted POSIX pax interchange";
 return (VAR_5);
}
