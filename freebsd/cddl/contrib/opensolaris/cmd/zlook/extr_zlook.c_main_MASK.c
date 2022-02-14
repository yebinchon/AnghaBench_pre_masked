
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zl_reqflags; int zr_reqflags; char* zr_dir; char* zr_file; long zr_buflen; int zr_retcode; char* zl_dir; char* zl_file; char* zl_xfile; int zl_retcode; int zl_deflags; char* zl_real; int zl_xvattrs; int zl_statbuf; int zr_eof; scalar_t__ zr_buf; int member_0; } ;
typedef TYPE_1__ zut_readdir_t ;
typedef TYPE_1__ zut_lookup_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ boolean_t ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;



 int FUNC_0 (int) ;
 int VAR_18 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (int,int ,TYPE_1__*) ;
 char* FUNC_6 (long) ;
 int FUNC_7 (char*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 long FUNC_8 (char*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,...) ;
 int VAR_21 ;
 char* FUNC_15 (int) ;
 int FUNC_16 (char*,char*,int) ;
 long FUNC_17 (int ,int *,int ) ;
 int FUNC_18 (char*) ;

int
FUNC_19(int VAR_22, char **VAR_23)
{
 zut_lookup_t VAR_24 = {0};
 zut_readdir_t VAR_25 = {0};
 boolean_t VAR_26 = VAR_1;
 boolean_t VAR_27 = VAR_1;
 boolean_t VAR_28 = VAR_1;
 boolean_t VAR_29 = VAR_1;
 long VAR_30 = VAR_0;
 int VAR_31 = 0;
 int VAR_32;
 int VAR_33;
 int VAR_34;

 while ((VAR_34 = FUNC_4(VAR_22, VAR_23, "lisaerb:ASE")) != -1) {
  switch (VAR_34) {
  case 'l':
   VAR_27 = VAR_2;
   break;
  case 'i':
   VAR_24.zl_reqflags |= VAR_14;
   VAR_27 = VAR_2;
   break;
  case 's':
   VAR_24.zl_reqflags |= VAR_13;
   VAR_27 = VAR_2;
   break;
  case 'a':
   VAR_25.zr_reqflags |= VAR_10;
   VAR_28 = VAR_2;
   break;
  case 'e':
   VAR_25.zr_reqflags |= VAR_12;
   VAR_28 = VAR_2;
   break;
  case 'r':
   VAR_28 = VAR_2;
   break;
  case 'b':
   VAR_28 = VAR_2;
   VAR_29 = VAR_2;
   VAR_30 = FUNC_17(VAR_19, ((void*)0), 0);
   break;
  case 'A':
   VAR_26 = VAR_2;
   VAR_32 = 130;
   break;
  case 'S':
   VAR_26 = VAR_2;
   VAR_32 = 129;
   break;
  case 'E':
   VAR_26 = VAR_2;
   VAR_32 = 128;
   break;
  case '?':
  default:
   FUNC_18(VAR_23[0]);
  }
 }

 if ((VAR_26 && VAR_27) || (VAR_26 && VAR_28) ||
     (VAR_27 && VAR_28) || (!VAR_28 && VAR_29) ||
     (!VAR_26 && !VAR_28 && !VAR_27))
  FUNC_18(VAR_23[0]);

 if (VAR_30 < VAR_5 || VAR_30 > VAR_6) {
  (void) FUNC_2(VAR_21, "Sorry, buffer size "
      "must be >= %d and less than or equal to %ld bytes.\n",
      (int)VAR_5, VAR_6);
  FUNC_1(VAR_3);
 }

 if (VAR_26) {
  char VAR_35[VAR_8];
  long VAR_36;

  if (VAR_22 - VAR_20 < 1)
   FUNC_18(VAR_23[0]);
  (void) FUNC_16(VAR_35, VAR_23[VAR_20], VAR_8);
  VAR_36 = FUNC_8(VAR_35, VAR_32);
  (void) FUNC_14("pathconf(2) check for %s\n", VAR_35);
  switch (VAR_32) {
  case 129:
   (void) FUNC_14("System attributes ");
   if (VAR_36 != 0)
    (void) FUNC_14("Enabled\n");
   else
    (void) FUNC_14("Not enabled\n");
   break;
  case 128:
   (void) FUNC_14("System attributes ");
   if (VAR_36 != 0)
    (void) FUNC_14("Exist\n");
   else
    (void) FUNC_14("Do not exist\n");
   break;
  case 130:
   (void) FUNC_14("Access filtering ");
   if (VAR_36 != 0)
    (void) FUNC_14("Available\n");
   else
    (void) FUNC_14("Not available\n");
   break;
  }
  return (VAR_36);
 }

 if ((VAR_33 = FUNC_7(VAR_11, VAR_9)) < 0) {
  FUNC_9(VAR_11);
  return (VAR_4);
 }

 if (VAR_28) {
  char *VAR_37;

  if (VAR_22 - VAR_20 < 1)
   FUNC_18(VAR_23[0]);

  (void) FUNC_16(VAR_25.zr_dir, VAR_23[VAR_20], VAR_8);
  if (VAR_22 - VAR_20 > 1) {
   (void) FUNC_16(VAR_25.zr_file, VAR_23[VAR_20 + 1],
       VAR_7);
   VAR_25.zr_reqflags |= VAR_17;
  }

  if ((VAR_37 = FUNC_6(VAR_30)) == ((void*)0)) {
   VAR_31 = VAR_18;
   FUNC_9("malloc");
   (void) FUNC_0(VAR_33);
   return (VAR_31);
  }

  VAR_25.zr_buf = (uint64_t)(uintptr_t)VAR_37;
  VAR_25.zr_buflen = VAR_30;

  while (!VAR_25.zr_eof) {
   int VAR_38;

   if ((VAR_38 = FUNC_5(VAR_33, VAR_16, &VAR_25)) != 0) {
    (void) FUNC_2(VAR_21,
        "IOCTL error: %s (%d)\n",
        FUNC_15(VAR_38), VAR_38);
    FUNC_3(VAR_37);
    (void) FUNC_0(VAR_33);
    return (VAR_38);
   }
   if (VAR_25.zr_retcode) {
    (void) FUNC_2(VAR_21,
        "readdir result: %s (%d)\n",
        FUNC_15(VAR_25.zr_retcode), VAR_25.zr_retcode);
    FUNC_3(VAR_37);
    (void) FUNC_0(VAR_33);
    return (VAR_25.zr_retcode);
   }
   if (VAR_25.zr_reqflags & VAR_12)
    FUNC_11(&VAR_25);
   else
    FUNC_10(&VAR_25);
  }
  FUNC_3(VAR_37);
 } else {
  int VAR_39;

  if (VAR_22 - VAR_20 < 2)
   FUNC_18(VAR_23[0]);

  (void) FUNC_16(VAR_24.zl_dir, VAR_23[VAR_20], VAR_8);
  (void) FUNC_16(VAR_24.zl_file, VAR_23[VAR_20 + 1], VAR_7);
  if (VAR_22 - VAR_20 > 2) {
   (void) FUNC_16(VAR_24.zl_xfile,
       VAR_23[VAR_20 + 2], VAR_7);
   VAR_24.zl_reqflags |= VAR_17;
  }

  if ((VAR_39 = FUNC_5(VAR_33, VAR_15, &VAR_24)) != 0) {
   (void) FUNC_2(VAR_21,
       "IOCTL error: %s (%d)\n",
       FUNC_15(VAR_39), VAR_39);
   (void) FUNC_0(VAR_33);
   return (VAR_39);
  }

  (void) FUNC_14("\nLookup of ");
  if (VAR_24.zl_reqflags & VAR_17) {
   (void) FUNC_14("extended attribute \"%s\" of ",
       VAR_24.zl_xfile);
  }
  (void) FUNC_14("file \"%s\" ", VAR_24.zl_file);
  (void) FUNC_14("in directory \"%s\" ", VAR_24.zl_dir);
  if (VAR_24.zl_retcode) {
   (void) FUNC_14("failed: %s (%d)\n",
       FUNC_15(VAR_24.zl_retcode), VAR_24.zl_retcode);
   (void) FUNC_0(VAR_33);
   return (VAR_24.zl_retcode);
  }

  (void) FUNC_14("succeeded.\n");
  if (VAR_24.zl_reqflags & VAR_14) {
   (void) FUNC_14("----------------------------\n");
   (void) FUNC_14("dirent flags: 0x%0x\n", VAR_24.zl_deflags);
   (void) FUNC_14("real name: %s\n", VAR_24.zl_real);
  }
  if (VAR_24.zl_reqflags & VAR_13) {
   (void) FUNC_14("----------------------------\n");
   FUNC_12(&VAR_24.zl_statbuf);
   FUNC_13(VAR_24.zl_xvattrs);
  }
 }

 (void) FUNC_0(VAR_33);
 return (0);
}
