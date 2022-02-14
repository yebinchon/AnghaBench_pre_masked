
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct stat {int st_mode; scalar_t__ st_uid; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,size_t,char*,...) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,int) ;

int
FUNC_9(const char *VAR_2, struct stat *VAR_3, const char *VAR_4,
    uid_t VAR_5, char *VAR_6, size_t VAR_7)
{
 char VAR_8[VAR_0], VAR_9[VAR_0];
 char *VAR_10;
 int VAR_11 = 0;
 struct stat VAR_12;

 if (FUNC_3(VAR_2, VAR_8) == ((void*)0)) {
  FUNC_4(VAR_6, VAR_7, "realpath %s failed: %s", VAR_2,
      FUNC_7(VAR_1));
  return -1;
 }
 if (VAR_4 != ((void*)0) && FUNC_3(VAR_4, VAR_9) != ((void*)0))
  VAR_11 = 1;

 if (!FUNC_0(VAR_3->st_mode)) {
  FUNC_4(VAR_6, VAR_7, "%s is not a regular file", VAR_8);
  return -1;
 }
 if ((!FUNC_2(VAR_3->st_uid) && VAR_3->st_uid != VAR_5) ||
     (VAR_3->st_mode & 022) != 0) {
  FUNC_4(VAR_6, VAR_7, "bad ownership or modes for file %s",
      VAR_8);
  return -1;
 }


 for (;;) {
  if ((VAR_10 = FUNC_1(VAR_8)) == ((void*)0)) {
   FUNC_4(VAR_6, VAR_7, "dirname() failed");
   return -1;
  }
  FUNC_8(VAR_8, VAR_10, sizeof(VAR_8));

  if (FUNC_5(VAR_8, &VAR_12) < 0 ||
      (!FUNC_2(VAR_12.st_uid) && VAR_12.st_uid != VAR_5) ||
      (VAR_12.st_mode & 022) != 0) {
   FUNC_4(VAR_6, VAR_7,
       "bad ownership or modes for directory %s", VAR_8);
   return -1;
  }


  if (VAR_11 && FUNC_6(VAR_9, VAR_8) == 0)
   break;





  if ((FUNC_6("/", VAR_8) == 0) || (FUNC_6(".", VAR_8) == 0))
   break;
 }
 return 0;
}
