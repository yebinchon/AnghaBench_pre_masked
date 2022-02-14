
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_nlink; } ;
typedef int pb3 ;
typedef int pb2 ;
typedef int pb1 ;
typedef int atf_tc_t ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,struct stat*) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (char*,int,char const*,char*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,struct stat*) ;

__attribute__((used)) static void
FUNC_14(const atf_tc_t *VAR_7, const char *VAR_8)
{
 char VAR_9[VAR_3], VAR_10[VAR_3], VAR_11[VAR_3];
 struct stat VAR_12, VAR_13;

 if (FUNC_2(VAR_7))
  FUNC_6("rename not supported by file system");

 VAR_5;

 FUNC_8(VAR_9, sizeof(VAR_9), VAR_8, "dir1");
 if (FUNC_9(VAR_9, 0777) == -1)
  FUNC_5("mkdir 1");

 FUNC_8(VAR_10, sizeof(VAR_10), VAR_8, "dir2");
 if (FUNC_9(VAR_10, 0777) == -1)
  FUNC_5("mkdir 2");
 FUNC_8(VAR_10, sizeof(VAR_10), VAR_8, "dir2/subdir");
 if (FUNC_9(VAR_10, 0777) == -1)
  FUNC_5("mkdir 3");

 FUNC_8(VAR_11, sizeof(VAR_11), VAR_8, "dir1/file");
 if (FUNC_10(VAR_11, VAR_4 | 0777, -1) == -1)
  FUNC_5("create file");
 if (FUNC_13(VAR_11, &VAR_12) == -1)
  FUNC_5("stat of file");






 FUNC_8(VAR_11, sizeof(VAR_11), VAR_8, "dir3");
 if (FUNC_11(VAR_9, VAR_11) == -1)
  FUNC_5("rename 1");
 FUNC_7(VAR_11, &VAR_12);


 FUNC_8(VAR_9, sizeof(VAR_9), VAR_8, "dir3/.");
 if (FUNC_11(VAR_9, VAR_11) != -1 || VAR_6 != VAR_0)
  FUNC_5("rename 2");
 if (FUNC_11(VAR_11, VAR_9) != -1 || VAR_6 != VAR_1)
  FUNC_5("rename 3");

 FUNC_7(VAR_11, &VAR_12);


 FUNC_8(VAR_9, sizeof(VAR_9), VAR_8, "dir2/dir");
 FUNC_8(VAR_10, sizeof(VAR_10), VAR_8, "dir2");
 if (FUNC_11(VAR_10, VAR_9) != -1 || VAR_6 != VAR_0)
  FUNC_5("rename 4");


 FUNC_8(VAR_9, sizeof(VAR_9), VAR_8, "dir2/subdir/dir2");
 if (FUNC_11(VAR_10, VAR_9) != -1 || VAR_6 != VAR_0)
  FUNC_4("rename 5");

 FUNC_7(VAR_11, &VAR_12);


 if (FUNC_11(VAR_10, VAR_11) != -1 || VAR_6 != VAR_2)
  FUNC_4("rename 6");


 FUNC_8(VAR_9, sizeof(VAR_9), VAR_8, "dir3");
 FUNC_8(VAR_10, sizeof(VAR_10), VAR_8, "dir2/somedir");
 if (FUNC_11(VAR_9, VAR_10) == -1)
  FUNC_5("rename 7");
 FUNC_7(VAR_10, &VAR_12);


 FUNC_8(VAR_9, sizeof(VAR_9), VAR_8, "dir2/somedir/../../dir3");
 if (FUNC_11(VAR_10, VAR_9) == -1)
  FUNC_5("rename 8");
 FUNC_8(VAR_9, sizeof(VAR_9), VAR_8, "dir2/../dir3");
 FUNC_7(VAR_9, &VAR_12);


 FUNC_8(VAR_11, sizeof(VAR_11), VAR_8, "dir2/subdir");
 if (FUNC_11(VAR_9, VAR_11) == -1)
  FUNC_5("rename 9");
 FUNC_7(VAR_11, &VAR_12);


 FUNC_8(VAR_9, sizeof(VAR_9), VAR_8, "parent");
 FUNC_8(VAR_10, sizeof(VAR_10), VAR_8, "parent/dir1");
 FUNC_8(VAR_11, sizeof(VAR_11), VAR_8, "parent/dir2");
 FUNC_3(FUNC_9(VAR_9, 0777));
 FUNC_3(FUNC_9(VAR_10, 0777));
 FUNC_3(FUNC_9(VAR_11, 0777));
 FUNC_3(FUNC_11(VAR_10, VAR_11));

 FUNC_3(FUNC_13(VAR_9, &VAR_13));
 if (! FUNC_1(VAR_7))
  FUNC_0(VAR_13.st_nlink, 3);
 FUNC_3(FUNC_12(VAR_11));
 FUNC_3(FUNC_12(VAR_9));
}
