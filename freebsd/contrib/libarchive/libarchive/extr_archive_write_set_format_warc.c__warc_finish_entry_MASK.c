
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct warc_s {scalar_t__ typ; } ;
struct archive_write {struct warc_s* format_data; } ;
typedef int _eor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_write*,char const*,int) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_2)
{
 static const char VAR_3[] = "\r\n\r\n";
 struct warc_s *VAR_4 = VAR_2->format_data;

 if (VAR_4->typ == VAR_0) {
  int VAR_5 = FUNC_0(VAR_2, VAR_3, sizeof(VAR_3) - 1U);

  if (VAR_5 != VAR_1) {
   return VAR_5;
  }
 }

 VAR_4->typ = 0;
 return (VAR_1);
}
