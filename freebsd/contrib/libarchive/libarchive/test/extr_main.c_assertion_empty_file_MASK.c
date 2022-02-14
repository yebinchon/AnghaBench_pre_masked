
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef int ssize_t ;
typedef scalar_t__ off_t ;
typedef int buff ;
typedef int FILE ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int,char*,char const*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,int,int ,int *) ;
 int FUNC_6 (char*,int *,int ,int ) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (char const*,struct stat*) ;

int
FUNC_9(const char *VAR_0, int VAR_1, const char *VAR_2)
{
 char VAR_3[1024];
 struct stat VAR_4;
 ssize_t VAR_5;
 FILE *VAR_6;

 FUNC_0(VAR_0, VAR_1);

 if (FUNC_8(VAR_2, &VAR_4) != 0) {
  FUNC_2(VAR_0, VAR_1, "Stat failed: %s", VAR_2);
  FUNC_1(((void*)0));
  return (0);
 }
 if (VAR_4.st_size == 0)
  return (1);

 FUNC_2(VAR_0, VAR_1, "File should be empty: %s", VAR_2);
 FUNC_7("    File size: %d\n", (int)VAR_4.st_size);
 FUNC_7("    Contents:\n");
 VAR_6 = FUNC_4(VAR_2, "rb");
 if (VAR_6 == ((void*)0)) {
  FUNC_7("    Unable to open %s\n", VAR_2);
 } else {
  VAR_5 = ((off_t)sizeof(VAR_3) < VAR_4.st_size) ?
      (ssize_t)sizeof(VAR_3) : (ssize_t)VAR_4.st_size;
  VAR_5 = FUNC_5(VAR_3, 1, VAR_5, VAR_6);
  FUNC_6(VAR_3, ((void*)0), VAR_5, 0);
  FUNC_3(VAR_6);
 }
 FUNC_1(((void*)0));
 return (0);
}
