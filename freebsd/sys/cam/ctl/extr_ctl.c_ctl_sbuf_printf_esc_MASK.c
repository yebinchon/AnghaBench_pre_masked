
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,char*) ;
 int FUNC_1 (struct sbuf*,char) ;

int
FUNC_2(struct sbuf *VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3 = VAR_1 + VAR_2;
 int VAR_4;

 VAR_4 = 0;

 for (; *VAR_1 && VAR_1 < VAR_3; VAR_1++) {
  switch (*VAR_1) {
  case '&':
   VAR_4 = FUNC_0(VAR_0, "&amp;");
   break;
  case '>':
   VAR_4 = FUNC_0(VAR_0, "&gt;");
   break;
  case '<':
   VAR_4 = FUNC_0(VAR_0, "&lt;");
   break;
  default:
   VAR_4 = FUNC_1(VAR_0, *VAR_1);
   break;
  }

  if (VAR_4 != 0)
   break;

 }

 return (VAR_4);
}
