
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct stat {int st_mode; scalar_t__ st_uid; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct passwd {scalar_t__ pw_uid; int pw_dir; } ;
typedef int ss ;
typedef int pbuf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,struct sockaddr const*,int,char const*,char const*) ;
 char* VAR_5 ;
 scalar_t__ FUNC_2 (int ,struct stat*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 () ;
 struct passwd* FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*,struct stat*) ;
 int FUNC_9 (struct sockaddr_storage*,void const*,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,int ,int) ;

int
FUNC_13(const void *VAR_6, int VAR_7, int VAR_8, const char *VAR_9,
    const char *VAR_10)
{
 char *VAR_11;
 struct stat VAR_12;
 struct passwd *VAR_13;
 FILE *VAR_14;
 uid_t VAR_15;
 int VAR_16;
 char VAR_17[VAR_0];
 const struct sockaddr *VAR_18;
 struct sockaddr_storage VAR_19;


 if (VAR_7 > sizeof(VAR_19))
  return(-1);
 FUNC_9(&VAR_19, VAR_6, VAR_7);
 VAR_18 = (struct sockaddr *)&VAR_19;

 VAR_16 = 1;
 VAR_14 = VAR_8 ? ((void*)0) : FUNC_5(VAR_3, "re");
again:
 if (VAR_14) {
  if (FUNC_1(VAR_14, VAR_18, VAR_7, VAR_10, VAR_9) == 0) {
   (void)FUNC_3(VAR_14);
   return (0);
  }
  (void)FUNC_3(VAR_14);
 }
 if (VAR_16 == 1 && (VAR_4 || VAR_8)) {
  VAR_16 = 0;
  if ((VAR_13 = FUNC_7(VAR_10)) == ((void*)0))
   return (-1);
  (void)FUNC_12(VAR_17, VAR_13->pw_dir, sizeof(VAR_17));
  (void)FUNC_11(VAR_17, "/.rhosts", sizeof(VAR_17));






  VAR_15 = FUNC_6();
  (void)FUNC_10(VAR_13->pw_uid);
  VAR_14 = FUNC_5(VAR_17, "re");
  (void)FUNC_10(VAR_15);

  if (VAR_14 == ((void*)0))
   return (-1);




  VAR_11 = ((void*)0);
  if (FUNC_8(VAR_17, &VAR_12) < 0)
   VAR_11 = ".rhosts lstat failed";
  else if (!FUNC_0(VAR_12.st_mode))
   VAR_11 = ".rhosts not regular file";
  else if (FUNC_2(FUNC_4(VAR_14), &VAR_12) < 0)
   VAR_11 = ".rhosts fstat failed";
  else if (VAR_12.st_uid && VAR_12.st_uid != VAR_13->pw_uid)
   VAR_11 = "bad .rhosts owner";
  else if (VAR_12.st_mode & (VAR_1|VAR_2))
   VAR_11 = ".rhosts writeable by other than owner";

  if (VAR_11) {
   VAR_5 = VAR_11;
   (void)FUNC_3(VAR_14);
   return (-1);
  }
  goto again;
 }
 return (-1);
}
