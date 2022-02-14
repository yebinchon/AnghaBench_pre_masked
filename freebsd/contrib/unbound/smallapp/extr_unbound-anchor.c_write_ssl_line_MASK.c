
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL ;


 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,char const*,char const*) ;
 size_t FUNC_3 (char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(SSL* VAR_1, const char* VAR_2, const char* VAR_3)
{
 char VAR_4[1024];
 size_t VAR_5;
 if(VAR_3) {
  FUNC_2(VAR_4, sizeof(VAR_4), VAR_2, VAR_3);
 } else {
  FUNC_2(VAR_4, sizeof(VAR_4), "%s", VAR_2);
 }
 VAR_5 = FUNC_3(VAR_4);
 if(VAR_5+2 >= sizeof(VAR_4)) {
  if(VAR_0) FUNC_1("line too long\n");
  return 0;
 }
 if(VAR_0 >= 2) FUNC_1("SSL_write: %s\n", VAR_4);
 VAR_4[VAR_5] = '\r';
 VAR_4[VAR_5+1] = '\n';
 VAR_4[VAR_5+2] = 0;

 if(FUNC_0(VAR_1, VAR_4, (int)FUNC_3(VAR_4)) <= 0) {
  if(VAR_0) FUNC_1("could not SSL_write %s", VAR_2);
  return 0;
 }
 return 1;
}
