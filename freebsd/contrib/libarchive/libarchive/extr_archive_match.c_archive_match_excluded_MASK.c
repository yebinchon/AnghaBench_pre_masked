
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_match {int setflag; int archive; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (struct archive_match*,struct archive_entry*) ;
 int FUNC_5 (struct archive_match*,int,int ) ;
 int FUNC_6 (struct archive_match*,struct archive_entry*) ;

int
FUNC_7(struct archive *VAR_7, struct archive_entry *VAR_8)
{
 struct archive_match *VAR_9;
 int VAR_10;

 FUNC_0(VAR_7, VAR_1,
     VAR_2, "archive_match_excluded_ae");

 VAR_9 = (struct archive_match *)VAR_7;
 if (VAR_8 == ((void*)0)) {
  FUNC_3(&(VAR_9->archive), VAR_3, "entry is NULL");
  return (VAR_0);
 }

 VAR_10 = 0;
 if (VAR_9->setflag & VAR_5) {



  VAR_10 = FUNC_5(VAR_9, 1, FUNC_1(VAR_8));

  if (VAR_10 != 0)
   return (VAR_10);
 }

 if (VAR_9->setflag & VAR_6) {
  VAR_10 = FUNC_6(VAR_9, VAR_8);
  if (VAR_10 != 0)
   return (VAR_10);
 }

 if (VAR_9->setflag & VAR_4)
  VAR_10 = FUNC_4(VAR_9, VAR_8);
 return (VAR_10);
}
