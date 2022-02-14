
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cchar {scalar_t__ sub; } ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(struct cchar *VAR_3, int VAR_4)
{
 static char VAR_5[5];
 char *VAR_6;

 if (VAR_3->sub == VAR_0 || VAR_3->sub == VAR_1) {
  (void)FUNC_0(VAR_5, sizeof(VAR_5), "%d", VAR_4);
  return (VAR_5);
 }
 if (VAR_4 == VAR_2)
  return ("<undef>");
 VAR_6 = VAR_5;
 if (VAR_4 & 0200) {
  *VAR_6++ = 'M';
  *VAR_6++ = '-';
  VAR_4 &= 0177;
 }
 if (VAR_4 == 0177) {
  *VAR_6++ = '^';
  *VAR_6++ = '?';
 }
 else if (VAR_4 < 040) {
  *VAR_6++ = '^';
  *VAR_6++ = VAR_4 + '@';
 }
 else
  *VAR_6++ = VAR_4;
 *VAR_6 = '\0';
 return (VAR_5);
}
