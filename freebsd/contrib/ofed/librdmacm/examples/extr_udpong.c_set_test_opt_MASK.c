
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2(const char *VAR_5)
{
 if (FUNC_0(VAR_5) == 1) {
  switch (VAR_5[0]) {
  case 's':
   VAR_4 = 0;
   break;
  case 'a':
   VAR_3 = 1;
   break;
  case 'b':
   VAR_2 = 0;
   break;
  case 'n':
   VAR_2 = VAR_0;
   break;
  case 'e':
   VAR_1 = 1;
   break;
  default:
   return -1;
  }
 } else {
  if (!FUNC_1("socket", VAR_5, 6)) {
   VAR_4 = 0;
  } else if (!FUNC_1("async", VAR_5, 5)) {
   VAR_3 = 1;
  } else if (!FUNC_1("block", VAR_5, 5)) {
   VAR_2 = 0;
  } else if (!FUNC_1("nonblock", VAR_5, 8)) {
   VAR_2 = VAR_0;
  } else if (!FUNC_1("echo", VAR_5, 4)) {
   VAR_1 = 1;
  } else {
   return -1;
  }
 }
 return 0;
}
