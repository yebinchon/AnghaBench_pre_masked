
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uargs ;
struct ufs_args {int fspec; } ;
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
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (char*,int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int ,int ,struct ufs_args*,int) ;
 int FUNC_15 (char*,int,int) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 (int,char*,int ) ;
 int FUNC_18 (char*,int,char*,...) ;
 int FUNC_19 (char*,char*,int) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;

__attribute__((used)) static void
FUNC_22(const atf_tc_t *VAR_7, int VAR_8, const char *VAR_9, int VAR_10)
{
 int VAR_11;
 char VAR_12[1024];
 int VAR_13;
 int VAR_14;
 struct ufs_args VAR_15;

 FUNC_18(VAR_12, sizeof(VAR_12), "newfs -q user -q group -F -s 4000 -n %d "
     "%s %s", (VAR_8 + 3), VAR_9, VAR_0);
        if (FUNC_21(VAR_12) == -1)
                FUNC_6("cannot create file system");

 FUNC_7();
 if (FUNC_13(VAR_1, 0777) == -1)
  FUNC_6("mount point create");

 FUNC_8("/diskdev", VAR_0, VAR_6);

 VAR_15.fspec = FUNC_3("/diskdev");
 if (FUNC_14(VAR_3, VAR_1, (VAR_10) ? VAR_2 : 0,
     &VAR_15, sizeof(VAR_15)) == -1)
  FUNC_6("mount ffs %s", VAR_1);

 FUNC_4();
 FUNC_0();
 FUNC_2(FUNC_10(".", 0, 0));
 for (VAR_11 = 0 ; VAR_11 < VAR_8; VAR_11++) {
  FUNC_19(VAR_12, "file%d", VAR_11);
  FUNC_2(VAR_14 = FUNC_15(VAR_12, VAR_4 | VAR_5, 0755));
  FUNC_19(VAR_12, "test file no %d", VAR_11);
  FUNC_2(FUNC_17(VAR_14, VAR_12, FUNC_20(VAR_12)));
  FUNC_2(FUNC_12(VAR_14, VAR_11, VAR_11+80000));
  FUNC_11(VAR_14);
 }
 FUNC_1();
 if (FUNC_16(VAR_1, 0) != 0) {
  FUNC_9(VAR_1, 1);
  FUNC_6("unmount failed");
 }
 FUNC_18(VAR_12, 1024, "fsck_ffs -fn -F %s", VAR_0);
 VAR_13 = FUNC_21(VAR_12);
 if (VAR_13 != 0)
  FUNC_5("fsck returned %d", VAR_13);
}
