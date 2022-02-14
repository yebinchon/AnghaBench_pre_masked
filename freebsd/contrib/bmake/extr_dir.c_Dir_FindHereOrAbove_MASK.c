
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int try ;
struct stat {int st_mode; } ;
typedef int dirbase ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct stat*) ;
 int FUNC_1 (char*,int,char*,char*,...) ;
 int FUNC_2 (char*) ;

int
FUNC_3(char *VAR_3, char *VAR_4, char *VAR_5, int VAR_6) {

 struct stat VAR_7;
 char VAR_8[VAR_0 + 1], *VAR_9;
        char VAR_10[VAR_0 + 1], *VAR_11;


 FUNC_1(VAR_8, sizeof(VAR_8), "%s", VAR_3);
 VAR_9 = VAR_8 + FUNC_2(VAR_8);


 while (1) {


  FUNC_1(VAR_10, sizeof(VAR_10), "%s/%s", VAR_8, VAR_4);
  if (FUNC_0(VAR_10, &VAR_7) != -1) {




   if ((VAR_7.st_mode & VAR_2) != VAR_1) {
    VAR_11 = VAR_10 + FUNC_2(VAR_10);
    while (VAR_11 > VAR_10 && *VAR_11 != '/')
     VAR_11--;
    if (VAR_11 > VAR_10)
     *VAR_11 = 0;
   }




   FUNC_1(VAR_5, VAR_6, "%s", VAR_10);
   return(1);
  }





  if (VAR_9 == VAR_8)
   break;




  while (VAR_9 > VAR_8 && *VAR_9 != '/')
   VAR_9--;
  *VAR_9 = 0;

 }




 return(0);
}
