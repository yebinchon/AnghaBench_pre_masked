
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gnutar {int dummy; } ;
struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_write {char* format_name; TYPE_1__ archive; int format_finish_entry; int format_free; int format_close; int format_write_data; int format_write_header; int format_options; struct gnutar* format_data; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int,int) ;

int
FUNC_2(struct archive *VAR_10)
{
 struct archive_write *VAR_11 = (struct archive_write *)VAR_10;
 struct gnutar *VAR_12;

 VAR_12 = (struct gnutar *)FUNC_1(1, sizeof(*VAR_12));
 if (VAR_12 == ((void*)0)) {
  FUNC_0(&VAR_11->archive, VAR_3,
      "Can't allocate gnutar data");
  return (VAR_0);
 }
 VAR_11->format_data = VAR_12;
 VAR_11->format_name = "gnutar";
 VAR_11->format_options = VAR_9;
 VAR_11->format_write_header = VAR_8;
 VAR_11->format_write_data = VAR_5;
 VAR_11->format_close = VAR_4;
 VAR_11->format_free = VAR_7;
 VAR_11->format_finish_entry = VAR_6;
 VAR_11->archive.archive_format = VAR_1;
 VAR_11->archive.archive_format_name = "GNU tar";
 return (VAR_2);
}
