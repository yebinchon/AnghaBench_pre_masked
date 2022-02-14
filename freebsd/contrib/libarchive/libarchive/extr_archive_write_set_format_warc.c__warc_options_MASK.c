
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct warc_s {unsigned int omit_warcinfo; } ;
struct archive_write {struct warc_s* format_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_2, const char *VAR_3, const char *VAR_4)
{
 struct warc_s *VAR_5 = VAR_2->format_data;

 if (FUNC_0(VAR_3, "omit-warcinfo") == 0) {
  if (VAR_4 == ((void*)0) || FUNC_0(VAR_4, "true") == 0) {

   VAR_5->omit_warcinfo = 1U;
   return (VAR_0);
  }
 }




 return (VAR_1);
}
