
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct statfs {char* f_mntfromname; } const statfs ;
struct stat {scalar_t__ st_rdev; int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct statfs const**,int ) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static const struct statfs *
FUNC_6(const char *VAR_3)
{
 struct stat VAR_4, VAR_5;
 struct statfs *VAR_6, *VAR_7;
 char VAR_8[VAR_0];
 char *VAR_9;
 int VAR_10, VAR_11;




 if (FUNC_3(VAR_3, &VAR_4) != 0)
  return (((void*)0));
 if (!FUNC_1(VAR_4.st_mode) && !FUNC_0(VAR_4.st_mode))
  return (((void*)0));

 VAR_11 = FUNC_2(&VAR_6, VAR_1);
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  VAR_7 = &VAR_6[VAR_10];
  VAR_9 = VAR_7->f_mntfromname;
  if (*VAR_9 != '/') {
   FUNC_5(VAR_8, VAR_2);
   FUNC_4(VAR_8, VAR_9);
   VAR_9 = VAR_8;
  }
  if (FUNC_3(VAR_9, &VAR_5) == 0 &&
      VAR_5.st_rdev == VAR_4.st_rdev)
   return (VAR_7);
 }

 return (((void*)0));
}
