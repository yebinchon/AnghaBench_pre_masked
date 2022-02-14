
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 char* FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

int
FUNC_5(const char* VAR_0, int VAR_1, int* VAR_2, int VAR_3)
{
 char* VAR_4 = FUNC_3(VAR_0, '-');
 if(!VAR_4) {
  int VAR_5 = FUNC_0(VAR_0);
  if(VAR_5 == 0 && FUNC_4(VAR_0, "0") != 0) {
   FUNC_1("cannot parse port number '%s'", VAR_0);
   return 0;
  }
  if(VAR_5 < VAR_3)
   VAR_2[VAR_5] = (VAR_1?VAR_5:0);
 } else {
  int VAR_6, VAR_7, VAR_8 = FUNC_0(VAR_4+1);
  char VAR_9[16];
  if(VAR_8 == 0 && FUNC_4(VAR_4+1, "0") != 0) {
   FUNC_1("cannot parse port number '%s'", VAR_4+1);
   return 0;
  }
  if( (int)(VAR_4-VAR_0)+1 >= (int)sizeof(VAR_9) ) {
   FUNC_1("cannot parse port number '%s'", VAR_0);
   return 0;
  }
  if(VAR_4 > VAR_0)
   FUNC_2(VAR_9, VAR_0, (size_t)(VAR_4-VAR_0));
  VAR_9[VAR_4-VAR_0] = 0;
  VAR_7 = FUNC_0(VAR_9);
  if(VAR_7 == 0 && FUNC_4(VAR_9, "0") != 0) {
   FUNC_1("cannot parse port number '%s'", VAR_9);
   return 0;
  }
  for(VAR_6=VAR_7; VAR_6<=VAR_8; VAR_6++) {
   if(VAR_6 < VAR_3)
    VAR_2[VAR_6] = (VAR_1?VAR_6:0);
  }
  return 1;
 }
 return 1;
}
