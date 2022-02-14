
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 char FUNC_0 (char const) ;
 unsigned long long FUNC_1 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned long long) ;

unsigned int FUNC_3(const char *VAR_2, unsigned int VAR_3, unsigned long long *VAR_4)
{
 unsigned long long VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_5 = 0;
 VAR_6 = 0;
 VAR_7 = 0;
 while (*VAR_2) {
  unsigned int VAR_8;

  if ('0' <= *VAR_2 && *VAR_2 <= '9')
   VAR_8 = *VAR_2 - '0';
  else if ('a' <= FUNC_0(*VAR_2) && FUNC_0(*VAR_2) <= 'f')
   VAR_8 = FUNC_0(*VAR_2) - 'a' + 10;
  else
   break;

  if (VAR_8 >= VAR_3)
   break;




  if (FUNC_2(VAR_5 & (~0ull << 60))) {
   if (VAR_5 > FUNC_1(VAR_1 - VAR_8, VAR_3))
    VAR_7 = 1;
  }
  VAR_5 = VAR_5 * VAR_3 + VAR_8;
  VAR_6++;
  VAR_2++;
 }
 *VAR_4 = VAR_5;
 if (VAR_7)
  VAR_6 |= VAR_0;
 return VAR_6;
}
