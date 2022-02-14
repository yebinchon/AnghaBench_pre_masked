
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
 int FUNC_4 (struct list_head*,char*,int *) ;
 struct dirent* FUNC_5 (int *) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int FUNC_8(char *VAR_2, struct list_head *VAR_3)
{
 struct dirent *VAR_4;
 DIR *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_3(VAR_2);
 if (!VAR_5)
  return -VAR_0;

 while (!VAR_6 && (VAR_4 = FUNC_5(VAR_5))) {
  char VAR_7[VAR_1];
  char *VAR_8 = VAR_4->d_name;
  FILE *VAR_9;

  if (!FUNC_7(VAR_8, ".") || !FUNC_7(VAR_8, ".."))
   continue;

  FUNC_6(VAR_7, VAR_1, "%s/%s", VAR_2, VAR_8);

  VAR_6 = -VAR_0;
  VAR_9 = FUNC_2(VAR_7, "r");
  if (!VAR_9)
   break;
  VAR_6 = FUNC_4(VAR_3, VAR_8, VAR_9);
  FUNC_1(VAR_9);
 }

 FUNC_0(VAR_5);
 return VAR_6;
}
