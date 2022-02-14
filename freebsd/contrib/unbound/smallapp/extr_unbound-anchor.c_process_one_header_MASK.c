
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(char* VAR_1, size_t* VAR_2, int* VAR_3)
{
 if(VAR_0>=2) FUNC_1("header: '%s'\n", VAR_1);
 if(FUNC_2(VAR_1, "HTTP/1.1 ", 9) == 0) {

  if(VAR_1[9] != '2') {
   if(VAR_0) FUNC_1("bad status %s\n", VAR_1+9);
   return 0;
  }
 } else if(FUNC_2(VAR_1, "Content-Length: ", 16) == 0) {
  if(!*VAR_3)
   *VAR_2 = (size_t)FUNC_0(VAR_1+16);
 } else if(FUNC_2(VAR_1, "Transfer-Encoding: chunked", 19+7) == 0) {
  *VAR_2 = 0;
  *VAR_3 = 1;
 }
 return 1;
}
