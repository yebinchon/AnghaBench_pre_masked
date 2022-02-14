
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct statfs {char* f_mntonname; int f_flags; } ;
struct iovec {int dummy; } ;
typedef int errmsg ;
struct TYPE_8__ {int fs_flags; int fs_maxbpg; unsigned int fs_avgfilesize; scalar_t__ fs_clean; int fs_metaspace; int fs_fpg; int fs_minfree; size_t fs_optim; unsigned int fs_avgfpdir; scalar_t__ fs_sujfree; int fs_volname; } ;
struct TYPE_7__ {char const* d_name; char* d_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (struct iovec**,int*,char*,char*,int) ;
 int FUNC_3 (struct iovec**,int*,char*,char*,...) ;
 TYPE_1__ VAR_15 ;
 int FUNC_4 (int,char*,char const*,...) ;
 int FUNC_5 (int,char*,char const*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char**,char*) ;
 int FUNC_8 (char const) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (struct iovec*,int,int) ;
 char* VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_12 () ;
 TYPE_4__ VAR_18 ;
 int FUNC_13 (TYPE_1__*,int) ;
 scalar_t__ FUNC_14 (char const*,struct statfs*) ;
 scalar_t__ FUNC_15 (char const*,char*) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (int ,char const*,int ) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,char const*) ;
 int FUNC_20 () ;
 int FUNC_21 (char*,char const*) ;
 int FUNC_22 (char*,...) ;

