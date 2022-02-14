
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_path {int dummy; } ;
struct stat {int dummy; } ;
struct dirent {scalar_t__ d_type; char* d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct tracepoint_path*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 struct dirent* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,char*,char*,char*) ;
 int FUNC_11 (char*,struct stat*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,struct tracepoint_path*) ;
 int FUNC_15 (int*,int) ;

__attribute__((used)) static void FUNC_16(struct tracepoint_path *VAR_1)
{
 struct dirent *VAR_2;
 struct stat VAR_3;
 char *VAR_4;
 char *VAR_5;
 DIR *VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 VAR_4 = FUNC_4("events");

 VAR_6 = FUNC_6(VAR_4);
 if (!VAR_6)
  FUNC_2("can't read directory '%s'", VAR_4);

 while ((VAR_2 = FUNC_8(VAR_6))) {
  if (VAR_2->d_type != VAR_0 ||
      FUNC_12(VAR_2->d_name, ".") == 0 ||
      FUNC_12(VAR_2->d_name, "..") == 0 ||
      FUNC_12(VAR_2->d_name, "ftrace") == 0 ||
      !FUNC_14(VAR_2->d_name, VAR_1))
   continue;
  VAR_7++;
 }

 FUNC_15(&VAR_7, 4);

 FUNC_9(VAR_6);
 while ((VAR_2 = FUNC_8(VAR_6))) {
  if (VAR_2->d_type != VAR_0 ||
      FUNC_12(VAR_2->d_name, ".") == 0 ||
      FUNC_12(VAR_2->d_name, "..") == 0 ||
      FUNC_12(VAR_2->d_name, "ftrace") == 0 ||
      !FUNC_14(VAR_2->d_name, VAR_1))
   continue;
  VAR_5 = FUNC_5(FUNC_13(VAR_4) + FUNC_13(VAR_2->d_name) + 2);
  FUNC_10(VAR_5, "%s/%s", VAR_4, VAR_2->d_name);
  VAR_8 = FUNC_11(VAR_5, &VAR_3);
  if (VAR_8 >= 0) {
   FUNC_15(VAR_2->d_name, FUNC_13(VAR_2->d_name) + 1);
   FUNC_1(VAR_5, VAR_1);
  }
  FUNC_3(VAR_5);
 }

 FUNC_0(VAR_6);
 FUNC_7(VAR_4);
}
