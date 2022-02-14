
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;

int
FUNC_1(const char *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 const char *VAR_5;





again:
 VAR_5 = VAR_1;
 while (*VAR_5) {
  switch(*VAR_5) {
  case '\n':
  case '\r':
   VAR_2 = 0;
   break;
  case '\t':
   VAR_2 = (VAR_2 + 8) &~ 07;
   break;
  case '\b':
   VAR_2 = VAR_2 ? VAR_2 - 1 : 0;
   break;
  default:
   VAR_2++;
  }
  if (VAR_2 > (VAR_3 - 2)) {
   FUNC_0(VAR_4 & VAR_0 ? "=\n" : "\\\n");
   VAR_2 = 0;
   goto again;
  }
  VAR_5++;
 }
 return (VAR_2);
}
