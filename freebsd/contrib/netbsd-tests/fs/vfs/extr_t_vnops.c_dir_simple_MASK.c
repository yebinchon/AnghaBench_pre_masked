
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int pb ;
typedef int atf_tc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char*,int,char*,char const*) ;

__attribute__((used)) static void
FUNC_6(const atf_tc_t *VAR_4, const char *VAR_5)
{
 char VAR_6[VAR_1];
 struct stat VAR_7;

 VAR_2;


 FUNC_5(VAR_6, sizeof(VAR_6), "%s/dir", VAR_5);
 if (FUNC_2(VAR_6, 0777) == -1)
  FUNC_1("mkdir");
 if (FUNC_4(VAR_6, &VAR_7) == -1)
  FUNC_1("stat new directory");


 if (FUNC_3(VAR_6) == -1)
  FUNC_1("rmdir");
 if (FUNC_4(VAR_6, &VAR_7) != -1 || VAR_3 != VAR_0)
  FUNC_0("ENOENT expected from stat");
}
