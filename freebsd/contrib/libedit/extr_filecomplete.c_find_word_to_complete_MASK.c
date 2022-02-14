
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int* FUNC_0 (int const*,size_t) ;
 scalar_t__ FUNC_1 (int const*,int const) ;

__attribute__((used)) static wchar_t *
FUNC_2(const wchar_t * VAR_0, const wchar_t * VAR_1,
    const wchar_t * VAR_2, const wchar_t * VAR_3, size_t * VAR_4)
{

 const wchar_t *VAR_5 = VAR_0;
 size_t VAR_6;




 if (VAR_5 > VAR_1) {
  switch (VAR_5[-1]) {
  case '\\':
  case '\'':
  case '"':
   VAR_5--;
   break;
  default:
   break;
  }
 }

 for (;;) {
  if (VAR_5 <= VAR_1)
   break;
  if (FUNC_1(VAR_2, VAR_5[-1])) {
   if (VAR_5 - VAR_1 >= 2 && VAR_5[-2] == '\\') {
    VAR_5 -= 2;
    continue;
   } else if (VAR_5 - VAR_1 >= 2 &&
       (VAR_5[-2] == '\'' || VAR_5[-2] == '"')) {
    VAR_5--;
    continue;
   } else
    break;
  }
  if (VAR_3 && FUNC_1(VAR_3, VAR_5[-1]))
   break;
  VAR_5--;
 }

 VAR_6 = (size_t) (VAR_0 - VAR_5);
 if (VAR_6 == 1 && (VAR_5[0] == '\'' || VAR_5[0] == '"')) {
  VAR_6 = 0;
  VAR_5++;
 }
 *VAR_4 = VAR_6;
 wchar_t *VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 == ((void*)0))
  return ((void*)0);
 return VAR_7;
}
