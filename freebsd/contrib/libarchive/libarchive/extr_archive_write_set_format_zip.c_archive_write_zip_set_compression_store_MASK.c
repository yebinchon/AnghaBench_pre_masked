
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zip {int requested_compression; } ;
struct TYPE_2__ {scalar_t__ archive_format; } ;
struct archive_write {TYPE_1__ archive; struct zip* format_data; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct archive*,int ,int,char*) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;

int
FUNC_2(struct archive *VAR_10)
{
 struct archive_write *VAR_11 = (struct archive_write *)VAR_10;
 struct zip *VAR_12 = VAR_11->format_data;
 int VAR_13 = VAR_1;

 FUNC_0(VAR_10, VAR_8,
  VAR_7 | VAR_6 | VAR_5,
  "archive_write_zip_set_compression_deflate");
 if (VAR_11->archive.archive_format != VAR_3) {
  FUNC_1(&VAR_11->archive, VAR_0,
   "Can only use archive_write_zip_set_compression_store"
   " with zip format");
  VAR_13 = VAR_2;
 } else {
  VAR_12->requested_compression = VAR_9;
  VAR_13 = VAR_4;
 }
 return (VAR_13);
}
