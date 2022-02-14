
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*,struct archive_string*,int ,char*,char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_5, int *VAR_6, struct archive_string *VAR_7,
    int VAR_8)
{
 char *VAR_9, *VAR_10;
 char VAR_11 = '\0';

 VAR_9 = VAR_10 = VAR_5;
 if (*VAR_10 == '\0') {
  FUNC_1(VAR_6, VAR_7, VAR_0,
      "Invalid empty ", "pathname");
  return (VAR_3);
 }





 if (*VAR_10 == '/') {
  if (VAR_8 & VAR_1) {
   FUNC_1(VAR_6, VAR_7, VAR_0,
       "Path is ", "absolute");
   return (VAR_3);
  }

  VAR_11 = *VAR_10++;
 }


 for (;;) {

  if (VAR_10[0] == '\0') {
   break;
  } else if (VAR_10[0] == '/') {

   VAR_10++;
   continue;
  } else if (VAR_10[0] == '.') {
   if (VAR_10[1] == '\0') {

    break;
   } else if (VAR_10[1] == '/') {

    VAR_10 += 2;
    continue;
   } else if (VAR_10[1] == '.') {
    if (VAR_10[2] == '/' || VAR_10[2] == '\0') {

     if (VAR_8
         & VAR_2) {
      FUNC_1(VAR_6, VAR_7,
          VAR_0,
          "Path contains ", "'..'");
      return (VAR_3);
     }
    }







   }
  }


  if (VAR_11)
   *VAR_9++ = '/';
  while (*VAR_10 != '\0' && *VAR_10 != '/') {
   *VAR_9++ = *VAR_10++;
  }

  if (*VAR_10 == '\0')
   break;


  VAR_11 = *VAR_10++;
 }




 if (VAR_9 == VAR_5) {




  if (VAR_11)
   *VAR_9++ = '/';
  else
   *VAR_9++ = '.';
 }

 *VAR_9 = '\0';
 return (VAR_4);
}
