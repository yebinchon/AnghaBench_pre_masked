
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso9660 {size_t wbuff_remaining; } ;
struct archive_write {int archive; scalar_t__ format_data; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,int ,char*,int ,int ) ;
 int FUNC_1 (struct archive_write*) ;

__attribute__((used)) static int
FUNC_2(struct archive_write *VAR_4, size_t VAR_5)
{
 struct iso9660 *VAR_6 = (struct iso9660 *)VAR_4->format_data;

 if (VAR_5 > VAR_6->wbuff_remaining ||
     VAR_6->wbuff_remaining == 0) {
  FUNC_0(&VAR_4->archive, VAR_0,
      "Internal Programming error: iso9660:wb_consume()"
      " size=%jd, wbuff_remaining=%jd",
      (intmax_t)VAR_5, (intmax_t)VAR_6->wbuff_remaining);
  return (VAR_1);
 }
 VAR_6->wbuff_remaining -= VAR_5;
 if (VAR_6->wbuff_remaining < VAR_3)
  return (FUNC_1(VAR_4));
 return (VAR_2);
}
