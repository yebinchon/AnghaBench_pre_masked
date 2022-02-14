
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 char* FUNC_4 (char*,char,char) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_10(char* VAR_2, char** VAR_3, char** VAR_4, int* VAR_5, int* VAR_6)
{
 char* VAR_7 = VAR_2;



 *VAR_6 = 1;
 *VAR_5 = VAR_0;


 if(FUNC_7(VAR_7, "http://", 7) == 0) {
  VAR_7 += 7;
  *VAR_6 = 0;
  *VAR_5 = VAR_1;
 } else if(FUNC_7(VAR_7, "https://", 8) == 0) {
  VAR_7 += 8;
 } else if(FUNC_8(VAR_7, "://") && FUNC_5(VAR_7, '/') > FUNC_8(VAR_7, "://") &&
  FUNC_5(VAR_7, ':') >= FUNC_8(VAR_7, "://")) {
  char* VAR_8 = FUNC_1(VAR_7, (size_t)(FUNC_8(VAR_7, "://")-VAR_7));
  FUNC_3("protocol %s:// not supported (for url %s)",
   VAR_8?VAR_8:"", VAR_7);
  FUNC_2(VAR_8);
  return 0;
 }


 if(VAR_7[0] == '[') {
  char* VAR_9 = FUNC_5(VAR_7, ']');
  VAR_7++;
  if(VAR_9) {
   *VAR_3 = FUNC_1(VAR_7, (size_t)(VAR_9-VAR_7));
   if(!*VAR_3) return 0;
   VAR_7 = VAR_9+1;
  } else {
   *VAR_3 = FUNC_0(VAR_7);
   if(!*VAR_3) return 0;
   VAR_7 = VAR_9;
  }
 } else {
  char* VAR_10 = FUNC_4(VAR_7, ':', '/');
  if(VAR_10) {
   *VAR_3 = FUNC_1(VAR_7, (size_t)(VAR_10-VAR_7));
   if(!*VAR_3) return 0;
  } else {
   *VAR_3 = FUNC_0(VAR_7);
   if(!*VAR_3) return 0;
  }
  VAR_7 = VAR_10;
 }


 if(VAR_7 && VAR_7[0] == ':') {
  char* VAR_11 = ((void*)0);
  *VAR_5 = FUNC_9(VAR_7+1, &VAR_11, 10);
  VAR_7 = VAR_11;
 }


 while(VAR_7 && *VAR_7 == '/')
  VAR_7++;
 if(!VAR_7 || VAR_7[0] == 0)
  *VAR_4 = FUNC_6("index.html");
 else *VAR_4 = FUNC_6(VAR_7);
 if(!*VAR_4) {
  FUNC_3("malloc failure");
  return 0;
 }
 return 1;
}
