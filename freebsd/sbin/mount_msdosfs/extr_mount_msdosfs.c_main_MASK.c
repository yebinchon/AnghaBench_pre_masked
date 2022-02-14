
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uid_t ;
struct stat {size_t st_uid; size_t st_gid; size_t st_mode; } ;
struct iovec {int dummy; } ;
typedef size_t mode_t ;
typedef size_t gid_t ;
typedef int errmsg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t FUNC_0 (char*) ;
 size_t FUNC_1 (char*) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (struct iovec**,int*,char*,char*,int) ;
 int FUNC_4 (struct iovec**,int*,char*,char const*,...) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char**,char*) ;
 char* FUNC_10 (char*,int ) ;
 scalar_t__ FUNC_11 (struct iovec*,int,int ) ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (struct iovec**,int*,char*,char*) ;
 int * FUNC_14 (int ,char*) ;
 int FUNC_15 (char*,struct stat*) ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (char*,char*) ;
 char* FUNC_18 (char const*) ;
 int FUNC_19 () ;

int
FUNC_20(int VAR_12, char **VAR_13)
{
 struct iovec *VAR_14 = ((void*)0);
 int VAR_15 = 0;
 struct stat VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 char *VAR_22, *VAR_23, VAR_24[VAR_6], *VAR_25;
 char VAR_26[] = "msdosfs";
 char VAR_27[255] = {0};
 char *VAR_28 = ((void*)0);
 char *VAR_29 = ((void*)0);
 mode_t VAR_30 = 0, VAR_31 = 0;
 uid_t VAR_32 = 0;
 gid_t VAR_33 = 0;

 VAR_18 = VAR_19 = VAR_20 = VAR_21 = 0;

 while ((VAR_17 = FUNC_9(VAR_12, VAR_13, "sl9u:g:m:M:o:L:D:W:")) != -1) {
  switch (VAR_17) {
  case 's':
   FUNC_3(&VAR_14, &VAR_15, "shortnames", ((void*)0), (size_t)-1);
   break;
  case 'l':
   FUNC_3(&VAR_14, &VAR_15, "longnames", ((void*)0), (size_t)-1);
   break;
  case '9':
   FUNC_4(&VAR_14, &VAR_15, "nowin95", "", (size_t)-1);
   break;
  case 'u':
   VAR_32 = FUNC_2(VAR_10);
   VAR_19 = 1;
   break;
  case 'g':
   VAR_33 = FUNC_0(VAR_10);
   VAR_18 = 1;
   break;
  case 'm':
   VAR_30 = FUNC_1(VAR_10);
   VAR_20 = 1;
   break;
  case 'M':
   VAR_31 = FUNC_1(VAR_10);
   VAR_21 = 1;
   break;
  case 'L': {
   const char *VAR_34 = ((void*)0);
   if (FUNC_14(VAR_5, VAR_10) == ((void*)0))
    FUNC_6(VAR_0, "%s", VAR_10);
   VAR_25 = FUNC_16(VAR_10,'.');
   if (!VAR_25)
    FUNC_6(VAR_0, "%s", VAR_10);
   VAR_34 = FUNC_10(VAR_25 + 1, VAR_4);
   FUNC_4(&VAR_14, &VAR_15, "cs_local", VAR_34);
   VAR_29 = FUNC_18(VAR_34);
   }
   break;
  case 'D':
   VAR_28 = FUNC_18(VAR_10);
   FUNC_4(&VAR_14, &VAR_15, "cs_dos", VAR_28, (size_t)-1);
   break;
  case 'o': {
   char *VAR_35 = ((void*)0);
   char *VAR_36 = FUNC_18("");
   VAR_35 = FUNC_16(VAR_10, '=');
   if (VAR_35 != ((void*)0)) {
    FUNC_8(VAR_36);
    *VAR_35 = '\0';
    VAR_36 = VAR_35 + 1;
   }
   FUNC_3(&VAR_14, &VAR_15, VAR_10, VAR_36, (size_t)-1);
   }
   break;
  case 'W':
   if (FUNC_17(VAR_10, "iso22dos") == 0) {
    VAR_29 = FUNC_18("ISO8859-2");
    VAR_28 = FUNC_18("CP852");
   } else if (FUNC_17(VAR_10, "iso72dos") == 0) {
    VAR_29 = FUNC_18("ISO8859-7");
    VAR_28 = FUNC_18("CP737");
   } else if (FUNC_17(VAR_10, "koi2dos") == 0) {
    VAR_29 = FUNC_18("KOI8-R");
    VAR_28 = FUNC_18("CP866");
   } else if (FUNC_17(VAR_10, "koi8u2dos") == 0) {
    VAR_29 = FUNC_18("KOI8-U");
    VAR_28 = FUNC_18("CP866");
   } else {
    FUNC_6(VAR_1, "%s", VAR_10);
   }
   FUNC_3(&VAR_14, &VAR_15, "cs_local", VAR_29, (size_t)-1);
   FUNC_3(&VAR_14, &VAR_15, "cs_dos", VAR_28, (size_t)-1);
   break;
  case '?':
  default:
   FUNC_19();
   break;
  }
 }

 if (VAR_11 + 2 != VAR_12)
  FUNC_19();

 if (VAR_20 && !VAR_21) {
  VAR_31 = VAR_30;
  VAR_21 = 1;
 }
 else if (VAR_21 && !VAR_20) {
  VAR_30 = VAR_31;
  VAR_20 = 1;
 }

 VAR_22 = VAR_13[VAR_11];
 VAR_23 = VAR_13[VAR_11 + 1];

 if (VAR_29 != ((void*)0)) {
  if (FUNC_13(&VAR_14, &VAR_15, VAR_29, VAR_28) == -1)
   FUNC_6(VAR_2, "msdosfs_iconv");
  FUNC_4(&VAR_14, &VAR_15, "kiconv", "");
 } else if (VAR_28 != ((void*)0)) {
  FUNC_4(&VAR_14, &VAR_15, "cs_local", "ISO8859-1");
  if (FUNC_13(&VAR_14, &VAR_15, "ISO8859-1", VAR_28) == -1)
   FUNC_6(VAR_2, "msdosfs_iconv");
  FUNC_4(&VAR_14, &VAR_15, "kiconv", "");
 }





 if (FUNC_5(VAR_23, VAR_24) != 0)
  FUNC_6(VAR_3, "%s", VAR_24);
 (void)FUNC_12(VAR_22, VAR_22);

 if (!VAR_18 || !VAR_19 || !VAR_20) {
  if (FUNC_15(VAR_24, &VAR_16) == -1)
   FUNC_6(VAR_2, "stat %s", VAR_24);

  if (!VAR_19)
   VAR_32 = VAR_16.st_uid;
  if (!VAR_18)
   VAR_33 = VAR_16.st_gid;
  if (!VAR_20)
   VAR_30 = VAR_31 =
    VAR_16.st_mode & (VAR_9 | VAR_7 | VAR_8);
 }

 FUNC_3(&VAR_14, &VAR_15, "fstype", VAR_26, (size_t)-1);
 FUNC_3(&VAR_14, &VAR_15, "fspath", VAR_24, (size_t)-1);
 FUNC_3(&VAR_14, &VAR_15, "from", VAR_22, (size_t)-1);
 FUNC_3(&VAR_14, &VAR_15, "errmsg", VAR_27, sizeof(VAR_27));
 FUNC_4(&VAR_14, &VAR_15, "uid", "%d", VAR_32);
 FUNC_4(&VAR_14, &VAR_15, "gid", "%u", VAR_33);
 FUNC_4(&VAR_14, &VAR_15, "mask", "%u", VAR_30);
 FUNC_4(&VAR_14, &VAR_15, "dirmask", "%u", VAR_31);

 if (FUNC_11(VAR_14, VAR_15, 0) < 0) {
  if (VAR_27[0])
   FUNC_6(1, "%s: %s", VAR_22, VAR_27);
  else
   FUNC_6(1, "%s", VAR_22);
 }

 FUNC_7 (0);
}
