
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_read {TYPE_1__ archive; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct archive_read *VAR_2,
    struct archive_entry *VAR_3)
{
 (void)VAR_2;
 (void)VAR_3;

 VAR_2->archive.archive_format = VAR_1;
 VAR_2->archive.archive_format_name = "Empty file";

 return (VAR_0);
}
