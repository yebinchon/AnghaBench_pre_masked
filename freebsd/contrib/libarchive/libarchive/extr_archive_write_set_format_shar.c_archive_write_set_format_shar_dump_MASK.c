
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shar {int dump; } ;
struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_write {TYPE_1__ archive; int format_write_data; scalar_t__ format_data; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;

int
FUNC_1(struct archive *VAR_3)
{
 struct archive_write *VAR_4 = (struct archive_write *)VAR_3;
 struct shar *VAR_5;

 FUNC_0(&VAR_4->archive);
 VAR_5 = (struct shar *)VAR_4->format_data;
 VAR_5->dump = 1;
 VAR_4->format_write_data = VAR_2;
 VAR_4->archive.archive_format = VAR_0;
 VAR_4->archive.archive_format_name = "shar dump";
 return (VAR_1);
}
