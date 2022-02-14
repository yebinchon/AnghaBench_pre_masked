
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {char* d_name; scalar_t__ d_type; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;
 struct dirent* FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,char const*,char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3)
{
 DIR *VAR_4;
 struct dirent *VAR_5;
 int VAR_6 = 1;

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
  return 0;

 while ((VAR_5 = FUNC_3(VAR_4)) != ((void*)0)) {
  if (!FUNC_6(VAR_5->d_name, ".") || !FUNC_6(VAR_5->d_name, ".."))
   continue;

  if (VAR_5->d_type == VAR_0) {
   VAR_6 = 0;
   break;
  } else if (VAR_5->d_type == VAR_1) {
   char VAR_7[VAR_2];
   struct stat VAR_8;

   FUNC_4(VAR_7, "%s/%s", VAR_3, VAR_5->d_name);
   if (FUNC_5(VAR_7, &VAR_8))
    break;

   if (FUNC_0(VAR_8.st_mode)) {
    VAR_6 = 0;
    break;
   }
  }
 }

 FUNC_1(VAR_4);

 return VAR_6;
}
