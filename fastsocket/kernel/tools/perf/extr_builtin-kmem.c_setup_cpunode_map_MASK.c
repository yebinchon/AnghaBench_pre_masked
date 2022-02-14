
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; char* d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int *) ;
 unsigned int* VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (char*) ;
 struct dirent* FUNC_3 (int *) ;
 int FUNC_4 (char*,int,char*,char*,char*) ;
 int FUNC_5 (char*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct dirent *VAR_5, *VAR_6;
 DIR *VAR_7, *VAR_8;
 unsigned int VAR_9, VAR_10;
 char VAR_11[VAR_2];

 if (FUNC_1())
  return -1;

 VAR_7 = FUNC_2(VAR_3);
 if (!VAR_7)
  return 0;

 while ((VAR_5 = FUNC_3(VAR_7)) != ((void*)0)) {
  if (VAR_5->d_type != VAR_0 ||
      FUNC_5(VAR_5->d_name, "node%u", &VAR_10) < 1)
   continue;

  FUNC_4(VAR_11, VAR_2, "%s/%s", VAR_3, VAR_5->d_name);
  VAR_8 = FUNC_2(VAR_11);
  if (!VAR_8)
   continue;
  while ((VAR_6 = FUNC_3(VAR_8)) != ((void*)0)) {
   if (VAR_6->d_type != VAR_1 ||
       FUNC_5(VAR_6->d_name, "cpu%u", &VAR_9) < 1)
    continue;
   VAR_4[VAR_9] = VAR_10;
  }
  FUNC_0(VAR_8);
 }
 FUNC_0(VAR_7);
 return 0;
}
