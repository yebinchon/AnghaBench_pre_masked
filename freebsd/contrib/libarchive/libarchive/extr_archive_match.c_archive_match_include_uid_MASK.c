
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_match {int inclusion_uids; } ;
struct archive {int dummy; } ;
typedef int la_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_match*,int *,int ) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;

int
FUNC_2(struct archive *VAR_2, la_int64_t VAR_3)
{
 struct archive_match *VAR_4;

 FUNC_1(VAR_2, VAR_0,
     VAR_1, "archive_match_include_uid");
 VAR_4 = (struct archive_match *)VAR_2;
 return (FUNC_0(VAR_4, &(VAR_4->inclusion_uids), VAR_3));
}
