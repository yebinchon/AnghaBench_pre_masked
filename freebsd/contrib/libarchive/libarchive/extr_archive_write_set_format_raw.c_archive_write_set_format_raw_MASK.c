
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw {scalar_t__ entries_written; } ;
struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_write {char* format_name; TYPE_1__ archive; int (* format_free ) (struct archive_write*) ;int * format_close; int * format_finish_entry; int format_write_data; int format_write_header; int * format_options; struct raw* format_data; } ;
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
 int FUNC_2 (struct archive_write*) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct archive_write*) ;

int
FUNC_5(struct archive *VAR_8)
{
 struct archive_write *VAR_9 = (struct archive_write *)VAR_8;
 struct raw *VAR_10;

 FUNC_0(VAR_8, VAR_4,
     VAR_3, "archive_write_set_format_raw");


 if (VAR_9->format_free != ((void*)0))
  (VAR_9->format_free)(VAR_9);

 VAR_10 = (struct raw *)FUNC_3(1, sizeof(*VAR_10));
 if (VAR_10 == ((void*)0)) {
  FUNC_1(&VAR_9->archive, VAR_5, "Can't allocate raw data");
  return (VAR_0);
 }
 VAR_10->entries_written = 0;
 VAR_9->format_data = VAR_10;
 VAR_9->format_name = "raw";

 VAR_9->format_options = ((void*)0);
 VAR_9->format_write_header = VAR_7;
 VAR_9->format_write_data = VAR_6;
 VAR_9->format_finish_entry = ((void*)0);

 VAR_9->format_close = ((void*)0);
 VAR_9->format_free = FUNC_2;
 VAR_9->archive.archive_format = VAR_1;
 VAR_9->archive.archive_format_name = "RAW";
 return (VAR_2);
}
