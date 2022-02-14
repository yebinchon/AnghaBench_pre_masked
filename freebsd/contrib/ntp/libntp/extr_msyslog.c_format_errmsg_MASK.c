
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errmsg ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*,char*,size_t) ;
 size_t FUNC_2 (char*) ;

void
FUNC_3(
 char * VAR_0,
 size_t VAR_1,
 const char * VAR_2,
 int VAR_3
 )
{
 char VAR_4[256];
 char VAR_5;
 char *VAR_6;
 const char *VAR_7;
 size_t VAR_8;

 VAR_6 = VAR_0;
 VAR_7 = VAR_2;
 while ((VAR_5 = *VAR_7++) != '\0' && VAR_6 < (VAR_0 + VAR_1 - 1)) {
  if (VAR_5 != '%') {
   *VAR_6++ = VAR_5;
   continue;
  }
  if ((VAR_5 = *VAR_7++) != 'm') {
   *VAR_6++ = '%';
   if ('\0' == VAR_5)
    break;
   *VAR_6++ = VAR_5;
   continue;
  }
  FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
  VAR_8 = FUNC_2(VAR_4);


  if ((VAR_6 + VAR_8) < (VAR_0 + VAR_1 - 1)) {
   FUNC_1(VAR_6, VAR_4, VAR_8);
   VAR_6 += VAR_8;
  }
 }
 *VAR_6 = '\0';
}
