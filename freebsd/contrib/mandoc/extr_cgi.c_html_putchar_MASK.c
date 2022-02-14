
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static void
FUNC_2(char VAR_0)
{

 switch (VAR_0) {
 case '"':
  FUNC_0("&quot;");
  break;
 case '&':
  FUNC_0("&amp;");
  break;
 case '>':
  FUNC_0("&gt;");
  break;
 case '<':
  FUNC_0("&lt;");
  break;
 default:
  FUNC_1((unsigned char)VAR_0);
  break;
 }
}