int
FUNC_23(int VAR_19, char *VAR_20[])
{
 const char *VAR_21, *VAR_22, *VAR_23, *VAR_24, *VAR_25, *VAR_26, *VAR_27;
 const char *VAR_28;
 const char *VAR_29, *VAR_30;
 const char *VAR_31;
 int VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
 int VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50;
 int VAR_51, VAR_52, VAR_53, VAR_54, VAR_55;
 int VAR_56, VAR_57, VAR_58;
 int VAR_59 = 0;
 const char *VAR_60[2];
 struct statfs VAR_61;
 struct iovec *VAR_62 = ((void*)0);
 char VAR_63[255] = {0};

 if (VAR_19 < 3)
  FUNC_20();
 VAR_33 = VAR_34 = VAR_35 = VAR_37 = VAR_39 = VAR_40 = VAR_41 = VAR_43 = 0;
 VAR_44 = VAR_45 = VAR_47 = VAR_48 = VAR_49 = VAR_51 = VAR_52 = VAR_55 = 0;
 VAR_21 = VAR_22 = VAR_23 = VAR_24 = VAR_25 = VAR_26 = VAR_27 = ((void*)0);
 VAR_36 = VAR_38 = VAR_46 = VAR_50 = VAR_53 = VAR_54 = 0;
 VAR_32 = 0;
 VAR_57 = 0;
 while ((VAR_56 = FUNC_7(VAR_19, VAR_20, "Aa:e:f:j:J:k:L:l:m:N:n:o:ps:S:t:"))
     != -1)
  switch (VAR_56) {

  case 'A':
   VAR_57 = 1;
   VAR_33++;
   break;

  case 'a':
   VAR_57 = 1;
   VAR_31 = "POSIX.1e ACLs";
   VAR_21 = VAR_16;
   if (FUNC_15(VAR_21, "enable") &&
       FUNC_15(VAR_21, "disable")) {
    FUNC_5(10, "bad %s (options are %s)",
        VAR_31, "`enable' or `disable'");
   }
   VAR_34 = 1;
   break;

  case 'e':
   VAR_57 = 1;
   VAR_31 = "maximum blocks per file in a cylinder group";
   VAR_36 = FUNC_0(VAR_16);
   if (VAR_36 < 1)
    FUNC_5(10, "%s must be >= 1 (was %s)",
        VAR_31, VAR_16);
   VAR_35 = 1;
   break;

  case 'f':
   VAR_57 = 1;
   VAR_31 = "average file size";
   VAR_38 = FUNC_0(VAR_16);
   if (VAR_38 < 1)
    FUNC_5(10, "%s must be >= 1 (was %s)",
        VAR_31, VAR_16);
   VAR_37 = 1;
   break;

  case 'j':
   VAR_57 = 1;
   VAR_31 = "softdep journaled file system";
   VAR_22 = VAR_16;
   if (FUNC_15(VAR_22, "enable") &&
       FUNC_15(VAR_22, "disable")) {
    FUNC_5(10, "bad %s (options are %s)",
        VAR_31, "`enable' or `disable'");
   }
   VAR_39 = 1;
   break;

  case 'J':
   VAR_57 = 1;
   VAR_31 = "gjournaled file system";
   VAR_23 = VAR_16;
   if (FUNC_15(VAR_23, "enable") &&
       FUNC_15(VAR_23, "disable")) {
    FUNC_5(10, "bad %s (options are %s)",
        VAR_31, "`enable' or `disable'");
   }
   VAR_40 = 1;
   break;

  case 'k':
   VAR_57 = 1;
   VAR_31 = "space to hold for metadata blocks";
   VAR_42 = FUNC_0(VAR_16);
   if (VAR_42 < 0)
    FUNC_5(10, "bad %s (%s)", VAR_31, VAR_16);
   VAR_41 = 1;
   break;

  case 'L':
   VAR_57 = 1;
   VAR_31 = "volume label";
   VAR_24 = VAR_16;
   VAR_58 = -1;
   while (FUNC_8(VAR_24[++VAR_58]) || VAR_24[VAR_58] == '_' ||
       VAR_24[VAR_58] == '-')
    ;
   if (VAR_24[VAR_58] != '\0') {
    FUNC_5(10, "bad %s. Valid characters are "
        "alphanumerics, dashes, and underscores.",
        VAR_31);
   }
   if (FUNC_16(VAR_24) >= VAR_9) {
    FUNC_5(10, "bad %s. Length is longer than %d.",
        VAR_31, VAR_9 - 1);
   }
   VAR_43 = 1;
   break;

  case 'l':
   VAR_57 = 1;
   VAR_31 = "multilabel MAC file system";
   VAR_25 = VAR_16;
   if (FUNC_15(VAR_25, "enable") &&
       FUNC_15(VAR_25, "disable")) {
    FUNC_5(10, "bad %s (options are %s)",
        VAR_31, "`enable' or `disable'");
   }
   VAR_44 = 1;
   break;

  case 'm':
   VAR_57 = 1;
   VAR_31 = "minimum percentage of free space";
   VAR_46 = FUNC_0(VAR_16);
   if (VAR_46 < 0 || VAR_46 > 99)
    FUNC_5(10, "bad %s (%s)", VAR_31, VAR_16);
   VAR_45 = 1;
   break;

  case 'N':
   VAR_57 = 1;
   VAR_31 = "NFSv4 ACLs";
   VAR_26 = VAR_16;
   if (FUNC_15(VAR_26, "enable") &&
       FUNC_15(VAR_26, "disable")) {
    FUNC_5(10, "bad %s (options are %s)",
        VAR_31, "`enable' or `disable'");
   }
   VAR_47 = 1;
   break;

  case 'n':
   VAR_57 = 1;
   VAR_31 = "soft updates";
   VAR_27 = VAR_16;
   if (FUNC_15(VAR_27, "enable") != 0 &&
       FUNC_15(VAR_27, "disable") != 0) {
    FUNC_5(10, "bad %s (options are %s)",
        VAR_31, "`enable' or `disable'");
   }
   VAR_48 = 1;
   break;

  case 'o':
   VAR_57 = 1;
   VAR_31 = "optimization preference";
   if (FUNC_15(VAR_16, "space") == 0)
    VAR_50 = VAR_5;
   else if (FUNC_15(VAR_16, "time") == 0)
    VAR_50 = VAR_6;
   else
    FUNC_5(10,
        "bad %s (options are `space' or `time')",
        VAR_31);
   VAR_49 = 1;
   break;

  case 'p':
   VAR_57 = 1;
   VAR_51 = 1;
   break;

  case 's':
   VAR_57 = 1;
   VAR_31 = "expected number of files per directory";
   VAR_53 = FUNC_0(VAR_16);
   if (VAR_53 < 1)
    FUNC_5(10, "%s must be >= 1 (was %s)",
        VAR_31, VAR_16);
   VAR_52 = 1;
   break;

  case 'S':
   VAR_57 = 1;
   VAR_31 = "Softdep Journal Size";
   VAR_54 = FUNC_0(VAR_16);
   if (VAR_54 < VAR_14)
    FUNC_5(10, "%s must be >= %d (was %s)",
        VAR_31, VAR_14, VAR_16);
   break;

  case 't':
   VAR_57 = 1;
   VAR_31 = "trim";
   VAR_28 = VAR_16;
   if (FUNC_15(VAR_28, "enable") != 0 &&
       FUNC_15(VAR_28, "disable") != 0) {
    FUNC_5(10, "bad %s (options are %s)",
        VAR_31, "`enable' or `disable'");
   }
   VAR_55 = 1;
   break;

  default:
   FUNC_20();
  }
 VAR_19 -= VAR_17;
 VAR_20 += VAR_17;
 if (VAR_57 == 0 || VAR_19 != 1)
  FUNC_20();

 VAR_30 = VAR_29 = VAR_20[0];
 if (FUNC_19(&VAR_15, VAR_29) == -1)
  goto err;
 if (VAR_15.d_name != VAR_29) {
  if (FUNC_14(VAR_29, &VAR_61) != 0)
   FUNC_21("Can't stat %s", VAR_29);
  if (FUNC_15(VAR_29, VAR_61.f_mntonname) == 0)
   VAR_32 = 1;
 }

 if (VAR_51) {
  FUNC_12();
  FUNC_6(0);
 }
 if (VAR_43) {
  VAR_31 = "volume label";
  FUNC_17(VAR_18.fs_volname, VAR_24, VAR_9);
 }
 if (VAR_34) {
  VAR_31 = "POSIX.1e ACLs";
  if (FUNC_15(VAR_21, "enable") == 0) {
   if (VAR_18.fs_flags & VAR_0) {
    FUNC_22("%s remains unchanged as enabled", VAR_31);
   } else if (VAR_18.fs_flags & VAR_4) {
    FUNC_22("%s and NFSv4 ACLs are mutually "
        "exclusive", VAR_31);
   } else {
    VAR_18.fs_flags |= VAR_0;
    FUNC_22("%s set", VAR_31);
   }
  } else if (FUNC_15(VAR_21, "disable") == 0) {
   if ((~VAR_18.fs_flags & VAR_0) ==
       VAR_0) {
    FUNC_22("%s remains unchanged as disabled",
        VAR_31);
   } else {
    VAR_18.fs_flags &= ~VAR_0;
    FUNC_22("%s cleared", VAR_31);
   }
  }
 }
 if (VAR_35) {
  VAR_31 = "maximum blocks per file in a cylinder group";
  if (VAR_18.fs_maxbpg == VAR_36)
   FUNC_22("%s remains unchanged as %d", VAR_31, VAR_36);
  else {
   FUNC_22("%s changes from %d to %d",
       VAR_31, VAR_18.fs_maxbpg, VAR_36);
   VAR_18.fs_maxbpg = VAR_36;
  }
 }
 if (VAR_37) {
  VAR_31 = "average file size";
  if (VAR_18.fs_avgfilesize == (unsigned)VAR_38) {
   FUNC_22("%s remains unchanged as %d", VAR_31, VAR_38);
  }
  else {
   FUNC_22("%s changes from %d to %d",
     VAR_31, VAR_18.fs_avgfilesize, VAR_38);
   VAR_18.fs_avgfilesize = VAR_38;
  }
 }
 if (VAR_39) {
   VAR_31 = "soft updates journaling";
   if (FUNC_15(VAR_22, "enable") == 0) {
   if ((VAR_18.fs_flags & (VAR_1 | VAR_7)) ==
       (VAR_1 | VAR_7)) {
    FUNC_22("%s remains unchanged as enabled", VAR_31);
   } else if (VAR_18.fs_clean == 0) {
    FUNC_22("%s cannot be enabled until fsck is run",
        VAR_31);
   } else if (FUNC_9(VAR_54) != 0) {
    FUNC_22("%s cannot be enabled", VAR_31);
   } else {
     VAR_18.fs_flags |= VAR_1 | VAR_7;
     FUNC_22("%s set", VAR_31);
   }
   } else if (FUNC_15(VAR_22, "disable") == 0) {
   if ((~VAR_18.fs_flags & VAR_7) == VAR_7) {
    FUNC_22("%s remains unchanged as disabled", VAR_31);
   } else {
    FUNC_10();
     VAR_18.fs_flags &= ~VAR_7;
    VAR_18.fs_sujfree = 0;
     FUNC_22("%s cleared but soft updates still set.",
        VAR_31);

    FUNC_22("remove .sujournal to reclaim space");
   }
   }
 }
 if (VAR_40) {
  VAR_31 = "gjournal";
  if (FUNC_15(VAR_23, "enable") == 0) {
   if (VAR_18.fs_flags & VAR_2) {
    FUNC_22("%s remains unchanged as enabled", VAR_31);
   } else {
    VAR_18.fs_flags |= VAR_2;
    FUNC_22("%s set", VAR_31);
   }
  } else if (FUNC_15(VAR_23, "disable") == 0) {
   if ((~VAR_18.fs_flags & VAR_2) ==
       VAR_2) {
    FUNC_22("%s remains unchanged as disabled",
        VAR_31);
   } else {
    VAR_18.fs_flags &= ~VAR_2;
    FUNC_22("%s cleared", VAR_31);
   }
  }
 }
 if (VAR_41) {
  VAR_31 = "space to hold for metadata blocks";
  if (VAR_18.fs_metaspace == VAR_42)
   FUNC_22("%s remains unchanged as %d", VAR_31, VAR_42);
  else {
   VAR_42 = FUNC_1(&VAR_18, VAR_42);
   if (VAR_42 > VAR_18.fs_fpg / 2) {
    VAR_42 = FUNC_1(&VAR_18, VAR_18.fs_fpg / 2);
    FUNC_22("%s cannot exceed half the file system "
        "space", VAR_31);
   }
   FUNC_22("%s changes from %jd to %d",
        VAR_31, VAR_18.fs_metaspace, VAR_42);
   VAR_18.fs_metaspace = VAR_42;
  }
 }
 if (VAR_44) {
  VAR_31 = "multilabel";
  if (FUNC_15(VAR_25, "enable") == 0) {
   if (VAR_18.fs_flags & VAR_3) {
    FUNC_22("%s remains unchanged as enabled", VAR_31);
   } else {
    VAR_18.fs_flags |= VAR_3;
    FUNC_22("%s set", VAR_31);
   }
  } else if (FUNC_15(VAR_25, "disable") == 0) {
   if ((~VAR_18.fs_flags & VAR_3) ==
       VAR_3) {
    FUNC_22("%s remains unchanged as disabled",
        VAR_31);
   } else {
    VAR_18.fs_flags &= ~VAR_3;
    FUNC_22("%s cleared", VAR_31);
   }
  }
 }
 if (VAR_45) {
  VAR_31 = "minimum percentage of free space";
  if (VAR_18.fs_minfree == VAR_46)
   FUNC_22("%s remains unchanged as %d%%", VAR_31, VAR_46);
  else {
   FUNC_22("%s changes from %d%% to %d%%",
        VAR_31, VAR_18.fs_minfree, VAR_46);
   VAR_18.fs_minfree = VAR_46;
   if (VAR_46 >= VAR_10 && VAR_18.fs_optim == VAR_5)
    FUNC_22(VAR_13, "time", ">=", VAR_10);
   if (VAR_46 < VAR_10 && VAR_18.fs_optim == VAR_6)
    FUNC_22(VAR_13, "space", "<", VAR_10);
  }
 }
 if (VAR_47) {
  VAR_31 = "NFSv4 ACLs";
  if (FUNC_15(VAR_26, "enable") == 0) {
   if (VAR_18.fs_flags & VAR_4) {
    FUNC_22("%s remains unchanged as enabled", VAR_31);
   } else if (VAR_18.fs_flags & VAR_0) {
    FUNC_22("%s and POSIX.1e ACLs are mutually "
        "exclusive", VAR_31);
   } else {
    VAR_18.fs_flags |= VAR_4;
    FUNC_22("%s set", VAR_31);
   }
  } else if (FUNC_15(VAR_26, "disable") == 0) {
   if ((~VAR_18.fs_flags & VAR_4) ==
       VAR_4) {
    FUNC_22("%s remains unchanged as disabled",
        VAR_31);
   } else {
    VAR_18.fs_flags &= ~VAR_4;
    FUNC_22("%s cleared", VAR_31);
   }
  }
 }
 if (VAR_48) {
   VAR_31 = "soft updates";
   if (FUNC_15(VAR_27, "enable") == 0) {
   if (VAR_18.fs_flags & VAR_1)
    FUNC_22("%s remains unchanged as enabled", VAR_31);
   else if (VAR_18.fs_clean == 0) {
    FUNC_22("%s cannot be enabled until fsck is run",
        VAR_31);
   } else {
     VAR_18.fs_flags |= VAR_1;
     FUNC_22("%s set", VAR_31);
   }
   } else if (FUNC_15(VAR_27, "disable") == 0) {
   if ((~VAR_18.fs_flags & VAR_1) == VAR_1)
    FUNC_22("%s remains unchanged as disabled", VAR_31);
   else {
     VAR_18.fs_flags &= ~VAR_1;
     FUNC_22("%s cleared", VAR_31);
   }
   }
 }
 if (VAR_49) {
  VAR_31 = "optimization preference";
  VAR_60[VAR_5] = "space";
  VAR_60[VAR_6] = "time";
  if (VAR_18.fs_optim == VAR_50)
   FUNC_22("%s remains unchanged as %s", VAR_31, VAR_60[VAR_50]);
  else {
   FUNC_22("%s changes from %s to %s",
        VAR_31, VAR_60[VAR_18.fs_optim], VAR_60[VAR_50]);
   VAR_18.fs_optim = VAR_50;
   if (VAR_18.fs_minfree >= VAR_10 &&
       VAR_50 == VAR_5)
    FUNC_22(VAR_13, "time", ">=", VAR_10);
   if (VAR_18.fs_minfree < VAR_10 && VAR_50 == VAR_6)
    FUNC_22(VAR_13, "space", "<", VAR_10);
  }
 }
 if (VAR_52) {
  VAR_31 = "expected number of files per directory";
  if (VAR_18.fs_avgfpdir == (unsigned)VAR_53) {
   FUNC_22("%s remains unchanged as %d", VAR_31, VAR_53);
  }
  else {
   FUNC_22("%s changes from %d to %d",
     VAR_31, VAR_18.fs_avgfpdir, VAR_53);
   VAR_18.fs_avgfpdir = VAR_53;
  }
 }
 if (VAR_55) {
  VAR_31 = "issue TRIM to the disk";
   if (FUNC_15(VAR_28, "enable") == 0) {
   if (VAR_18.fs_flags & VAR_8)
    FUNC_22("%s remains unchanged as enabled", VAR_31);
   else {
     VAR_18.fs_flags |= VAR_8;
     FUNC_22("%s set", VAR_31);
   }
   } else if (FUNC_15(VAR_28, "disable") == 0) {
   if ((~VAR_18.fs_flags & VAR_8) == VAR_8)
    FUNC_22("%s remains unchanged as disabled", VAR_31);
   else {
     VAR_18.fs_flags &= ~VAR_8;
     FUNC_22("%s cleared", VAR_31);
   }
   }
 }

 if (FUNC_13(&VAR_15, VAR_33) == -1)
  goto err;
 FUNC_18(&VAR_15);
 if (VAR_32) {
  FUNC_3(&VAR_62, &VAR_59, "fstype", "ufs");
  FUNC_3(&VAR_62, &VAR_59, "fspath", "%s", VAR_30);
  FUNC_2(&VAR_62, &VAR_59, "errmsg", VAR_63, sizeof(VAR_63));
  if (FUNC_11(VAR_62, VAR_59,
      VAR_61.f_flags | VAR_12 | VAR_11) < 0) {
   if (VAR_63[0])
    FUNC_4(9, "%s: reload: %s", VAR_29, VAR_63);
   else
    FUNC_4(9, "%s: reload", VAR_29);
  }
  FUNC_22("file system reloaded");
 }
 FUNC_6(0);
err:
 if (VAR_15.d_error != ((void*)0))
  FUNC_5(11, "%s: %s", VAR_29, VAR_15.d_error);
 else
  FUNC_4(12, "%s", VAR_29);
}
