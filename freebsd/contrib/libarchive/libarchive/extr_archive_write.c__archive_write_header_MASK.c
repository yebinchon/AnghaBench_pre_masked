
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state; } ;
struct archive_write {int (* format_write_header ) (struct archive_write*,struct archive_entry*) ;scalar_t__ skip_file_ino; TYPE_1__ archive; scalar_t__ skip_file_dev; scalar_t__ skip_file_set; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ,int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct archive_entry*) ;
 scalar_t__ FUNC_3 (struct archive_entry*) ;
 scalar_t__ FUNC_4 (struct archive_entry*) ;
 scalar_t__ FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (TYPE_1__*,int,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct archive_write*,struct archive_entry*) ;

__attribute__((used)) static int
FUNC_9(struct archive *VAR_8, struct archive_entry *VAR_9)
{
 struct archive_write *VAR_10 = (struct archive_write *)VAR_8;
 int VAR_11, VAR_12;

 FUNC_0(&VAR_10->archive, VAR_7,
     VAR_3 | VAR_5, "archive_write_header");
 FUNC_1(&VAR_10->archive);

 if (VAR_10->format_write_header == ((void*)0)) {
  FUNC_6(&(VAR_10->archive), -1,
      "Format must be set before you can write to an archive.");
  VAR_10->archive.state = VAR_4;
  return (VAR_1);
 }


 VAR_11 = FUNC_7(&VAR_10->archive);
 if (VAR_11 == VAR_1) {
  VAR_10->archive.state = VAR_4;
  return (VAR_1);
 }
 if (VAR_11 < VAR_2 && VAR_11 != VAR_6)
  return (VAR_11);

 if (VAR_10->skip_file_set &&
     FUNC_3(VAR_9) &&
     FUNC_5(VAR_9) &&
     FUNC_2(VAR_9) == (dev_t)VAR_10->skip_file_dev &&
     FUNC_4(VAR_9) == VAR_10->skip_file_ino) {
  FUNC_6(&VAR_10->archive, 0,
      "Can't add archive to itself");
  return (VAR_0);
 }


 VAR_12 = ((VAR_10->format_write_header)(VAR_10, VAR_9));
 if (VAR_12 == VAR_0) {
  return (VAR_0);
 }
 if (VAR_12 == VAR_1) {
  VAR_10->archive.state = VAR_4;
  return (VAR_1);
 }
 if (VAR_12 < VAR_11)
  VAR_11 = VAR_12;

 VAR_10->archive.state = VAR_3;
 return (VAR_11);
}
