
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(const char *VAR_8)
{
 if (FUNC_0(VAR_8) == 1) {
  switch (VAR_8[0]) {
  case 's':
   VAR_6 = 0;
   break;
  case 'a':
   VAR_3 = 1;
   break;
  case 'b':
   VAR_2 = (VAR_2 & ~VAR_0) | VAR_1;
   break;
  case 'f':
   VAR_4 = 1;
   VAR_6 = 0;
   break;
  case 'n':
   VAR_2 |= VAR_0;
   break;
  case 'r':
   VAR_5 = 1;
   break;
  case 'v':
   VAR_7 = 1;
   break;
  default:
   return -1;
  }
 } else {
  if (!FUNC_1("socket", VAR_8, 6)) {
   VAR_6 = 0;
  } else if (!FUNC_1("async", VAR_8, 5)) {
   VAR_3 = 1;
  } else if (!FUNC_1("block", VAR_8, 5)) {
   VAR_2 = (VAR_2 & ~VAR_0) | VAR_1;
  } else if (!FUNC_1("nonblock", VAR_8, 8)) {
   VAR_2 |= VAR_0;
  } else if (!FUNC_1("resolve", VAR_8, 7)) {
   VAR_5 = 1;
  } else if (!FUNC_1("verify", VAR_8, 6)) {
   VAR_7 = 1;
  } else if (!FUNC_1("fork", VAR_8, 4)) {
   VAR_4 = 1;
   VAR_6 = 0;
  } else {
   return -1;
  }
 }
 return 0;
}
