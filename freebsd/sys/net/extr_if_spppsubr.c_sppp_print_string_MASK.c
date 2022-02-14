
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef char u_char ;


 int FUNC_0 (int,char*,char) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, u_short VAR_1)
{
 u_char VAR_2;

 while (VAR_1-- > 0) {
  VAR_2 = *VAR_0++;



  if (VAR_2 < ' ' || VAR_2 > '~')
   FUNC_0(-1, "\\x%x", VAR_2);
  else
   FUNC_0(-1, "%c", VAR_2);
 }
}
