
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void
FUNC_7(const atf_tc_t *VAR_3, const char *VAR_4)
{

 if (FUNC_0(VAR_3))
  FUNC_3("rename not supported by file system");

 VAR_1;

 if (FUNC_4(VAR_4) == -1)
  FUNC_2("chdir mountpoint");

 if (FUNC_5("dir1", 0777) == -1)
  FUNC_2("mkdir 1");
 if (FUNC_5("dir2", 0777) == -1)
  FUNC_2("mkdir 2");

 if (FUNC_6("dir1", "dir1/..") != -1 || VAR_2 != VAR_0)
  FUNC_2("self-dotdot to");

 if (FUNC_6("dir1/..", "sometarget") != -1 || VAR_2 != VAR_0)
  FUNC_2("self-dotdot from");

 if (FUNC_6("dir1", "dir2/..") != -1 || VAR_2 != VAR_0)
  FUNC_1("other-dotdot");

 FUNC_4("/");
}
