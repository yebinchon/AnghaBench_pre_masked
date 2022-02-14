
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_match {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_match*,int,char const*) ;
 int FUNC_1 (struct archive*,int,char*) ;

int
FUNC_2(struct archive *VAR_1, int VAR_2,
    const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, "archive_match_include_file_time");
 if (VAR_4 != VAR_0)
  return (VAR_4);
 return FUNC_0((struct archive_match *)VAR_1,
   VAR_2, VAR_3);
}
