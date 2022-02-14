
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;

__attribute__((used)) static int
FUNC_4(const char* VAR_2)
{
 struct stat VAR_3;
 if(FUNC_3(VAR_2, &VAR_3) < 0) {
  if(VAR_1==VAR_0) {
   FUNC_2("warning: no search permission for one of the directories in path: %s\n", VAR_2);
   return 1;
  }
  FUNC_1(VAR_2);
  return 0;
 }
 if(FUNC_0(VAR_3.st_mode)) {
  FUNC_2("%s is not a file\n", VAR_2);
  return 0;
 }
 return 1;
}
