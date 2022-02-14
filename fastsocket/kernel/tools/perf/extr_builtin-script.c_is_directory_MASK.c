
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char const*,char*) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, const struct dirent *VAR_2)
{
 char VAR_3[VAR_0];
 struct stat VAR_4;

 FUNC_1(VAR_3, "%s/%s", VAR_1, VAR_2->d_name);
 if (FUNC_2(VAR_3, &VAR_4))
  return 0;

 return FUNC_0(VAR_4.st_mode);
}
