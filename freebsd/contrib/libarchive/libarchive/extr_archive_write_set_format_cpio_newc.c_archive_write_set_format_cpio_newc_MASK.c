
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpio {int dummy; } ;
struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_write {char* format_name; TYPE_1__ archive; int (* format_free ) (struct archive_write*) ;int format_close; int format_finish_entry; int format_write_data; int format_write_header; int format_options; struct cpio* format_data; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct archive_write*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct archive_write*) ;

int
FUNC_5(struct archive *VAR_11)
{
 struct archive_write *VAR_12 = (struct archive_write *)VAR_11;
 struct cpio *VAR_13;

 FUNC_0(VAR_11, VAR_4,
     VAR_3, "archive_write_set_format_cpio_newc");


 if (VAR_12->format_free != ((void*)0))
  (VAR_12->format_free)(VAR_12);

 VAR_13 = (struct cpio *)FUNC_3(1, sizeof(*VAR_13));
 if (VAR_13 == ((void*)0)) {
  FUNC_1(&VAR_12->archive, VAR_5, "Can't allocate cpio data");
  return (VAR_0);
 }
 VAR_12->format_data = VAR_13;
 VAR_12->format_name = "cpio";
 VAR_12->format_options = VAR_10;
 VAR_12->format_write_header = VAR_9;
 VAR_12->format_write_data = VAR_7;
 VAR_12->format_finish_entry = VAR_8;
 VAR_12->format_close = VAR_6;
 VAR_12->format_free = FUNC_2;
 VAR_12->archive.archive_format = VAR_1;
 VAR_12->archive.archive_format_name = "SVR4 cpio nocrc";
 return (VAR_2);
}
