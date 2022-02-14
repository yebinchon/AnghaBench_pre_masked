
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uargs ;
struct ufs_args {int fspec; } ;
struct statvfs {int f_flag; } ;
typedef int buf ;
typedef int atf_tc_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int ,int,struct ufs_args*,int) ;
 int FUNC_14 (char*,int,int) ;
 scalar_t__ FUNC_15 (int ,struct statvfs*,int ) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 (int,char*,int ) ;
 int FUNC_18 (char*,int,char*,...) ;
 int FUNC_19 (char*,char*,int) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;

__attribute__((used)) static void
FUNC_22(const atf_tc_t *VAR_10, int VAR_11, const char *VAR_12, int VAR_13)
{
 int VAR_14;
 char VAR_15[1024];
 int VAR_16;
 int VAR_17;
 struct ufs_args VAR_18;
 struct statvfs VAR_19;

 FUNC_18(VAR_15, sizeof(VAR_15), "newfs -q user -q group -F -s 4000 -n %d "
     "%s %s", (VAR_11 + 3), VAR_12, VAR_0);
        if (FUNC_21(VAR_15) == -1)
                FUNC_5("cannot create file system");

 FUNC_6();
 if (FUNC_12(VAR_1, 0777) == -1)
  FUNC_5("mount point create");

 FUNC_7("/diskdev", VAR_0, VAR_8);

 VAR_18.fspec = FUNC_3("/diskdev");


 if (FUNC_13(VAR_5, VAR_1, VAR_3,
     &VAR_18, sizeof(VAR_18)) == -1)
  FUNC_5("mount ffs ro %s", VAR_1);

 if (FUNC_15(VAR_1, &VAR_19, 0) != 0)
  FUNC_5("statbfs %s (1)", VAR_1);

 if ((VAR_19.f_flag & VAR_9) != 0)
  FUNC_4("R/O filesystem has quota");


 if (FUNC_13(VAR_5, VAR_1,
     VAR_4 | (VAR_13 ? VAR_2 : 0), &VAR_18, sizeof(VAR_18)) == -1)
  FUNC_5("mount ffs rw %s", VAR_1);

 if (FUNC_15(VAR_1, &VAR_19, 0) != 0)
  FUNC_5("statbfs %s (2)", VAR_1);

 if ((VAR_19.f_flag & VAR_9) == 0)
  FUNC_4("R/W filesystem has no quota");


 if (FUNC_13(VAR_5, VAR_1,
     VAR_4 | (VAR_13 ? VAR_2 : 0), &VAR_18, sizeof(VAR_18)) == -1)
  FUNC_5("mount ffs rw(2) %s", VAR_1);

 if (FUNC_15(VAR_1, &VAR_19, 0) != 0)
  FUNC_5("statbfs %s (3)", VAR_1);

 if ((VAR_19.f_flag & VAR_9) == 0)
  FUNC_4("R/W filesystem has no quota");


 FUNC_0();
 FUNC_2(FUNC_9(".", 0, 0));
 for (VAR_14 = 0 ; VAR_14 < VAR_11; VAR_14++) {
  FUNC_19(VAR_15, "file%d", VAR_14);
  FUNC_2(VAR_17 = FUNC_14(VAR_15, VAR_6 | VAR_7, 0755));
  FUNC_19(VAR_15, "test file no %d", VAR_14);
  FUNC_2(FUNC_17(VAR_17, VAR_15, FUNC_20(VAR_15)));
  FUNC_2(FUNC_11(VAR_17, VAR_14, VAR_14+80000));
  FUNC_10(VAR_17);
 }
 FUNC_1();
 if (FUNC_16(VAR_1, 0) != 0) {
  FUNC_8(VAR_1, 1);
  FUNC_5("unmount failed");
 }
 FUNC_18(VAR_15, 1024, "fsck_ffs -fn -F %s", VAR_0);
 VAR_16 = FUNC_21(VAR_15);
 if (VAR_16 != 0)
  FUNC_4("fsck returned %d", VAR_16);
}
