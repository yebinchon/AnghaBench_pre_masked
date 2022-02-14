
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int dev_dir ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 struct dirent* FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 char* VAR_6 ;
 int FUNC_4 (int ,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_6(const char *VAR_7, int VAR_8)
{
 DIR *VAR_9;
 struct dirent *VAR_10;
 char VAR_11[VAR_3];

 FUNC_3(VAR_11, sizeof(VAR_11), "%s/%s", VAR_6, VAR_4);
 VAR_11[sizeof(VAR_11)-1] = '\0';

 VAR_9 = FUNC_1(VAR_11);
 if (!VAR_9) {
  FUNC_4(VAR_2, "Failed to open %s", VAR_11);
  return -VAR_0;
 }

 while ((VAR_10 = FUNC_2(VAR_9))) {
  int VAR_12 = VAR_5;
  if (VAR_10->d_name[0] == '.')
   continue;

  while (FUNC_5(VAR_10->d_name, VAR_7, VAR_8) && VAR_12 > 0) {
   FUNC_4(VAR_1, "retrying set Node Description on %s\n",
    VAR_10->d_name);
   VAR_12--;
  }
 }

 FUNC_0(VAR_9);
 return 0;
}
