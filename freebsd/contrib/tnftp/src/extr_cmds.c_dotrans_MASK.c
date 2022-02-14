
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;


 char const* VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(char *VAR_2, size_t VAR_3, const char *VAR_4)
{
 const char *VAR_5;
 char *VAR_6 = VAR_2;
 size_t VAR_7, VAR_8;

 for (VAR_8 = 0; *(VAR_1 + VAR_8) && VAR_8 < 16; VAR_8++)
  continue;
 for (VAR_5 = VAR_4; *VAR_5; VAR_5++) {
  int VAR_9 = 0;
  for (VAR_7 = 0; *(VAR_0 + VAR_7) && VAR_7 < 16; VAR_7++) {
   if (*VAR_5 == *(VAR_0 + VAR_7)) {
    VAR_9++;
    if (VAR_7 < VAR_8) {
     *VAR_6++ = *(VAR_1 + VAR_7);
     if (VAR_6 - VAR_2 >= (ptrdiff_t)(VAR_3 - 1))
      goto out;
    }
    break;
   }
  }
  if (!VAR_9) {
   *VAR_6++ = *VAR_5;
  }
 }
out:
 *VAR_6 = '\0';
 return VAR_2;
}
