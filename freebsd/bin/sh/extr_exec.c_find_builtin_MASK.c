
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char const VAR_0 ;
 unsigned char* VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char const*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

int
FUNC_2(const char *VAR_2, int *VAR_3)
{
 const unsigned char *VAR_4;
 size_t VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 for (VAR_4 = VAR_1 ; *VAR_4 ; VAR_4 += 2 + VAR_4[0]) {
  if (VAR_4[0] == VAR_5 && FUNC_0(VAR_4 + 2, VAR_2, VAR_5) == 0) {
   *VAR_3 = (VAR_4[1] & VAR_0) != 0;
   return VAR_4[1] & ~VAR_0;
  }
 }
 return -1;
}
