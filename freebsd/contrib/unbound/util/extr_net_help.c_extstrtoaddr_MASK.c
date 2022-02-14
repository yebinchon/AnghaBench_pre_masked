
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
typedef int socklen_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int,struct sockaddr_storage*,int *) ;
 char* FUNC_2 (char const*,char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char const*,int) ;

int
FUNC_5(const char* VAR_2, struct sockaddr_storage* VAR_3,
 socklen_t* VAR_4)
{
 char* VAR_5;
 int VAR_6 = VAR_1;
 if((VAR_5=FUNC_2(VAR_2, '@'))) {
  char VAR_7[VAR_0];
  if(VAR_5-VAR_2 >= VAR_0) {
   return 0;
  }
  (void)FUNC_4(VAR_7, VAR_2, sizeof(VAR_7));
  VAR_7[VAR_5-VAR_2] = 0;
  VAR_6 = FUNC_0(VAR_5+1);
  if(VAR_6 == 0 && FUNC_3(VAR_5+1,"0")!=0) {
   return 0;
  }
  return FUNC_1(VAR_7, VAR_6, VAR_3, VAR_4);
 }
 return FUNC_1(VAR_2, VAR_6, VAR_3, VAR_4);
}
