
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw {scalar_t__ entries_written; } ;
struct archive_write {int archive; scalar_t__ format_data; } ;
struct archive_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct archive_write *VAR_4, struct archive_entry *VAR_5)
{
 struct raw *VAR_6 = (struct raw *)VAR_4->format_data;

 if (FUNC_0(VAR_5) != VAR_0) {
  FUNC_1(&VAR_4->archive, VAR_3,
      "Raw format only supports filetype AE_IFREG");
  return (VAR_1);
 }


 if (VAR_6->entries_written > 0) {
  FUNC_1(&VAR_4->archive, VAR_3,
      "Raw format only supports one entry per archive");
  return (VAR_1);
 }
 VAR_6->entries_written++;

 return (VAR_2);
}
