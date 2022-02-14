
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pax {int flags; } ;
struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_write {char* format_name; TYPE_1__ archive; int format_finish_entry; int (* format_free ) (struct archive_write*) ;int format_close; int format_write_data; int format_write_header; int format_options; struct pax* format_data; } ;
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
 int FUNC_4 (struct archive_write*) ;

int
FUNC_5(struct archive *VAR_13)
{
 struct archive_write *VAR_14 = (struct archive_write *)VAR_13;
 struct pax *VAR_15;

 FUNC_0(VAR_13, VAR_4,
     VAR_3, "archive_write_set_format_pax");

 if (VAR_14->format_free != ((void*)0))
  (VAR_14->format_free)(VAR_14);

 VAR_15 = (struct pax *)FUNC_3(1, sizeof(*VAR_15));
 if (VAR_15 == ((void*)0)) {
  FUNC_1(&VAR_14->archive, VAR_5,
      "Can't allocate pax data");
  return (VAR_0);
 }
 VAR_15->flags = VAR_6 | VAR_7;

 VAR_14->format_data = VAR_15;
 VAR_14->format_name = "pax";
 VAR_14->format_options = VAR_12;
 VAR_14->format_write_header = VAR_11;
 VAR_14->format_write_data = VAR_9;
 VAR_14->format_close = VAR_8;
 VAR_14->format_free = FUNC_2;
 VAR_14->format_finish_entry = VAR_10;
 VAR_14->archive.archive_format = VAR_1;
 VAR_14->archive.archive_format_name = "POSIX pax interchange";
 return (VAR_2);
}
