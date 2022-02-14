
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_int8_t ;
typedef int u_char ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int * FUNC_2 (char const*,char const) ;
 int FUNC_3 (int ) ;
 char FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static const char *
FUNC_6(const char *VAR_0, const char *VAR_1, u_int8_t *VAR_2, int *VAR_3)
{
 int VAR_4;
 int VAR_5;
 u_int8_t *VAR_6;

 VAR_4 = *VAR_3;
 VAR_6 = VAR_2;
 VAR_5 = (VAR_0[0] == '0' && FUNC_4((u_char)VAR_0[1]) == 'x');
 if (VAR_5)
  VAR_0 += 2;
 for (;;) {
  if (*VAR_0 == '\0')
   break;
  if (VAR_1 != ((void*)0) && FUNC_2(VAR_1, *VAR_0) != ((void*)0)) {
   VAR_0++;
   break;
  }
  if (VAR_5) {
   if (!FUNC_0((u_char)VAR_0[0])) {
    FUNC_5("bad hexadecimal digits");
    return ((void*)0);
   }
   if (!FUNC_0((u_char)VAR_0[1])) {
    FUNC_5("odd count hexadecimal digits");
    return ((void*)0);
   }
  }
  if (VAR_6 >= VAR_2 + VAR_4) {
   if (VAR_5)
    FUNC_5("hexadecimal digits too long");
   else
    FUNC_5("string too long");
   return ((void*)0);
  }
  if (VAR_5) {

   *VAR_6++ = ((isdigit((u_char)VAR_0[0]) ? ((u_char)VAR_0[0]) - '0' : FUNC_4((u_char)VAR_0[0]) - 'a' + 10) << 4) |
       (FUNC_0((u_char)VAR_0[1]) ? ((u_char)VAR_0[1]) - '0' : FUNC_4((u_char)VAR_0[1]) - 'a' + 10);

   VAR_0 += 2;
  } else
   *VAR_6++ = *VAR_0++;
 }
 VAR_4 = VAR_6 - VAR_2;

 if (!VAR_5 && VAR_4 == 1 && VAR_2[0] == '-') {
  VAR_4 = 0;
  FUNC_1(VAR_2, 0, *VAR_3);
 } else if (VAR_4 < *VAR_3)
  FUNC_1(VAR_6, 0, *VAR_3 - VAR_4);
 *VAR_3 = VAR_4;
 return VAR_0;
}
