
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_match {int exclusions; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_match*,int *,int ,int const*,int) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;

int
FUNC_2(struct archive *VAR_2,
    const wchar_t *VAR_3, int VAR_4)
{
 struct archive_match *VAR_5;

 FUNC_1(VAR_2, VAR_0,
     VAR_1, "archive_match_exclude_pattern_from_file_w");
 VAR_5 = (struct archive_match *)VAR_2;

 return FUNC_0(VAR_5, &(VAR_5->exclusions), 0, VAR_3,
  VAR_4);
}
