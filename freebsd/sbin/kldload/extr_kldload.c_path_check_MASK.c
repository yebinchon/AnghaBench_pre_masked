
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int,char*,unsigned long) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 size_t FUNC_3 (int*) ;
 int FUNC_4 (char const*,struct stat*) ;
 int * FUNC_5 (char const*,char) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char**,char*) ;
 int * FUNC_10 (char const*,char*) ;
 int FUNC_11 (int*,size_t,char*,size_t*,int *,int ) ;
 scalar_t__ FUNC_12 (unsigned long,int*,size_t*) ;
 int FUNC_13 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_14(const char *VAR_2, int VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;
 struct stat VAR_7;
 int VAR_8[5];
 char VAR_9[VAR_0];
 size_t VAR_10, VAR_11;
 dev_t VAR_12;
 ino_t VAR_13;
 int VAR_14;

 if (FUNC_5(VAR_2, '/') != ((void*)0))
  return (0);
 if (FUNC_10(VAR_2, ".ko") == ((void*)0))
  return (0);
 if (FUNC_4(VAR_2, &VAR_7) != 0)
  return (0);

 VAR_14 = 0;
 VAR_12 = VAR_7.st_dev;
 VAR_13 = VAR_7.st_ino;

 VAR_10 = FUNC_3(VAR_8);
 if (FUNC_12(VAR_1, VAR_8, &VAR_10) != 0)
  FUNC_0(1, "sysctlnametomib(%s)", VAR_1);
 if (FUNC_11(VAR_8, VAR_10, ((void*)0), &VAR_11, ((void*)0), 0) == -1)
  FUNC_0(1, "getting path: sysctl(%s) - size only", VAR_1);
 VAR_4 = FUNC_2(VAR_11 + 1);
 if (VAR_4 == ((void*)0))
  FUNC_0(1, "allocating %lu bytes for the path",
      (unsigned long)VAR_11 + 1);
 if (FUNC_11(VAR_8, VAR_10, VAR_4, &VAR_11, ((void*)0), 0) == -1)
  FUNC_0(1, "getting path: sysctl(%s)", VAR_1);
 VAR_5 = VAR_4;

 while ((VAR_6 = FUNC_9(&VAR_5, ";")) != ((void*)0)) {
  FUNC_7(VAR_9, VAR_6, VAR_0);
  if (VAR_9[FUNC_8(VAR_9) - 1] != '/') {
   FUNC_6(VAR_9, "/", VAR_0);
  }
  FUNC_6(VAR_9, VAR_2, VAR_0);

  if (FUNC_4(VAR_9, &VAR_7) == -1)
   continue;

  VAR_14 = 1;

  if (VAR_7.st_dev != VAR_12 || VAR_7.st_ino != VAR_13) {
   if (!VAR_3)
    FUNC_13("%s will be loaded from %s, not the "
        "current directory", VAR_2, VAR_6);
   break;
  } else if (VAR_7.st_dev == VAR_12 && VAR_7.st_ino == VAR_13)
   break;
 }

 FUNC_1(VAR_4);

 if (!VAR_14) {
  if (!VAR_3)
   FUNC_13("%s is not in the module path", VAR_2);
  return (-1);
 }

 return (0);
}
