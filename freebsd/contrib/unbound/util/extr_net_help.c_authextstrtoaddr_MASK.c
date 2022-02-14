
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
typedef int socklen_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,struct sockaddr_storage*,int *) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

int FUNC_6(char* VAR_3, struct sockaddr_storage* VAR_4,
 socklen_t* VAR_5, char** VAR_6)
{
 char* VAR_7;
 int VAR_8 = VAR_2;
 if((VAR_7=FUNC_2(VAR_3, '@'))) {
  char VAR_9[VAR_0];
  size_t VAR_10 = (size_t)(VAR_7-VAR_3);
  char* VAR_11 = FUNC_2(VAR_7+1, '#');
  if(VAR_11) {
   *VAR_6 = VAR_11+1;
  } else {
   *VAR_6 = ((void*)0);
  }
  if(VAR_10 >= VAR_0) {
   return 0;
  }
  (void)FUNC_4(VAR_9, VAR_3, sizeof(VAR_9));
  VAR_9[VAR_10] = 0;
  VAR_8 = FUNC_0(VAR_7+1);
  if(VAR_8 == 0) {
   if(!VAR_11 && FUNC_3(VAR_7+1,"0")!=0)
    return 0;
   if(VAR_11 && FUNC_5(VAR_7+1,"0#",2)!=0)
    return 0;
  }
  return FUNC_1(VAR_9, VAR_8, VAR_4, VAR_5);
 }
 if((VAR_7=FUNC_2(VAR_3, '#'))) {
  char VAR_12[VAR_0];
  size_t VAR_13 = (size_t)(VAR_7-VAR_3);
  if(VAR_13 >= VAR_0) {
   return 0;
  }
  (void)FUNC_4(VAR_12, VAR_3, sizeof(VAR_12));
  VAR_12[VAR_13] = 0;
  VAR_8 = VAR_1;
  *VAR_6 = VAR_7+1;
  return FUNC_1(VAR_12, VAR_8, VAR_4, VAR_5);
 }
 *VAR_6 = ((void*)0);
 return FUNC_1(VAR_3, VAR_8, VAR_4, VAR_5);
}
