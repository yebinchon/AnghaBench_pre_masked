
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct archive_match {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_match*,int,int ,long,int ,long) ;
 int FUNC_1 (struct archive*,int,char*) ;

int
FUNC_2(struct archive *VAR_1, int VAR_2, time_t VAR_3,
    long VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, "archive_match_include_time");
 if (VAR_5 != VAR_0)
  return (VAR_5);
 return FUNC_0((struct archive_match *)VAR_1, VAR_2,
   VAR_3, VAR_4, VAR_3, VAR_4);
}
