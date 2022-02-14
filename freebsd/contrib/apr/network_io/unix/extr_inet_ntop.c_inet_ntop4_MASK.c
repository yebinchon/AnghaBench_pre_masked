
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(const unsigned char *VAR_2, char *VAR_3, apr_size_t VAR_4)
{
 const apr_size_t VAR_5 = 16;
 int VAR_6 = 0;
 char *VAR_7 = VAR_3;

 if (VAR_4 < VAR_5) {
     VAR_1 = VAR_0;
     return ((void*)0);
 }
 do {
     unsigned char VAR_8 = *VAR_2++;
     if (VAR_8 > 99) {
  *VAR_7++ = '0' + VAR_8/100;
  VAR_8 %= 100;
  *VAR_7++ = '0' + VAR_8/10;
  VAR_8 %= 10;
     }
     else if (VAR_8 > 9) {
  *VAR_7++ = '0' + VAR_8/10;
  VAR_8 %= 10;
     }
     *VAR_7++ = '0' + VAR_8;
     *VAR_7++ = '.';
     VAR_6++;
 } while (VAR_6 < 4);
 *--VAR_7 = 0;
 return VAR_3;
}
