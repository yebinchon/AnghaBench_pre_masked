
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int verbose; int diskreader; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_entry*) ;
 scalar_t__ FUNC_1 (struct archive_entry*) ;
 char* FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*,struct archive_entry*) ;
 scalar_t__ FUNC_4 (struct bsdtar*,struct archive*,int ,struct archive_entry*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int ,char*,char*,...) ;
 int FUNC_8 (struct bsdtar*,int ,struct archive_entry*) ;
 int FUNC_9 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_10(struct bsdtar *VAR_4, struct archive *VAR_5,
    struct archive_entry *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_3(VAR_5, VAR_6);
 if (VAR_7 != VAR_1) {
  if (VAR_4->verbose > 1) {
   FUNC_9(VAR_3, "a ");
   FUNC_8(VAR_4, VAR_3, VAR_6);
   FUNC_7(0, ": %s", FUNC_2(VAR_5));
  } else if (VAR_4->verbose > 0) {
   FUNC_7(0, "%s: %s",
       FUNC_0(VAR_6),
       FUNC_2(VAR_5));
  } else
   FUNC_6(VAR_3, ": %s", FUNC_2(VAR_5));
 }

 if (VAR_7 == VAR_0)
  FUNC_5(1);







 if (VAR_7 >= VAR_2 && FUNC_1(VAR_6) > 0) {
  if (FUNC_4(VAR_4, VAR_5, VAR_4->diskreader, VAR_6))
   FUNC_5(1);
 }
}
