
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_ino; int st_nlink; } ;
typedef int ino_t ;
typedef int atf_tc_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,struct stat*) ;

__attribute__((used)) static void
FUNC_12(const atf_tc_t *VAR_4, const char *VAR_5)
{
 bool VAR_6;
 struct stat VAR_7;
 ino_t VAR_8;

 if (FUNC_3(VAR_4))
  FUNC_6("rename not supported by file system");

 if (FUNC_7(VAR_5) == -1)
  FUNC_5("chdir mountpoint");

 if (FUNC_2(VAR_4) || FUNC_4(VAR_4))
  VAR_6 = 0;
 else
  VAR_6 = 1;

 if (FUNC_9("file1", VAR_2 | 0777, -1) == -1)
  FUNC_5("create file");
 if (FUNC_9("file2", VAR_2 | 0777, -1) == -1)
  FUNC_5("create file");

 if (FUNC_11("file1", &VAR_7) == -1)
  FUNC_5("stat");
 VAR_8 = VAR_7.st_ino;

 if (VAR_6) {
  if (FUNC_8("file1", "file_link") == -1)
   FUNC_5("link");
  if (FUNC_11("file_link", &VAR_7) == -1)
   FUNC_5("stat");
  FUNC_1(VAR_7.st_ino, VAR_8);
  FUNC_1(VAR_7.st_nlink, 2);
 }

 if (FUNC_11("file2", &VAR_7) == -1)
  FUNC_5("stat");

 if (FUNC_10("file1", "file3") == -1)
  FUNC_5("rename 1");
 if (FUNC_11("file3", &VAR_7) == -1)
  FUNC_5("stat 1");
 if (VAR_6) {
  FUNC_1(VAR_7.st_ino, VAR_8);
 }
 if (FUNC_11("file1", &VAR_7) != -1 || VAR_3 != VAR_1)
  FUNC_5("source 1");

 if (FUNC_10("file3", "file2") == -1)
  FUNC_5("rename 2");
 if (FUNC_11("file2", &VAR_7) == -1)
  FUNC_5("stat 2");
 if (VAR_6) {
  FUNC_1(VAR_7.st_ino, VAR_8);
 }

 if (FUNC_11("file3", &VAR_7) != -1 || VAR_3 != VAR_1)
  FUNC_5("source 2");

 if (VAR_6) {
  if (FUNC_10("file2", "file_link") == -1)
   FUNC_5("rename hardlink");
  if (FUNC_11("file2", &VAR_7) != -1 || VAR_3 != VAR_1)
   FUNC_5("source 3");
  if (FUNC_11("file_link", &VAR_7) == -1)
   FUNC_5("stat 2");
  FUNC_1(VAR_7.st_ino, VAR_8);
  FUNC_1(VAR_7.st_nlink, 1);
 }

 FUNC_0(VAR_0, FUNC_10("file2", ((void*)0)) == -1);
 FUNC_0(VAR_0, FUNC_10(((void*)0), "file2") == -1);

 FUNC_7("/");
}
