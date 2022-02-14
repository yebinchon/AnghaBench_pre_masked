
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char*,char) ;

int
FUNC_6(const char *VAR_4, mode_t VAR_5)
{
 char *VAR_6, *VAR_7, *VAR_8, *VAR_9;

 VAR_9 = FUNC_3(VAR_4);



 if (VAR_9 == ((void*)0))
  return (-1);



 if (FUNC_2(VAR_9, VAR_5) == 0) {
  FUNC_1(VAR_9);
  return (0);
 }
 if (VAR_3 != VAR_1) {
  FUNC_1(VAR_9);
  return (-1);
 }
 VAR_6 = FUNC_5(VAR_9, '\0');
 VAR_8 = FUNC_5(VAR_9, '/');



 while (VAR_8 != ((void*)0)) {

  VAR_7 = VAR_8;
  *VAR_7 = '\0';



  if (FUNC_0(VAR_9, VAR_2) == 0)
   break;



  else {
   VAR_8 = FUNC_5(VAR_9, '/');



   if (VAR_8 == ((void*)0) || VAR_8 == VAR_9) {
    if (FUNC_2(VAR_9, VAR_5) != 0 && VAR_3 != VAR_0) {
     FUNC_1(VAR_9);
     return (-1);
    }
    break;
   }
  }
 }



 while ((VAR_7 = FUNC_4(VAR_9, '\0')) != VAR_6) {
  *VAR_7 = '/';
  if (FUNC_2(VAR_9, VAR_5) != 0 && VAR_3 != VAR_0) {







   FUNC_1(VAR_9);
   return (-1);
  }
 }
 FUNC_1(VAR_9);
 return (0);
}
