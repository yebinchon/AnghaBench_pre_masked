
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_match {int inclusion_unames; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_match*,int *,int,char const*) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;

int
FUNC_2(struct archive *VAR_2, const char *VAR_3)
{
 struct archive_match *VAR_4;

 FUNC_1(VAR_2, VAR_0,
     VAR_1, "archive_match_include_uname");
 VAR_4 = (struct archive_match *)VAR_2;
 return (FUNC_0(VAR_4, &(VAR_4->inclusion_unames), 1, VAR_3));
}
