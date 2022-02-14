
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_path {int dummy; } ;
struct stat {int dummy; } ;
struct dirent {scalar_t__ d_type; char const* d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char const*,struct tracepoint_path*) ;
 int * FUNC_5 (char const*) ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char*,char const*,char const*) ;
 int FUNC_10 (char*,struct stat*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 scalar_t__ FUNC_12 (char const*) ;
 int FUNC_13 (int*,int) ;

__attribute__((used)) static void FUNC_14(const char *VAR_1, struct tracepoint_path *VAR_2)
{
 struct dirent *VAR_3;
 struct stat VAR_4;
 char *VAR_5;
 DIR *VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 VAR_6 = FUNC_5(VAR_1);
 if (!VAR_6)
  FUNC_1("can't read directory '%s'", VAR_1);

 while ((VAR_3 = FUNC_6(VAR_6))) {
  if (VAR_3->d_type != VAR_0 ||
      FUNC_11(VAR_3->d_name, ".") == 0 ||
      FUNC_11(VAR_3->d_name, "..") == 0 ||
      !FUNC_4(VAR_3->d_name, VAR_2))
   continue;
  VAR_5 = FUNC_3(FUNC_12(VAR_1) + FUNC_12(VAR_3->d_name) + 10);
  FUNC_9(VAR_5, "%s/%s/format", VAR_1, VAR_3->d_name);
  VAR_8 = FUNC_10(VAR_5, &VAR_4);
  FUNC_2(VAR_5);
  if (VAR_8 < 0)
   continue;
  VAR_7++;
 }

 FUNC_13(&VAR_7, 4);

 FUNC_8(VAR_6);
 while ((VAR_3 = FUNC_6(VAR_6))) {
  if (VAR_3->d_type != VAR_0 ||
      FUNC_11(VAR_3->d_name, ".") == 0 ||
      FUNC_11(VAR_3->d_name, "..") == 0 ||
      !FUNC_4(VAR_3->d_name, VAR_2))
   continue;
  VAR_5 = FUNC_3(FUNC_12(VAR_1) + FUNC_12(VAR_3->d_name) + 10);
  FUNC_9(VAR_5, "%s/%s/format", VAR_1, VAR_3->d_name);
  VAR_8 = FUNC_10(VAR_5, &VAR_4);

  if (VAR_8 >= 0)
   FUNC_7(VAR_5, 8);

  FUNC_2(VAR_5);
 }
 FUNC_0(VAR_6);
}
