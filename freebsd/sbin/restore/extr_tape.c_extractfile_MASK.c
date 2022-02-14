
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int u_int ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct entry {int e_flags; } ;
typedef int mode_t ;
typedef int gid_t ;
struct TYPE_2__ {char* name; int extsize; scalar_t__ uid; int mode; scalar_t__ rdev; int ino; int file_flags; int gid; int birthtime_nsec; int birthtime_sec; int atime_nsec; int atime_sec; int mtime_nsec; int mtime_sec; int action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,scalar_t__,int ) ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,scalar_t__,int ) ;
 int FUNC_7 (int ,char*,char*,...) ;
 int FUNC_8 (int,struct timespec*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*,scalar_t__,int ) ;
 int FUNC_15 (char*,char*,int ) ;
 char* VAR_17 ;
 struct entry* FUNC_16 (char*) ;
 int VAR_18 ;
 int FUNC_17 (char*,int) ;
 int FUNC_18 (char*,int,int) ;
 int VAR_19 ;
 int FUNC_19 (char*,int,int) ;
 int FUNC_20 (char*,char*) ;
 int VAR_20 ;
 int FUNC_21 (int,char*,char*,int,int ) ;
 char* FUNC_22 (int) ;
 int FUNC_23 () ;
 int VAR_21 ;
 int VAR_22 ;
 char* FUNC_24 (int ) ;
 int VAR_23 ;
 int FUNC_25 (char*) ;
 int FUNC_26 (int ,char*,struct timespec*,int ) ;
 int FUNC_27 (int ,char*,char*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

int
FUNC_28(char *VAR_30)
{
 u_int VAR_31;
 uid_t VAR_32;
 gid_t VAR_33;
 mode_t VAR_34;
 int VAR_35;
 struct timespec VAR_36[2], VAR_37[2];
 struct entry *VAR_38;
 char *VAR_39;

 VAR_15.name = VAR_30;
 VAR_15.action = VAR_14;
 VAR_36[0].tv_sec = VAR_15.atime_sec;
 VAR_36[0].tv_nsec = VAR_15.atime_nsec;
 VAR_36[1].tv_sec = VAR_15.mtime_sec;
 VAR_36[1].tv_nsec = VAR_15.mtime_nsec;
 VAR_37[0].tv_sec = VAR_15.atime_sec;
 VAR_37[0].tv_nsec = VAR_15.atime_nsec;
 VAR_37[1].tv_sec = VAR_15.birthtime_sec;
 VAR_37[1].tv_nsec = VAR_15.birthtime_nsec;
 VAR_35 = VAR_15.extsize;
 VAR_32 = FUNC_11();
 if (VAR_32 == 0)
  VAR_32 = VAR_15.uid;
 VAR_33 = VAR_15.gid;
 VAR_34 = VAR_15.mode;
 VAR_31 = VAR_15.file_flags;
 switch (VAR_34 & VAR_5) {

 default:
  FUNC_7(VAR_21, "%s: unknown file mode 0%o\n", VAR_30, VAR_34);
  FUNC_23();
  return (VAR_3);

 case 128:
  FUNC_27(VAR_22, "skipped socket %s\n", VAR_30);
  FUNC_23();
  return (VAR_4);

 case 132:
  if (VAR_18) {
   VAR_38 = FUNC_16(VAR_30);
   if (VAR_38 == ((void*)0) || VAR_38->e_flags & VAR_2)
    FUNC_20("unextracted directory %s\n", VAR_30);
   FUNC_23();
   return (VAR_4);
  }
  FUNC_27(VAR_22, "extract file %s\n", VAR_30);
  return (FUNC_9(VAR_30, VAR_15.ino));

 case 130:
  VAR_17[0] = '\0';
  VAR_20 = 0;
  VAR_39 = FUNC_22(VAR_35);
  FUNC_10(VAR_26, VAR_24, VAR_27);
  if (VAR_20 == 0) {
   FUNC_27(VAR_22,
       "%s: zero length symbolic link (ignored)\n", VAR_30);
   return (VAR_4);
  }
  if (FUNC_15(VAR_17, VAR_30, VAR_13) == VAR_4) {
   if (VAR_35 > 0)
    FUNC_21(-1, VAR_30, VAR_39, VAR_35, VAR_12);
   (void) FUNC_14(VAR_30, VAR_32, VAR_33);
   (void) FUNC_13(VAR_30, VAR_34);
   (void) FUNC_26(VAR_0, VAR_30, VAR_37,
       VAR_1);
   (void) FUNC_26(VAR_0, VAR_30, VAR_36,
       VAR_1);
   (void) FUNC_12(VAR_30, VAR_31);
   return (VAR_4);
  }
  return (VAR_3);

 case 131:
  FUNC_27(VAR_22, "extract fifo %s\n", VAR_30);
  if (VAR_6) {
   FUNC_23();
   return (VAR_4);
  }
  if (VAR_23)
   (void) FUNC_25(VAR_30);
  if (FUNC_17(VAR_30, 0600) < 0) {
   FUNC_7(VAR_21, "%s: cannot create fifo: %s\n",
       VAR_30, FUNC_24(VAR_16));
   FUNC_23();
   return (VAR_3);
  }
  if (VAR_35 == 0) {
   FUNC_23();
  } else {
   VAR_39 = FUNC_22(VAR_35);
   FUNC_10(VAR_28, VAR_24, VAR_28);
   FUNC_21(-1, VAR_30, VAR_39, VAR_35, VAR_11);
  }
  (void) FUNC_2(VAR_30, VAR_32, VAR_33);
  (void) FUNC_1(VAR_30, VAR_34);
  (void) FUNC_26(VAR_0, VAR_30, VAR_37, 0);
  (void) FUNC_26(VAR_0, VAR_30, VAR_36, 0);
  (void) FUNC_0(VAR_30, VAR_31);
  return (VAR_4);

 case 133:
 case 134:
  FUNC_27(VAR_22, "extract special file %s\n", VAR_30);
  if (VAR_6) {
   FUNC_23();
   return (VAR_4);
  }
  if (VAR_23)
   (void) FUNC_25(VAR_30);
  if (FUNC_18(VAR_30, (VAR_34 & (133 | 134)) | 0600,
      (int)VAR_15.rdev) < 0) {
   FUNC_7(VAR_21, "%s: cannot create special file: %s\n",
       VAR_30, FUNC_24(VAR_16));
   FUNC_23();
   return (VAR_3);
  }
  if (VAR_35 == 0) {
   FUNC_23();
  } else {
   VAR_39 = FUNC_22(VAR_35);
   FUNC_10(VAR_28, VAR_24, VAR_28);
   FUNC_21(-1, VAR_30, VAR_39, VAR_35, VAR_11);
  }
  (void) FUNC_2(VAR_30, VAR_32, VAR_33);
  (void) FUNC_1(VAR_30, VAR_34);
  (void) FUNC_26(VAR_0, VAR_30, VAR_37, 0);
  (void) FUNC_26(VAR_0, VAR_30, VAR_36, 0);
  (void) FUNC_0(VAR_30, VAR_31);
  return (VAR_4);

 case 129:
  FUNC_27(VAR_22, "extract file %s\n", VAR_30);
  if (VAR_6) {
   FUNC_23();
   return (VAR_4);
  }
  if (VAR_23)
   (void) FUNC_25(VAR_30);
  if ((VAR_19 = FUNC_19(VAR_30, VAR_9 | VAR_7 | VAR_8,
      0600)) < 0) {
   FUNC_7(VAR_21, "%s: cannot create file: %s\n",
       VAR_30, FUNC_24(VAR_16));
   FUNC_23();
   return (VAR_3);
  }
  VAR_39 = FUNC_22(VAR_35);
  FUNC_10(VAR_25, VAR_24, VAR_29);
  if (VAR_35 > 0)
   FUNC_21(VAR_19, VAR_30, VAR_39, VAR_35, VAR_10);
  (void) FUNC_6(VAR_19, VAR_32, VAR_33);
  (void) FUNC_5(VAR_19, VAR_34);
  (void) FUNC_8(VAR_19, VAR_37);
  (void) FUNC_8(VAR_19, VAR_36);
  (void) FUNC_4(VAR_19, VAR_31);
  (void) FUNC_3(VAR_19);
  return (VAR_4);
 }

}
