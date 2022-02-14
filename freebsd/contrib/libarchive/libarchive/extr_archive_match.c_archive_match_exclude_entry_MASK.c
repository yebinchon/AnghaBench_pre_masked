
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_match {int archive; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_match*,int,struct archive_entry*) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (struct archive*,int,char*) ;

int
FUNC_4(struct archive *VAR_5, int VAR_6,
    struct archive_entry *VAR_7)
{
 struct archive_match *VAR_8;
 int VAR_9;

 FUNC_1(VAR_5, VAR_1,
     VAR_3, "archive_match_time_include_entry");
 VAR_8 = (struct archive_match *)VAR_5;

 if (VAR_7 == ((void*)0)) {
  FUNC_2(&(VAR_8->archive), VAR_4, "entry is NULL");
  return (VAR_0);
 }
 VAR_9 = FUNC_3(VAR_5, VAR_6, "archive_match_exclude_entry");
 if (VAR_9 != VAR_2)
  return (VAR_9);
 return (FUNC_0(VAR_8, VAR_6, VAR_7));
}
