
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
typedef int socklen_t ;
typedef int buf ;


 int FUNC_0 (struct sockaddr_storage*,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,struct sockaddr_storage*,int *) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,char) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char const*,int) ;

int FUNC_8(const char* VAR_0, int VAR_1, struct sockaddr_storage* VAR_2,
        socklen_t* VAR_3, int* VAR_4)
{
 char VAR_5[64];
 char* VAR_6;
 *VAR_4 = (FUNC_4(VAR_0)?128:32);
 if((VAR_6=FUNC_5(VAR_0, '/'))) {
  if(FUNC_1(VAR_6+1) > *VAR_4) {
   FUNC_3("netblock too large: %s", VAR_0);
   return 0;
  }
  *VAR_4 = FUNC_1(VAR_6+1);
  if(*VAR_4 == 0 && FUNC_6(VAR_6+1, "0") != 0) {
   FUNC_3("cannot parse netblock: '%s'", VAR_0);
   return 0;
  }
  FUNC_7(VAR_5, VAR_0, sizeof(VAR_5));
  VAR_6 = FUNC_5(VAR_5, '/');
  if(VAR_6) *VAR_6 = 0;
  VAR_6 = VAR_5;
 }
 if(!FUNC_2(VAR_6?VAR_6:VAR_0, VAR_1, VAR_2, VAR_3)) {
  FUNC_3("cannot parse ip address: '%s'", VAR_0);
  return 0;
 }
 if(VAR_6) {
  FUNC_0(VAR_2, *VAR_3, *VAR_4);
 }
 return 1;
}
