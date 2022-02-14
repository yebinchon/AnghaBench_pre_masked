
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int dummy; } ;
struct cpa {int c; char** a; } ;
typedef int execname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cpa*,char*) ;
 char* FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char const*,char*,char**) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*,struct cpa*) ;
 int FUNC_6 (char const*,int,char**) ;
 char* VAR_6 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct statfs*) ;
 int FUNC_9 (struct statfs*) ;
 int FUNC_10 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_11 (char const*,struct statfs*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 char* FUNC_13 (char const*) ;
 int FUNC_14 (char*,char*,int) ;
 scalar_t__ FUNC_15 (char const*) ;
 scalar_t__ VAR_7 ;
 int FUNC_16 (char*,char const*) ;

int
FUNC_17(const char *VAR_8, const char *VAR_9, const char *VAR_10, int VAR_11,
 const char *VAR_12, const char *VAR_13)
{
 struct statfs VAR_14;
 int VAR_15, VAR_16;
 char *VAR_17, VAR_18[VAR_3], VAR_19[VAR_3];
 static struct cpa VAR_20;


 if (FUNC_2(VAR_10, VAR_19) != 0) {
  FUNC_16("%s", VAR_19);
  return (1);
 }
 VAR_10 = VAR_19;

 if (VAR_13 == ((void*)0))
  VAR_13 = "";
 VAR_17 = FUNC_1(FUNC_13(VAR_13), VAR_12);

 if (FUNC_12(VAR_10, "/") == 0)
  VAR_11 |= VAR_2;
 if (VAR_11 & VAR_0)
  VAR_17 = FUNC_1(VAR_17, "force");
 if (VAR_11 & VAR_1)
  VAR_17 = FUNC_1(VAR_17, "ro");






 if (VAR_11 & VAR_2)
  VAR_17 = FUNC_1(VAR_17, "update");


 if (FUNC_12(VAR_8, "msdos") == 0)
  VAR_8 = "msdosfs";


 (void)FUNC_10(VAR_18, sizeof(VAR_18), "mount_%s", VAR_8);

 VAR_20.c = -1;
 FUNC_0(&VAR_20, VAR_18);
 FUNC_5(VAR_17, &VAR_20);
 if (VAR_6 != ((void*)0))
  FUNC_14(VAR_18, VAR_6, sizeof(VAR_18));

 FUNC_0(&VAR_20, FUNC_13(VAR_9));
 FUNC_0(&VAR_20, FUNC_13(VAR_10));
 FUNC_0(&VAR_20, ((void*)0));

 if (VAR_4) {
  if (FUNC_15(VAR_8))
   FUNC_7("exec: %s", VAR_18);
  else
   FUNC_7("mount -t %s", VAR_8);
  for (VAR_15 = 1; VAR_15 < VAR_20.c; VAR_15++)
   (void)FUNC_7(" %s", VAR_20.a[VAR_15]);
  (void)FUNC_7("\n");
  FUNC_4(VAR_17);
  FUNC_4(VAR_6);
  VAR_6 = ((void*)0);
  return (0);
 }

 if (FUNC_15(VAR_8)) {
  VAR_16 = FUNC_3(VAR_10, VAR_18, VAR_20.a);
 } else {
  VAR_16 = FUNC_6(VAR_8, VAR_20.c, VAR_20.a);
 }

 FUNC_4(VAR_17);
 FUNC_4(VAR_6);
 VAR_6 = ((void*)0);

 if (VAR_7) {
  if (FUNC_11(VAR_10, &VAR_14) < 0) {
   FUNC_16("statfs %s", VAR_10);
   return (1);
  }
  if (VAR_5)
   FUNC_9(&VAR_14);
  else
   FUNC_8(&VAR_14);
 }

 return (VAR_16);
}
