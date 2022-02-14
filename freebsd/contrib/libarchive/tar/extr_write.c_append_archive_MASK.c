
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int flags; int verbose; int matching; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_entry*) ;
 scalar_t__ FUNC_1 (struct archive_entry*) ;
 char* FUNC_2 (struct archive*) ;
 scalar_t__ FUNC_3 (int ,struct archive_entry*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*,struct archive_entry**) ;
 int FUNC_6 (struct archive*,struct archive_entry*) ;
 scalar_t__ FUNC_7 (struct bsdtar*,struct archive*,struct archive*,struct archive_entry*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ,char*,int ,char*) ;
 int FUNC_11 (struct bsdtar*,int ,struct archive_entry*) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (struct bsdtar*,struct archive*,struct archive_entry*,int ) ;
 int FUNC_14 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_15 (char*,int ) ;

__attribute__((used)) static int
FUNC_16(struct bsdtar *VAR_6, struct archive *VAR_7, struct archive *VAR_8)
{
 struct archive_entry *VAR_9;
 int VAR_10;

 while (VAR_2 == (VAR_10 = FUNC_5(VAR_8, &VAR_9))) {
  if (FUNC_3(VAR_6->matching, VAR_9))
   continue;
  if ((VAR_6->flags & VAR_4) &&
      !FUNC_15("copy '%s'", FUNC_0(VAR_9)))
   continue;
  if (VAR_6->verbose > 1) {
   FUNC_14(VAR_5, "a ");
   FUNC_11(VAR_6, VAR_5, VAR_9);
  } else if (VAR_6->verbose > 0)
   FUNC_14(VAR_5, "a %s",
       FUNC_0(VAR_9));
  if (FUNC_12())
   FUNC_13(VAR_6, VAR_7, VAR_9, 0);

  VAR_10 = FUNC_6(VAR_7, VAR_9);
  if (VAR_10 != VAR_2) {
   if (!VAR_6->verbose)
    FUNC_10(0, "%s: %s",
        FUNC_0(VAR_9),
        FUNC_2(VAR_7));
   else
    FUNC_9(VAR_5, ": %s", FUNC_2(VAR_7));
  }
  if (VAR_10 == VAR_1)
   FUNC_8(1);

  if (VAR_10 >= VAR_3) {
   if (FUNC_1(VAR_9) == 0)
    FUNC_4(VAR_8);
   else if (FUNC_7(VAR_6, VAR_7, VAR_8, VAR_9))
    FUNC_8(1);
  }

  if (VAR_6->verbose)
   FUNC_9(VAR_5, "\n");
 }

 return (VAR_10 == VAR_0 ? VAR_2 : VAR_10);
}
