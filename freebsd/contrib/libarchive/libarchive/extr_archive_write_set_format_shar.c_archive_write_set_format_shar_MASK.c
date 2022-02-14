
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shar {int quoted_name; int work; } ;
struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_write {char* format_name; TYPE_1__ archive; int format_finish_entry; int format_write_data; int (* format_free ) (struct archive_write*) ;int format_close; int format_write_header; struct shar* format_data; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct archive_write*) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (struct archive_write*) ;

int
FUNC_6(struct archive *VAR_10)
{
 struct archive_write *VAR_11 = (struct archive_write *)VAR_10;
 struct shar *VAR_12;

 FUNC_0(VAR_10, VAR_4,
     VAR_3, "archive_write_set_format_shar");


 if (VAR_11->format_free != ((void*)0))
  (VAR_11->format_free)(VAR_11);

 VAR_12 = (struct shar *)FUNC_4(1, sizeof(*VAR_12));
 if (VAR_12 == ((void*)0)) {
  FUNC_1(&VAR_11->archive, VAR_5, "Can't allocate shar data");
  return (VAR_0);
 }
 FUNC_2(&VAR_12->work);
 FUNC_2(&VAR_12->quoted_name);
 VAR_11->format_data = VAR_12;
 VAR_11->format_name = "shar";
 VAR_11->format_write_header = VAR_9;
 VAR_11->format_close = VAR_6;
 VAR_11->format_free = FUNC_3;
 VAR_11->format_write_data = VAR_7;
 VAR_11->format_finish_entry = VAR_8;
 VAR_11->archive.archive_format = VAR_1;
 VAR_11->archive.archive_format_name = "shar";
 return (VAR_2);
}
