
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_flags; char* f_mntfromname; char* f_mntonname; char* f_fstypename; } ;
struct fstab {int fs_freq; int fs_passno; } ;


 int VAR_0 ;
 char* FUNC_0 (char*,char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 struct fstab* FUNC_3 (char*) ;
 struct fstab* FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,scalar_t__,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;

void
FUNC_11(struct statfs *VAR_1)
{
 struct fstab *VAR_2;
 char *VAR_3, *VAR_4;
 int VAR_5;

 VAR_3 = ((void*)0);

 if ((VAR_1->f_flags & VAR_0) != 0)
  VAR_4 = ((void*)0);
 else
  VAR_4 = FUNC_0(((void*)0), "rw");

 VAR_3 = FUNC_1(VAR_1->f_flags);
 VAR_3 = FUNC_0(VAR_4, VAR_3);

 if (FUNC_9(VAR_1->f_mntfromname, "<below>", 7) == 0 ||
     FUNC_9(VAR_1->f_mntfromname, "<above>", 7) == 0) {
  FUNC_7(VAR_1->f_mntfromname,
      (FUNC_10(VAR_1->f_mntfromname, ":", 8) +1),
      sizeof(VAR_1->f_mntfromname));
 }

 VAR_5 = FUNC_8(VAR_1->f_mntfromname);
 FUNC_5("%s%s%s%s", VAR_1->f_mntfromname,
     VAR_5 < 8 ? "\t" : "",
     VAR_5 < 16 ? "\t" : "",
     VAR_5 < 24 ? "\t" : " ");
 VAR_5 = FUNC_8(VAR_1->f_mntonname);
 FUNC_5("%s%s%s%s", VAR_1->f_mntonname,
     VAR_5 < 8 ? "\t" : "",
     VAR_5 < 16 ? "\t" : "",
     VAR_5 < 24 ? "\t" : " ");
 FUNC_5("%s\t", VAR_1->f_fstypename);
 VAR_5 = FUNC_8(VAR_3);
 FUNC_5("%s%s", VAR_3,
     VAR_5 < 8 ? "\t" : " ");
 FUNC_2(VAR_3);

 if ((VAR_2 = FUNC_4(VAR_1->f_mntfromname)))
  FUNC_5("\t%u %u\n", VAR_2->fs_freq, VAR_2->fs_passno);
 else if ((VAR_2 = FUNC_3(VAR_1->f_mntonname)))
  FUNC_5("\t%u %u\n", VAR_2->fs_freq, VAR_2->fs_passno);
 else if (FUNC_6(VAR_1->f_fstypename, "ufs") == 0) {
  if (FUNC_6(VAR_1->f_mntonname, "/") == 0)
   FUNC_5("\t1 1\n");
  else
   FUNC_5("\t2 2\n");
 } else
  FUNC_5("\t0 0\n");
}
