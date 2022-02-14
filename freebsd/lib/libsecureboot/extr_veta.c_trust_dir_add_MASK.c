
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
typedef scalar_t__ ssize_t ;
typedef int fbuf ;
typedef int DIR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;
 struct dirent* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static size_t
FUNC_7(const char *VAR_1)
{
 char VAR_2[VAR_0];
 DIR *VAR_3;
 struct dirent *VAR_4;
 struct stat VAR_5;
 ssize_t VAR_6;
 size_t VAR_7;

 if (!(VAR_3 = FUNC_2(VAR_1)))
  return (0);
 for (VAR_7 = 0, VAR_4 = FUNC_3(VAR_3); VAR_4; VAR_4 = FUNC_3(VAR_3)) {
  if (VAR_4->d_name[0] == '.')
   continue;
  VAR_6 = FUNC_4(VAR_2, sizeof(VAR_2), "%s/%s", VAR_1, VAR_4->d_name);
  if (VAR_6 >= (ssize_t)sizeof(VAR_2))
   continue;
  if (FUNC_5(VAR_2, &VAR_5) < 0 || FUNC_0(VAR_5.st_mode))
   continue;
  VAR_7 += FUNC_6(VAR_2);
 }
 FUNC_1(VAR_3);
 return (VAR_7);
}
