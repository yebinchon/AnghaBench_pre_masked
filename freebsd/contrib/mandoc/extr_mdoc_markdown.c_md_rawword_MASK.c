
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_7)
{
 FUNC_2();

 if (*VAR_7 == '\0')
  return;

 if (VAR_5 & VAR_1) {
  VAR_5 &= ~VAR_1;
  if (*VAR_7 == '*' && !VAR_4)
   FUNC_0("&zwnj;", VAR_6);
 }

 while (*VAR_7 != '\0') {
  switch(*VAR_7) {
  case '*':
   if (VAR_7[1] == '\0')
    VAR_5 |= VAR_1;
   break;
  case '[':
   VAR_5 |= VAR_3;
   break;
  case ']':
   VAR_5 |= VAR_2;
   VAR_5 &= ~VAR_3;
   break;
  default:
   break;
  }
  FUNC_1(*VAR_7++);
 }
 if (VAR_7[-1] == ' ')
  VAR_5 |= VAR_0;
 else
  VAR_5 &= ~VAR_0;
}
