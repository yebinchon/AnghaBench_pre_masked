
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_match {int exclusions; int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_match*,int *,int const*) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int FUNC_2 (int *,int ,char*) ;

int
FUNC_3(struct archive *VAR_5, const wchar_t *VAR_6)
{
 struct archive_match *VAR_7;
 int VAR_8;

 FUNC_1(VAR_5, VAR_1,
     VAR_3, "archive_match_exclude_pattern_w");
 VAR_7 = (struct archive_match *)VAR_5;

 if (VAR_6 == ((void*)0) || *VAR_6 == L'\0') {
  FUNC_2(&(VAR_7->archive), VAR_4, "pattern is empty");
  return (VAR_0);
 }
 if ((VAR_8 = FUNC_0(VAR_7, &(VAR_7->exclusions), VAR_6)) != VAR_2)
  return (VAR_8);
 return (VAR_2);
}
