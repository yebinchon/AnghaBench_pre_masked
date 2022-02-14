
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {scalar_t__ format_data; } ;
struct ar_w {int wrote_global_header; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_write*,char*,int) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_1)
{
 struct ar_w *VAR_2;
 int VAR_3;





 VAR_2 = (struct ar_w *)VAR_1->format_data;
 if (!VAR_2->wrote_global_header) {
  VAR_2->wrote_global_header = 1;
  VAR_3 = FUNC_0(VAR_1, "!<arch>\n", 8);
  return (VAR_3);
 }

 return (VAR_0);
}
