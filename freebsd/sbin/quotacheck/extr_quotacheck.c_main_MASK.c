
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct quotafile {int dummy; } ;
struct passwd {int pw_name; scalar_t__ pw_uid; } ;
struct group {int gr_name; scalar_t__ gr_gid; } ;
struct fstab {int fs_spec; int fs_file; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (char*,struct quotafile*,struct quotafile*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int,char*,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,char*,char*,char*) ;
 struct fstab* FUNC_11 () ;
 struct group* FUNC_12 () ;
 int FUNC_13 (int,char**,char*) ;
 struct passwd* FUNC_14 () ;
 scalar_t__ VAR_7 ;
 int FUNC_15 (int ,char**,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_16 (struct quotafile*) ;
 struct quotafile* FUNC_17 (struct fstab*,int ,int) ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_21 () ;
 int VAR_12 ;
 int FUNC_22 (char*) ;

int
FUNC_23(int VAR_13, char *VAR_14[])
{
 struct fstab *VAR_15;
 struct passwd *VAR_16;
 struct group *VAR_17;
 struct quotafile *VAR_18, *VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 long VAR_25 = 0;
 char *VAR_26;

 VAR_23 = VAR_22 = 0;
 while ((VAR_24 = FUNC_13(VAR_13, VAR_14, "ac:guvl:")) != -1) {
  switch(VAR_24) {
  case 'a':
   VAR_5++;
   break;
  case 'c':
   if (VAR_6)
    FUNC_21();
   VAR_6 = FUNC_1(VAR_8);
   break;
  case 'g':
   VAR_7++;
   break;
  case 'u':
   VAR_11++;
   break;
  case 'v':
   VAR_12++;
   break;
  case 'l':
   VAR_22 = FUNC_1(VAR_8);
   break;
  default:
   FUNC_21();
  }
 }
 VAR_13 -= VAR_9;
 VAR_14 += VAR_9;
 if ((VAR_13 == 0 && !VAR_5) || (VAR_13 > 0 && VAR_5))
  FUNC_21();
 if (VAR_6 && VAR_6 != 32 && VAR_6 != 64)
  FUNC_21();
 if (!VAR_7 && !VAR_11) {
  VAR_7++;
  VAR_11++;
 }
 if (VAR_7) {
  FUNC_19();
  while ((VAR_17 = FUNC_12()) != ((void*)0))
   (void) FUNC_0((u_long)VAR_17->gr_gid, VAR_1, VAR_17->gr_name,
       ((void*)0));
  FUNC_6();
 }
 if (VAR_11) {
  FUNC_20();
  while ((VAR_16 = FUNC_14()) != ((void*)0))
   (void) FUNC_0((u_long)VAR_16->pw_uid, VAR_4, VAR_16->pw_name,
       ((void*)0));
  FUNC_7();
 }



 if (VAR_22 > 0)
  FUNC_22("the -l option is now deprecated");
 if (VAR_5)
  FUNC_9(FUNC_3(VAR_11, VAR_7));
 if (FUNC_18() == 0)
  FUNC_8(1, "%s: can't open", VAR_0);
 while ((VAR_15 = FUNC_11()) != ((void*)0)) {
  if (((VAR_21 = FUNC_15(VAR_15->fs_file, VAR_14, VAR_13)) >= 0 ||
       (VAR_21 = FUNC_15(VAR_15->fs_spec, VAR_14, VAR_13)) >= 0) &&
      (VAR_26 = FUNC_2(VAR_15->fs_spec))) {
   VAR_25 |= 1 << VAR_21;
   VAR_18 = ((void*)0);
   if (VAR_11)
    VAR_18 = FUNC_17(VAR_15, VAR_4, VAR_2|VAR_3);
   VAR_19 = ((void*)0);
   if (VAR_7)
    VAR_19 = FUNC_17(VAR_15, VAR_1, VAR_2|VAR_3);
   if (VAR_18 == ((void*)0) && VAR_19 == ((void*)0))
    continue;
   VAR_23 += FUNC_4(VAR_26, VAR_18, VAR_19);
   if (VAR_18)
    FUNC_16(VAR_18);
   if (VAR_19)
    FUNC_16(VAR_19);
  }
 }
 FUNC_5();
 for (VAR_20 = 0; VAR_20 < VAR_13; VAR_20++)
  if ((VAR_25 & (1 << VAR_20)) == 0)
   FUNC_10(VAR_10, "%s not found in %s\n",
    VAR_14[VAR_20], VAR_0);
 FUNC_9(VAR_23);
}
