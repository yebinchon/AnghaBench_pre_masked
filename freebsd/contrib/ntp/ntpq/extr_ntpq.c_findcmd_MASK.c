
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xcmd {char const* keyword; } ;


 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,unsigned int) ;

__attribute__((used)) static int
FUNC_2(
 const char * VAR_0,
 struct xcmd * VAR_1,
 struct xcmd * VAR_2,
 struct xcmd ** VAR_3
 )
{
 struct xcmd *VAR_4;
 size_t VAR_5;
 int VAR_6;
 struct xcmd *VAR_7 = ((void*)0);
 struct xcmd *VAR_8;

 VAR_5 = FUNC_0(VAR_0);
 VAR_6 = 0;
 if (VAR_1 != 0)
     VAR_8 = VAR_1;
 else if (VAR_2 != 0)
     VAR_8 = VAR_2;
 else
     return 0;

    again:
 for (VAR_4 = VAR_8; VAR_4->keyword != 0; VAR_4++) {

  if (*VAR_0 != *(VAR_4->keyword))
      continue;
  if (FUNC_1(VAR_0, VAR_4->keyword, (unsigned)VAR_5) == 0) {





   if (*((VAR_4->keyword) + VAR_5) == '\0') {
    *VAR_3 = VAR_4;
    return 1;
   }
   VAR_6++;
   VAR_7 = VAR_4;
  }
 }





 if (VAR_8 == VAR_1 && VAR_2 != 0) {
  VAR_8 = VAR_2;
  goto again;
 }





 if (VAR_6 == 1) {
  *VAR_3 = VAR_7;
  return 1;
 }
 return VAR_6;
}
