
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {int d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 int ** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int * FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 struct dirent* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,struct stat*) ;
 int FUNC_6 (int ,char*,int ) ;

int
FUNC_7(void)
{
 DIR *VAR_6;
 struct stat VAR_7;
 struct dirent *VAR_8;
 int VAR_9;




 for (VAR_9 = 0; VAR_9 < VAR_2 && VAR_1[VAR_9] != ((void*)0); VAR_9++) {
  FUNC_0(VAR_1[VAR_9]);
  VAR_1[VAR_9] = ((void*)0);
 }




 if ((VAR_6 = FUNC_3(".")) == ((void*)0)) {
  FUNC_6(VAR_3, "GetBootFiles: can't open directory (%s)\n",
         VAR_0);
  return(0);
 }






 VAR_9 = 0;
 for (VAR_8 = FUNC_4(VAR_6); VAR_8 != ((void*)0); VAR_8 = FUNC_4(VAR_6)) {
  if (FUNC_5(VAR_8->d_name, &VAR_7) < 0 ||
      (VAR_7.st_mode & VAR_4) != VAR_5)
   continue;
  if (VAR_9 == VAR_2)
   FUNC_6(VAR_3,
          "GetBootFiles: too many boot files (%s ignored)",
          VAR_8->d_name);
  else if ((VAR_1[VAR_9] = FUNC_1(VAR_8->d_name)) != ((void*)0))
   VAR_9++;
 }

 (void) FUNC_2(VAR_6);

 if (VAR_9 == 0)
  FUNC_6(VAR_3, "GetBootFiles: no boot files (%s)\n", VAR_0);

 return(VAR_9);
}
