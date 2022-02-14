
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int template_header ;
struct v7tar {int dummy; } ;
struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_write {char* format_name; TYPE_1__ archive; int format_finish_entry; int (* format_free ) (struct archive_write*) ;int format_close; int format_write_data; int format_write_header; int format_options; struct v7tar* format_data; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct archive_write*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct archive_write*) ;

int
FUNC_5(struct archive *VAR_12)
{
 struct archive_write *VAR_13 = (struct archive_write *)VAR_12;
 struct v7tar *VAR_14;

 FUNC_0(VAR_12, VAR_5,
     VAR_4, "archive_write_set_format_v7tar");


 if (VAR_13->format_free != ((void*)0))
  (VAR_13->format_free)(VAR_13);


 if (sizeof(template_header) != 512) {
  FUNC_1(&VAR_13->archive, VAR_0,
      "Internal: template_header wrong size: %zu should be 512",
      sizeof(template_header));
  return (VAR_1);
 }

 VAR_14 = (struct v7tar *)FUNC_3(1, sizeof(*VAR_14));
 if (VAR_14 == ((void*)0)) {
  FUNC_1(&VAR_13->archive, VAR_6,
      "Can't allocate v7tar data");
  return (VAR_1);
 }
 VAR_13->format_data = VAR_14;
 VAR_13->format_name = "tar (non-POSIX)";
 VAR_13->format_options = VAR_11;
 VAR_13->format_write_header = VAR_10;
 VAR_13->format_write_data = VAR_8;
 VAR_13->format_close = VAR_7;
 VAR_13->format_free = FUNC_2;
 VAR_13->format_finish_entry = VAR_9;
 VAR_13->archive.archive_format = VAR_2;
 VAR_13->archive.archive_format_name = "tar (non-POSIX)";
 return (VAR_3);
}
