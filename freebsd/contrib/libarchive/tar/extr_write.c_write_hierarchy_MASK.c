
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int return_value; int first_fs; int verbose; int resolver; int gname; int uname; int gid; struct archive* diskreader; int uid; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (int ,struct archive_entry**,struct archive_entry**) ;
 struct archive_entry* FUNC_3 () ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*,int ) ;
 int FUNC_6 (struct archive_entry*,int ) ;
 int FUNC_7 (struct archive_entry*,int ) ;
 int FUNC_8 (struct archive_entry*,int ) ;
 int FUNC_9 (struct archive_entry*,int ) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*) ;
 int FUNC_13 (struct archive*,int ) ;
 int FUNC_14 (struct archive*,char const*) ;
 int FUNC_15 (struct archive*,int ) ;
 int FUNC_16 (struct archive*,struct archive_entry*) ;
 scalar_t__ FUNC_17 (struct bsdtar*,struct archive_entry*) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,char*,int ) ;
 int FUNC_20 (struct bsdtar*,int ,struct archive_entry*) ;
 int FUNC_21 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_22 (struct bsdtar*,struct archive*,struct archive_entry*) ;

__attribute__((used)) static void
FUNC_23(struct bsdtar *VAR_7, struct archive *VAR_8, const char *VAR_9)
{
 struct archive *VAR_10 = VAR_7->diskreader;
 struct archive_entry *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 int VAR_13;

 VAR_13 = FUNC_14(VAR_10, VAR_9);
 if (VAR_13 != VAR_4) {
  FUNC_19(FUNC_10(VAR_10),
      "%s", FUNC_11(VAR_10));
  VAR_7->return_value = 1;
  return;
 }
 VAR_7->first_fs = -1;

 for (;;) {
  FUNC_1(VAR_11);
  VAR_11 = FUNC_3();
  VAR_13 = FUNC_16(VAR_10, VAR_11);
  if (VAR_13 == VAR_1)
   break;
  else if (VAR_13 != VAR_4) {
   FUNC_19(FUNC_10(VAR_10),
       "%s", FUNC_11(VAR_10));
   if (VAR_13 == VAR_3 || VAR_13 == VAR_2) {
    VAR_7->return_value = 1;
    FUNC_1(VAR_11);
    FUNC_12(VAR_10);
    return;
   } else if (VAR_13 < VAR_5)
    continue;
  }

  if (VAR_7->uid >= 0) {
   FUNC_8(VAR_11, VAR_7->uid);
   if (!VAR_7->uname)
    FUNC_9(VAR_11,
        FUNC_15(VAR_7->diskreader,
     VAR_7->uid));
  }
  if (VAR_7->gid >= 0) {
   FUNC_5(VAR_11, VAR_7->gid);
   if (!VAR_7->gname)
    FUNC_6(VAR_11,
        FUNC_13(VAR_7->diskreader,
     VAR_7->gid));
  }
  if (VAR_7->uname)
   FUNC_9(VAR_11, VAR_7->uname);
  if (VAR_7->gname)
   FUNC_6(VAR_11, VAR_7->gname);





  if (FUNC_17(VAR_7, VAR_11))
   continue;


  if (VAR_7->verbose > 1) {
   FUNC_21(VAR_6, "a ");
   FUNC_20(VAR_7, VAR_6, VAR_11);
  } else if (VAR_7->verbose > 0) {

   FUNC_21(VAR_6, "a %s",
       FUNC_4(VAR_11));
  }


  if (FUNC_0(VAR_11) != VAR_0)
   FUNC_7(VAR_11, 0);

  FUNC_2(VAR_7->resolver, &VAR_11, &VAR_12);

  while (VAR_11 != ((void*)0)) {
   FUNC_22(VAR_7, VAR_8, VAR_11);
   FUNC_1(VAR_11);
   VAR_11 = VAR_12;
   VAR_12 = ((void*)0);
  }

  if (VAR_7->verbose)
   FUNC_18(VAR_6, "\n");
 }
 FUNC_1(VAR_11);
 FUNC_12(VAR_10);
}
