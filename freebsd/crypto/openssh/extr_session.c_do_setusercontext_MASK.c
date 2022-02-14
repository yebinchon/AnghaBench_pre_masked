
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uidstr ;
typedef int u_int ;
struct passwd {scalar_t__ pw_uid; int pw_name; int pw_dir; int pw_gid; } ;
struct TYPE_2__ {char* chroot_directory; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 char* FUNC_8 (char*,char*,int ,char*,int ,char*,char*,char*) ;
 int FUNC_9 (struct passwd*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (struct passwd*) ;
 int FUNC_13 (struct passwd*) ;
 int FUNC_14 (char*,scalar_t__) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ,struct passwd*,scalar_t__,int) ;
 int FUNC_19 (char*,int,char*,unsigned long long) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 int FUNC_21 (int ) ;
 char* FUNC_22 (char*,scalar_t__) ;

void
FUNC_23(struct passwd *VAR_9)
{
 char VAR_10[32], *VAR_11, *VAR_12;

 FUNC_12(VAR_9);

 if (FUNC_11()) {







  if (FUNC_17(VAR_9->pw_name) < 0)
   FUNC_1("setlogin failed: %s", FUNC_21(VAR_5));
  if (FUNC_16(VAR_9->pw_gid) < 0) {
   FUNC_10("setgid");
   FUNC_2(1);
  }

  if (FUNC_7(VAR_9->pw_name, VAR_9->pw_gid) < 0) {
   FUNC_10("initgroups");
   FUNC_2(1);
  }
  FUNC_0();


  FUNC_13(VAR_9);

  if (!VAR_6 && VAR_8.chroot_directory != ((void*)0) &&
      FUNC_20(VAR_8.chroot_directory, "none") != 0) {
                        VAR_12 = FUNC_22(VAR_8.chroot_directory,
       VAR_9->pw_uid);
   FUNC_19(VAR_10, sizeof(VAR_10), "%llu",
       (unsigned long long)VAR_9->pw_uid);
   VAR_11 = FUNC_8(VAR_12, "h", VAR_9->pw_dir,
       "u", VAR_9->pw_name, "U", VAR_10, (char *)((void*)0));
   FUNC_14(VAR_11, VAR_9->pw_uid);
   FUNC_4(VAR_12);
   FUNC_4(VAR_11);

   FUNC_4(VAR_8.chroot_directory);
   VAR_8.chroot_directory = ((void*)0);
   VAR_6 = 1;
  }
  FUNC_9(VAR_9);

 } else if (VAR_8.chroot_directory != ((void*)0) &&
     FUNC_20(VAR_8.chroot_directory, "none") != 0) {
  FUNC_3("server lacks privileges to chroot to ChrootDirectory");
 }

 if (FUNC_6() != VAR_9->pw_uid || FUNC_5() != VAR_9->pw_uid)
  FUNC_3("Failed to set uids to %u.", (u_int) VAR_9->pw_uid);
}
