
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int buf ;


 int FUNC_0 (char*,char*,char) ;

__attribute__((used)) static char *
FUNC_1(u_char *VAR_0, int VAR_1)
{
 static char VAR_2[8*20+1];
 char *VAR_3;
 u_char *VAR_4, VAR_5;


 for (VAR_3 = VAR_2; VAR_1 != 0 && VAR_3 < &VAR_2[sizeof(VAR_2)-1]; VAR_1--) {
  VAR_5 = *VAR_0++;
  if (VAR_5 == '\0') {
   for (VAR_4 = VAR_0+1; VAR_4 < &VAR_0[VAR_1]; VAR_4++) {
    if (*VAR_4 != '\0')
     break;
   }
   if (VAR_4 >= &VAR_0[VAR_1])
       goto exit;
  }

  if (VAR_5 >= ' ' && VAR_5 < 0x7f && VAR_5 != '\\') {
   *VAR_3++ = VAR_5;
   continue;
  }
  *VAR_3++ = '\\';
  switch (VAR_5) {
  case '\\':
   *VAR_3++ = '\\';
   break;
  case '\n':
   *VAR_3++= 'n';
   break;
  case '\r':
   *VAR_3++= 'r';
   break;
  case '\t':
   *VAR_3++ = 't';
   break;
  case '\b':
   *VAR_3++ = 'b';
   break;
  default:
   VAR_3 += FUNC_0(VAR_3,"%o",VAR_5);
   break;
  }
 }
exit:
 *VAR_3 = '\0';
 return VAR_2;
}
