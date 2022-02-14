
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef long uintmax_t ;
typedef double ufs2_daddr_t ;
struct statfs {char* f_mntfromname; int f_flags; char* f_mntonname; } ;
struct stat {int st_mode; } ;
struct iovec {int dummy; } ;
struct group {int gr_gid; } ;
struct dups {scalar_t__ dup; struct dups* next; } ;
typedef long intmax_t ;
typedef int errmsg ;
struct TYPE_13__ {int * il_stat; } ;
struct TYPE_12__ {scalar_t__ b_dirty; } ;
struct TYPE_10__ {int cs_nffree; int cs_nbfree; long cs_nifree; long cs_ndir; } ;
struct TYPE_11__ {int fs_flags; int fs_clean; int fs_frag; double fs_dsize; int fs_metackhash; scalar_t__ fs_magic; char* fs_fsmnt; int fs_ncg; void* fs_time; TYPE_1__ fs_cstotal; int fs_fsize; int fs_cssize; void* fs_mtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*) ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (int ) ;
 long VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int,char*,int ,int ) ;
 int FUNC_4 (struct iovec**,int*,char*,char*,int) ;
 char* VAR_32 ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 scalar_t__ FUNC_8 (struct statfs*) ;
 scalar_t__ FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (char*,int,int ) ;
 scalar_t__ VAR_33 ;
 int FUNC_11 (int) ;
 int VAR_34 ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ) ;
 long VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 struct dups* VAR_38 ;
 scalar_t__ VAR_39 ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (int,TYPE_3__*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (TYPE_2__*,int) ;
 int FUNC_19 () ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_20 () ;
 int VAR_42 ;
 struct group* FUNC_21 (char*) ;
 struct statfs* FUNC_22 (char*) ;
 scalar_t__ FUNC_23 () ;
 int FUNC_24 (char*) ;
 scalar_t__ FUNC_25 (int ,int ) ;
 int FUNC_26 () ;
 TYPE_4__* VAR_43 ;
 double VAR_44 ;
 long VAR_45 ;
 scalar_t__ FUNC_27 (char*,int) ;
 struct dups* VAR_46 ;
 long VAR_47 ;
 long VAR_48 ;
 scalar_t__ FUNC_28 (struct iovec*,int,int) ;
 int FUNC_29 (char*,int ) ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 () ;
 int FUNC_34 () ;
 int FUNC_35 () ;
 int FUNC_36 (char*,...) ;
 scalar_t__ VAR_49 ;
 int FUNC_37 (char*,...) ;
 int FUNC_38 (char*,...) ;
 scalar_t__ FUNC_39 (int ) ;
 scalar_t__ FUNC_40 (char*) ;
 scalar_t__ VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_41 () ;
 TYPE_3__ VAR_53 ;
 TYPE_2__ VAR_54 ;
 int FUNC_42 () ;
 int FUNC_43 (char*) ;
 scalar_t__ VAR_55 ;
 char* VAR_56 ;
 int FUNC_44 (char*,int,char*,char*) ;
 int VAR_57 ;
 scalar_t__ FUNC_45 (char*,struct stat*) ;
 char* FUNC_46 (scalar_t__) ;
 scalar_t__ FUNC_47 (char*) ;
 int FUNC_48 () ;
 scalar_t__ FUNC_49 (char*,int ,size_t*) ;
 void* FUNC_50 (int *) ;
 scalar_t__ FUNC_51 (char*) ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;

__attribute__((used)) static int
FUNC_52(char *VAR_61)
{
 ufs2_daddr_t VAR_62, VAR_63;
 struct dups *VAR_64;
 struct statfs *VAR_65;
 struct stat VAR_66;
 struct group *VAR_67;
 struct iovec *VAR_68;
 char VAR_69[255];
 int VAR_70;
 int VAR_71;
 int VAR_72;
 intmax_t VAR_73, VAR_74;
 size_t VAR_75;

 VAR_68 = ((void*)0);
 VAR_71 = 0;
 VAR_69[0] = '\0';
 FUNC_20();
 FUNC_19();

 VAR_32 = VAR_61;
 if (VAR_37 && VAR_33)
  FUNC_38("starting\n");





 VAR_65 = FUNC_22(VAR_61);
 if (VAR_65 != ((void*)0))
  VAR_61 = VAR_65->f_mntfromname;
 else
  VAR_61 = FUNC_2(VAR_61);






 FUNC_42();
 if (VAR_30) {
  if ((VAR_41 = FUNC_29(VAR_61, VAR_21)) < 0 || FUNC_39(0) == 0)
   FUNC_14(3);
  FUNC_13(VAR_41);

  if (VAR_54.fs_flags & (VAR_13 | VAR_14))
   FUNC_14(4);
  if ((VAR_54.fs_flags & VAR_10) == 0)
   FUNC_14(5);
  VAR_75 = VAR_17;
  if (FUNC_49("vfs.ffs.adjrefcnt", VAR_29, &VAR_75) < 0)
   FUNC_14(6);
  if ((VAR_65 == ((void*)0) && VAR_54.fs_clean == 1) ||
      (VAR_65 != ((void*)0) && (VAR_54.fs_flags & VAR_16) == 0))
   FUNC_14(7);
  FUNC_14(0);
 }
 if (VAR_33 && VAR_55) {



  if ((VAR_41 = FUNC_29(VAR_61, VAR_21)) < 0 || FUNC_39(0) == 0)
   FUNC_14(3);
  FUNC_13(VAR_41);
  if ((VAR_54.fs_flags & VAR_11) != 0) {


   if (VAR_54.fs_clean == 1) {
    FUNC_38("FILE SYSTEM CLEAN; SKIPPING CHECKS\n");
    FUNC_14(0);
   }
   if ((VAR_54.fs_flags & (VAR_16 | VAR_13)) == 0) {
    FUNC_24(VAR_61);
    if (FUNC_8(VAR_65) == 0)
     FUNC_14(0);
    FUNC_14(4);
   } else {
    FUNC_36(
       "UNEXPECTED INCONSISTENCY, CANNOT RUN FAST FSCK\n");
   }
  }
 }







 if (VAR_31) {
  if (VAR_65 == ((void*)0)) {
   VAR_31 = 0;
   FUNC_36("NOT MOUNTED, CANNOT RUN IN BACKGROUND\n");
  } else if ((VAR_65->f_flags & VAR_20) == 0) {
   VAR_31 = 0;
   FUNC_36(
     "NOT USING SOFT UPDATES, CANNOT RUN IN BACKGROUND\n");
  } else if ((VAR_65->f_flags & VAR_18) != 0) {
   VAR_31 = 0;
   FUNC_36("MOUNTED READ-ONLY, CANNOT RUN IN BACKGROUND\n");
  } else if ((VAR_41 = FUNC_29(VAR_61, VAR_21)) >= 0) {
   if (FUNC_39(0) != 0) {
    if (VAR_54.fs_flags & (VAR_13 | VAR_14)) {
     VAR_31 = 0;
     FUNC_36(
   "UNEXPECTED INCONSISTENCY, CANNOT RUN IN BACKGROUND\n");
    }
    if ((VAR_54.fs_flags & VAR_16) == 0 &&
        VAR_55 && VAR_33) {




     FUNC_38(
     "FILE SYSTEM CLEAN; SKIPPING CHECKS\n");
     goto clean;
    }
   }
   FUNC_13(VAR_41);
  }
  if (VAR_31) {
   FUNC_44(VAR_56, sizeof VAR_56, "%s/.snap",
       VAR_65->f_mntonname);
   if (FUNC_45(VAR_56, &VAR_66) < 0) {
    if (VAR_39 != VAR_7) {
     VAR_31 = 0;
     FUNC_36(
 "CANNOT FIND SNAPSHOT DIRECTORY %s: %s, CANNOT RUN IN BACKGROUND\n",
         VAR_56, FUNC_46(VAR_39));
    } else if ((VAR_67 = FUNC_21("operator")) == ((void*)0) ||
        FUNC_27(VAR_56, 0770) < 0 ||
        FUNC_10(VAR_56, -1, VAR_67->gr_gid) < 0 ||
        FUNC_9(VAR_56, 0770) < 0) {
     VAR_31 = 0;
     FUNC_36(
 "CANNOT CREATE SNAPSHOT DIRECTORY %s: %s, CANNOT RUN IN BACKGROUND\n",
         VAR_56, FUNC_46(VAR_39));
    }
   } else if (!FUNC_1(VAR_66.st_mode)) {
    VAR_31 = 0;
    FUNC_36(
   "%s IS NOT A DIRECTORY, CANNOT RUN IN BACKGROUND\n",
        VAR_56);
   }
  }
  if (VAR_31) {
   FUNC_44(VAR_56, sizeof VAR_56,
       "%s/.snap/fsck_snapshot", VAR_65->f_mntonname);
   FUNC_4(&VAR_68, &VAR_71, "fstype", "ffs", 4);
   FUNC_4(&VAR_68, &VAR_71, "from", VAR_56,
       (size_t)-1);
   FUNC_4(&VAR_68, &VAR_71, "fspath", VAR_65->f_mntonname,
       (size_t)-1);
   FUNC_4(&VAR_68, &VAR_71, "errmsg", VAR_69,
       sizeof(VAR_69));
   FUNC_4(&VAR_68, &VAR_71, "update", ((void*)0), 0);
   FUNC_4(&VAR_68, &VAR_71, "snapshot", ((void*)0), 0);

   while (FUNC_28(VAR_68, VAR_71, VAR_65->f_flags) < 0) {
    if (VAR_39 == VAR_6 && FUNC_51(VAR_56) == 0)
     continue;
    VAR_31 = 0;
    FUNC_36("CANNOT CREATE SNAPSHOT %s: %s %s\n",
        VAR_56, FUNC_46(VAR_39), VAR_69);
    break;
   }
   if (VAR_31 != 0)
    VAR_61 = VAR_56;
  }
 }

 switch (FUNC_43(VAR_61)) {
 case 0:
  if (VAR_49)
   FUNC_36("CAN'T CHECK FILE SYSTEM.");
  return (0);
 case -1:
 clean:
  FUNC_38("clean, %ld free ", (long)(VAR_54.fs_cstotal.cs_nffree +
      VAR_54.fs_frag * VAR_54.fs_cstotal.cs_nbfree));
  FUNC_37("(%jd frags, %jd blocks, %.1f%% fragmentation)\n",
      (intmax_t)VAR_54.fs_cstotal.cs_nffree,
      (intmax_t)VAR_54.fs_cstotal.cs_nbfree,
      VAR_54.fs_cstotal.cs_nffree * 100.0 / VAR_54.fs_dsize);
  return (0);
 }



 if ((VAR_54.fs_flags & VAR_14) == VAR_14) {
  if ((VAR_54.fs_flags & VAR_13) != VAR_13 && VAR_55) {
   if (VAR_49 || FUNC_40("USE JOURNAL")) {
    if (FUNC_47(VAR_61) == 0) {
     FUNC_37("\n***** FILE SYSTEM MARKED CLEAN *****\n");
     if (FUNC_8(VAR_65) == 0)
      FUNC_14(0);
     FUNC_14(4);
    }
   }
   FUNC_37("** Skipping journal, falling through to full fsck\n\n");
  }






  VAR_54.fs_mtime = FUNC_50(((void*)0));
  FUNC_41();
  VAR_70 = VAR_40;
  FUNC_16(VAR_42, &VAR_53);
  VAR_40 = VAR_70;
 }





 if ((VAR_54.fs_flags & VAR_12) == 0)
  VAR_54.fs_metackhash = 0;






 VAR_34 = 0;
 if (VAR_49 == 0 && VAR_60 == 0 && VAR_54.fs_magic != VAR_15 &&
     VAR_42 != -1 && FUNC_23() >= VAR_22) {
  if ((VAR_54.fs_metackhash & VAR_0) == 0 &&
      FUNC_40("ADD CYLINDER GROUP CHECK-HASH PROTECTION") != 0) {
   VAR_34 |= VAR_0;
   VAR_54.fs_metackhash |= VAR_0;
  }
  if ((VAR_54.fs_metackhash & VAR_4) == 0 &&
      FUNC_23() >= VAR_26 &&
      FUNC_40("ADD SUPERBLOCK CHECK-HASH PROTECTION") != 0) {
   VAR_34 |= VAR_4;
   VAR_54.fs_metackhash |= VAR_4;
  }
  if ((VAR_54.fs_metackhash & VAR_3) == 0 &&
      FUNC_23() >= VAR_25 &&
      FUNC_40("ADD INODE CHECK-HASH PROTECTION") != 0) {
   VAR_34 |= VAR_3;
   VAR_54.fs_metackhash |= VAR_3;
  }
  if (VAR_34 != 0) {
   VAR_54.fs_flags |= VAR_12;
   FUNC_41();
  }
 }




 VAR_51 = 1;



 if (VAR_49 == 0) {
  FUNC_37("** Last Mounted on %s\n", VAR_54.fs_fsmnt);
  if (VAR_65 != ((void*)0) && VAR_65->f_flags & VAR_19)
   FUNC_37("** Root file system\n");
  FUNC_37("** Phase 1 - Check Blocks and Sizes\n");
 }
 FUNC_12(VAR_5, &VAR_57);
 FUNC_30();
 FUNC_0("Pass1");




 if (VAR_38) {
  if (VAR_49 || VAR_58)
   FUNC_36("INTERNAL ERROR: dups with %s%s%s",
       VAR_49 ? "-p" : "",
       (VAR_49 && VAR_58) ? " and " : "",
       VAR_58 ? "softupdates" : "");
  FUNC_37("** Phase 1b - Rescan For More DUPS\n");
  FUNC_31();
  FUNC_0("Pass1b");
 }




 if (VAR_49 == 0)
  FUNC_37("** Phase 2 - Check Pathnames\n");
 FUNC_32();
 FUNC_0("Pass2");




 if (VAR_49 == 0)
  FUNC_37("** Phase 3 - Check Connectivity\n");
 FUNC_33();
 FUNC_0("Pass3");




 if (VAR_49 == 0)
  FUNC_37("** Phase 4 - Check Reference Counts\n");
 FUNC_34();
 FUNC_0("Pass4");




 if (VAR_49 == 0)
  FUNC_37("** Phase 5 - Check Cyl groups\n");
 FUNC_35();
 FUNC_0("Pass5");




 VAR_62 = VAR_54.fs_cstotal.cs_nffree;
 VAR_63 = VAR_54.fs_cstotal.cs_nbfree;
 VAR_74 = VAR_45 - VAR_28 - VAR_54.fs_cstotal.cs_nifree - VAR_48;
 VAR_73 = VAR_47 +
     VAR_54.fs_ncg * (FUNC_6(&VAR_54, 0) - FUNC_7(&VAR_54, 0));
 VAR_73 += FUNC_7(&VAR_54, 0) - FUNC_5(&VAR_54, 0);
 VAR_73 += FUNC_25(VAR_54.fs_cssize, VAR_54.fs_fsize);
 VAR_73 = VAR_44 - (VAR_62 + VAR_54.fs_frag * VAR_63) - VAR_73;
 if (VAR_31 && (VAR_74 > 0 || VAR_73 > 0)) {
  VAR_35 = VAR_54.fs_cstotal.cs_ndir - VAR_35;
  FUNC_38("Reclaimed: %ld directories, %jd files, %jd fragments\n",
      VAR_35, VAR_74 - VAR_35, VAR_73);
 }
 FUNC_38("%ld files, %jd used, %ju free ",
     (long)VAR_48, (intmax_t)VAR_47,
     (uintmax_t)VAR_62 + VAR_54.fs_frag * VAR_63);
 FUNC_37("(%ju frags, %ju blocks, %.1f%% fragmentation)\n",
     (uintmax_t)VAR_62, (uintmax_t)VAR_63,
     VAR_62 * 100.0 / VAR_54.fs_dsize);
 if (VAR_37) {
  if (VAR_74 < 0)
   FUNC_37("%jd inodes missing\n", -VAR_74);
  if (VAR_73 < 0)
   FUNC_37("%jd blocks missing\n", -VAR_73);
  if (VAR_38 != ((void*)0)) {
   FUNC_37("The following duplicate blocks remain:");
   for (VAR_64 = VAR_38; VAR_64; VAR_64 = VAR_64->next)
    FUNC_37(" %jd,", (intmax_t)VAR_64->dup);
   FUNC_37("\n");
  }
 }
 VAR_38 = (struct dups *)0;
 VAR_46 = (struct dups *)0;
 FUNC_26();
 if (VAR_40) {
  VAR_54.fs_time = FUNC_50(((void*)0));
  FUNC_41();
 }
 if (VAR_36 && VAR_53.b_dirty) {



  for (VAR_72 = 0; VAR_72 < VAR_54.fs_ncg; VAR_72++)
   FUNC_3(VAR_42, (char *)&VAR_54,
       FUNC_18(&VAR_54, FUNC_7(&VAR_54, VAR_72)),
       VAR_27);
 }
 if (VAR_50)
  VAR_51 = 0;
 FUNC_15();




 if (VAR_31 == 0 && VAR_65 != ((void*)0) && (VAR_65->f_flags & VAR_18) == 0)
  VAR_51 = 0;
 FUNC_11(VAR_51);

 for (VAR_72 = 0; VAR_72 < VAR_54.fs_ncg; VAR_72++)
  if (VAR_43[VAR_72].il_stat != ((void*)0))
   FUNC_17((char *)VAR_43[VAR_72].il_stat);
 FUNC_17((char *)VAR_43);
 VAR_43 = ((void*)0);
 if (VAR_40 && !VAR_49)
  FUNC_37("\n***** FILE SYSTEM WAS MODIFIED *****\n");
 if (VAR_50) {
  if (VAR_59 && (VAR_52++ < 10) &&
      (VAR_49 || FUNC_40("RESTART")))
   return (VAR_9);
  FUNC_37("\n***** PLEASE RERUN FSCK *****\n");
 }
 if (FUNC_8(VAR_65) != 0) {
  if (!VAR_40)
   return (0);
  if (!VAR_49)
   FUNC_37("\n***** REBOOT NOW *****\n");
  FUNC_48();
  return (4);
 }
 return (VAR_50 ? VAR_8 : 0);
}
