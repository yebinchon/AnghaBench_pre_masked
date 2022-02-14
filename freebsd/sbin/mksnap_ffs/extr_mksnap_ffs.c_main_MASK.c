
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {char* f_mntonname; int f_flags; } ;
struct stat {int st_mode; scalar_t__ st_uid; int st_flags; } ;
struct iovec {int dummy; } ;
struct group {int gr_gid; } ;
typedef int errmsg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (struct iovec**,int*,char*,char*,int) ;
 int FUNC_2 (int,char*,char*,...) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int,int,int ) ;
 scalar_t__ FUNC_7 (int,struct stat*) ;
 struct group* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (char*,struct stat*) ;
 int FUNC_11 (char*,struct statfs*) ;
 scalar_t__ FUNC_12 (struct iovec*,int,int ) ;
 int FUNC_13 (char*,int ) ;
 scalar_t__ FUNC_14 (char*,struct statfs*) ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (char*) ;
 char* FUNC_18 (char*,char) ;
 int FUNC_19 () ;

int
FUNC_20(int VAR_8, char **VAR_9)
{
 char VAR_10[255], VAR_11[VAR_2];
 char *VAR_12, *VAR_13;
 struct statfs VAR_14;
 struct group *VAR_15;
 struct stat VAR_16;
 struct iovec *VAR_17;
 int VAR_18, VAR_19;

 if (VAR_8 == 2)
  VAR_13 = VAR_9[1];
 else if (VAR_8 == 3)
  VAR_13 = VAR_9[2];
 else
  FUNC_19();
 if (FUNC_17(VAR_13) >= VAR_2)
  FUNC_3(1, "pathname too long %s", VAR_13);
 VAR_12 = FUNC_18(VAR_13, '/');
 if (VAR_12 == ((void*)0)) {
  FUNC_16(VAR_11, ".", VAR_2);
 } else if (VAR_12 == VAR_13) {
  FUNC_16(VAR_11, "/", VAR_2);
 } else {
  FUNC_16(VAR_11, VAR_13, VAR_12 - VAR_13 + 1);
 }
 if (FUNC_14(VAR_11, &VAR_14) < 0)
  FUNC_2(1, "%s", VAR_11);
 switch (FUNC_10(VAR_11, &VAR_16)) {
 case -1:
  FUNC_2(1, "%s", VAR_11);
 case 0:
  FUNC_3(1, "%s: Not a directory", VAR_11);
 default:
  break;
 }
 if (FUNC_0(VAR_11, VAR_7) < 0)
  FUNC_2(1, "Lack write permission in %s", VAR_11);
 if ((VAR_16.st_mode & VAR_6) && VAR_16.st_uid != FUNC_9())
  FUNC_3(1, "Lack write permission in %s: Sticky bit set", VAR_11);






 for (VAR_12 = VAR_14.f_mntonname; FUNC_11(VAR_12, &VAR_14) != 1;
     VAR_12 = FUNC_15(VAR_12 + 1, '/')) {
  if (VAR_12[0] == '\0')
   FUNC_3(1, "%s: Not a mount point", VAR_14.f_mntonname);
 }
 if (VAR_12 != VAR_14.f_mntonname)
  FUNC_16(VAR_14.f_mntonname, VAR_12, sizeof(VAR_14.f_mntonname));





 if ((VAR_15 = FUNC_8("operator")) == ((void*)0))
  FUNC_3(1, "Cannot retrieve operator gid");

 VAR_17 = ((void*)0);
 VAR_19 = 0;
 FUNC_1(&VAR_17, &VAR_19, "fstype", "ffs", 4);
 FUNC_1(&VAR_17, &VAR_19, "from", VAR_13, (size_t)-1);
 FUNC_1(&VAR_17, &VAR_19, "fspath", VAR_14.f_mntonname, (size_t)-1);
 FUNC_1(&VAR_17, &VAR_19, "errmsg", VAR_10, sizeof(VAR_10));
 FUNC_1(&VAR_17, &VAR_19, "update", ((void*)0), 0);
 FUNC_1(&VAR_17, &VAR_19, "snapshot", ((void*)0), 0);

 *VAR_10 = '\0';
 if (FUNC_12(VAR_17, VAR_19, VAR_14.f_flags) < 0) {
  VAR_10[sizeof(VAR_10) - 1] = '\0';
  FUNC_2(1, "Cannot create snapshot %s%s%s", VAR_13,
      *VAR_10 != '\0' ? ": " : "", VAR_10);
 }
 if ((VAR_18 = FUNC_13(VAR_13, VAR_1)) < 0)
  FUNC_2(1, "Cannot open %s", VAR_13);
 if (FUNC_7(VAR_18, &VAR_16) != 0)
  FUNC_2(1, "Cannot stat %s", VAR_13);
 if ((VAR_16.st_flags & VAR_3) == 0)
  FUNC_3(1, "File %s is not a snapshot", VAR_13);
 if (FUNC_6(VAR_18, -1, VAR_15->gr_gid) != 0)
  FUNC_2(1, "Cannot chown %s", VAR_13);
 if (FUNC_5(VAR_18, VAR_5 | VAR_4) != 0)
  FUNC_2(1, "Cannot chmod %s", VAR_13);

 FUNC_4(VAR_0);
}
