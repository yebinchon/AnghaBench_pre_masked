
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct archive_write {int archive; scalar_t__ format_data; } ;
struct ar_w {scalar_t__ entry_bytes_remaining; int entry_padding; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_write*,char*,int) ;
 int FUNC_1 (int *,int ,char*,...) ;

__attribute__((used)) static int
FUNC_2(struct archive_write *VAR_3)
{
 struct ar_w *VAR_4;
 int VAR_5;

 VAR_4 = (struct ar_w *)VAR_3->format_data;

 if (VAR_4->entry_bytes_remaining != 0) {
  FUNC_1(&VAR_3->archive, VAR_0,
      "Entry remaining bytes larger than 0");
  return (VAR_2);
 }

 if (VAR_4->entry_padding == 0) {
  return (VAR_1);
 }

 if (VAR_4->entry_padding != 1) {
  FUNC_1(&VAR_3->archive, VAR_0,
      "Padding wrong size: %ju should be 1 or 0",
      (uintmax_t)VAR_4->entry_padding);
  return (VAR_2);
 }

 VAR_5 = FUNC_0(VAR_3, "\n", 1);
 return (VAR_5);
}
