
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zip {int len_buf; int * buf; int crc32func; int deflate_compression_level; int requested_compression; } ;
struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_write {char* format_name; TYPE_1__ archive; int (* format_free ) (struct archive_write*) ;int format_close; int format_finish_entry; int format_write_data; int format_write_header; int format_options; struct zip* format_data; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct archive_write*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct zip*) ;
 int * FUNC_5 (int) ;
 int VAR_13 ;
 int FUNC_6 (struct archive_write*) ;

int
FUNC_7(struct archive *VAR_14)
{
 struct archive_write *VAR_15 = (struct archive_write *)VAR_14;
 struct zip *VAR_16;

 FUNC_0(VAR_14, VAR_4,
     VAR_3, "archive_write_set_format_zip");


 if (VAR_15->format_free != ((void*)0))
  (VAR_15->format_free)(VAR_15);

 VAR_16 = (struct zip *) FUNC_3(1, sizeof(*VAR_16));
 if (VAR_16 == ((void*)0)) {
  FUNC_1(&VAR_15->archive, VAR_6,
      "Can't allocate zip data");
  return (VAR_0);
 }


 VAR_16->requested_compression = VAR_5;



 VAR_16->crc32func = VAR_13;


 VAR_16->len_buf = 65536;
 VAR_16->buf = FUNC_5(VAR_16->len_buf);
 if (VAR_16->buf == ((void*)0)) {
  FUNC_4(VAR_16);
  FUNC_1(&VAR_15->archive, VAR_6,
      "Can't allocate compression buffer");
  return (VAR_0);
 }

 VAR_15->format_data = VAR_16;
 VAR_15->format_name = "zip";
 VAR_15->format_options = VAR_12;
 VAR_15->format_write_header = VAR_11;
 VAR_15->format_write_data = VAR_9;
 VAR_15->format_finish_entry = VAR_10;
 VAR_15->format_close = VAR_8;
 VAR_15->format_free = FUNC_2;
 VAR_15->archive.archive_format = VAR_1;
 VAR_15->archive.archive_format_name = "ZIP";

 return (VAR_2);
}
