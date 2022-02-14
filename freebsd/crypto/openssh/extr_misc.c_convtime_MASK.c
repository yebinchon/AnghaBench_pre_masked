
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 scalar_t__ VAR_7 ;
 long FUNC_0 (char const*,char**,int) ;

long
FUNC_1(const char *VAR_8)
{
 long VAR_9, VAR_10, VAR_11 = 1;
 const char *VAR_12;
 char *VAR_13;

 VAR_7 = 0;
 VAR_9 = 0;
 VAR_12 = VAR_8;

 if (VAR_12 == ((void*)0) || *VAR_12 == '\0')
  return -1;

 while (*VAR_12) {
  VAR_10 = FUNC_0(VAR_12, &VAR_13, 10);
  if (VAR_12 == VAR_13 ||
      (VAR_7 == VAR_1 && (VAR_10 == VAR_4 || VAR_10 == VAR_3)) ||
      VAR_10 < 0)
   return -1;

  switch (*VAR_13++) {
  case '\0':
   VAR_13--;
   break;
  case 's':
  case 'S':
   break;
  case 'm':
  case 'M':
   VAR_11 = VAR_5;
   break;
  case 'h':
  case 'H':
   VAR_11 = VAR_2;
   break;
  case 'd':
  case 'D':
   VAR_11 = VAR_0;
   break;
  case 'w':
  case 'W':
   VAR_11 = VAR_6;
   break;
  default:
   return -1;
  }
  if (VAR_10 >= VAR_3 / VAR_11)
   return -1;
  VAR_10 *= VAR_11;
  if (VAR_9 >= VAR_3 - VAR_10)
   return -1;
  VAR_9 += VAR_10;
  if (VAR_9 < 0)
   return -1;
  VAR_12 = VAR_13;
 }

 return VAR_9;
}
