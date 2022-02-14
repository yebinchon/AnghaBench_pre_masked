
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct warc_s {unsigned int omit_warcinfo; unsigned int rng; scalar_t__ now; scalar_t__ typ; } ;
struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_write {char* format_name; TYPE_1__ archive; int format_finish_entry; int (* format_free ) (struct archive_write*) ;int format_close; int format_write_data; int format_write_header; int format_options; struct warc_s* format_data; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct archive_write*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 struct warc_s* FUNC_3 (int) ;
 int FUNC_4 (struct archive_write*) ;
 scalar_t__ FUNC_5 (int *) ;

int
FUNC_6(struct archive *VAR_11)
{
 struct archive_write *VAR_12 = (struct archive_write *)VAR_11;
 struct warc_s *VAR_13;

 FUNC_1(VAR_11, VAR_4,
     VAR_3, "archive_write_set_format_warc");


 if (VAR_12->format_free != ((void*)0)) {
  (VAR_12->format_free)(VAR_12);
 }

 VAR_13 = FUNC_3(sizeof(*VAR_13));
 if (VAR_13 == ((void*)0)) {
  FUNC_2(&VAR_12->archive, VAR_5,
      "Can't allocate warc data");
  return (VAR_0);
 }

 VAR_13->omit_warcinfo = 0U;

 VAR_13->now = FUNC_5(((void*)0));

 VAR_13->typ = 0;

 VAR_13->rng = (unsigned int)VAR_13->now;

 VAR_12->format_data = VAR_13;
 VAR_12->format_name = "WARC/1.0";
 VAR_12->format_options = VAR_10;
 VAR_12->format_write_header = VAR_9;
 VAR_12->format_write_data = VAR_7;
 VAR_12->format_close = VAR_6;
 VAR_12->format_free = FUNC_0;
 VAR_12->format_finish_entry = VAR_8;
 VAR_12->archive.archive_format = VAR_1;
 VAR_12->archive.archive_format_name = "WARC/1.0";
 return (VAR_2);
}
