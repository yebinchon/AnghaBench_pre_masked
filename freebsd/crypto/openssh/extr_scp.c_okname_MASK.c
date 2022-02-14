
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char) ;
 int VAR_0 ;

int
FUNC_3(char *VAR_1)
{
 int VAR_2;
 char *VAR_3;

 VAR_3 = VAR_1;
 do {
  VAR_2 = (int)*VAR_3;
  if (VAR_2 & 0200)
   goto bad;
  if (!FUNC_1(VAR_2) && !FUNC_2((unsigned char)VAR_2)) {
   switch (VAR_2) {
   case '\'':
   case '"':
   case '`':
   case ' ':
   case '#':
    goto bad;
   default:
    break;
   }
  }
 } while (*++VAR_3);
 return (1);

bad: FUNC_0(VAR_0, "%s: invalid user name\n", VAR_1);
 return (0);
}
