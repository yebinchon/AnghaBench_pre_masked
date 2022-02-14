
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html {int dummy; } ;





 int FUNC_0 (struct html*,char) ;
 int FUNC_1 (struct html*,char*) ;

__attribute__((used)) static int
FUNC_2(struct html *VAR_0, char VAR_1)
{

 switch (VAR_1) {
 case '<':
  FUNC_1(VAR_0, "&lt;");
  break;
 case '>':
  FUNC_1(VAR_0, "&gt;");
  break;
 case '&':
  FUNC_1(VAR_0, "&amp;");
  break;
 case '"':
  FUNC_1(VAR_0, "&quot;");
  break;
 case 128:
  FUNC_1(VAR_0, "&nbsp;");
  break;
 case 129:
  FUNC_0(VAR_0, '-');
  break;
 case 130:
  break;
 default:
  return 0;
 }
 return 1;
}
