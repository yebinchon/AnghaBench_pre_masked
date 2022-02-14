
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dirent {char* d_name; } ;
typedef int FILE ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int * FUNC_3 (char*) ;
 int * VAR_2 ;
 int FUNC_4 (struct list_head*,char*) ;
 struct dirent* FUNC_5 (int *) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 int FUNC_7 (char*,char*) ;

int FUNC_8(char *VAR_3, struct list_head *VAR_4)
{
 struct dirent *VAR_5;
 DIR *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_3(VAR_3);
 if (!VAR_6)
  return -VAR_0;

 while (!VAR_7 && (VAR_5 = FUNC_5(VAR_6))) {
  char VAR_8[VAR_1];
  char *VAR_9 = VAR_5->d_name;
  FILE *VAR_10;

  if (!FUNC_7(VAR_9, ".") || !FUNC_7(VAR_9, ".."))
   continue;

  FUNC_6(VAR_8, VAR_1, "%s/%s", VAR_3, VAR_9);

  VAR_7 = -VAR_0;
  VAR_10 = FUNC_2(VAR_8, "r");
  if (!VAR_10)
   break;

  VAR_2 = VAR_10;
  VAR_7 = FUNC_4(VAR_4, VAR_9);
  FUNC_1(VAR_10);
 }

 FUNC_0(VAR_6);
 return VAR_7;
}
