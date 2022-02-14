
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct warc_s {scalar_t__ typ; size_t populz; } ;
struct archive_write {struct warc_s* format_data; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_write*,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(struct archive_write *VAR_2, const void *VAR_3, size_t VAR_4)
{
 struct warc_s *VAR_5 = VAR_2->format_data;

 if (VAR_5->typ == VAR_0) {
  int VAR_6;


  if (VAR_4 > VAR_5->populz) {
   VAR_4 = (size_t)VAR_5->populz;
  }


  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
  if (VAR_6 != VAR_1) {
   return VAR_6;
  }
 }
 return VAR_4;
}
