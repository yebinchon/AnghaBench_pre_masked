
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCR ;
typedef char CHAR_T ;


 int FUNC_0 (int *,char*,size_t,size_t) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char) ;

__attribute__((used)) static int
FUNC_3(SCR *VAR_0, CHAR_T **VAR_1, size_t *VAR_2, int *VAR_3)
{
 size_t VAR_4, VAR_5;
 int VAR_6;
 CHAR_T *VAR_7, *VAR_8, *VAR_9;

 VAR_5 = *VAR_2;


 *VAR_3 = 1;
 FUNC_0(VAR_0, VAR_7, VAR_4, VAR_5 * 2);

 VAR_8 = *VAR_1;
 VAR_9 = VAR_7;


 if (VAR_5 > 0 && (VAR_8[VAR_5 - 1] == '/' || VAR_8[VAR_5 - 1] == '?'))
  --VAR_5;


 if (VAR_5 > 0 && VAR_8[VAR_5 - 1] == '$') {
  --VAR_5;
  VAR_6 = 1;
 } else
  VAR_6 = 0;


 if (VAR_5 > 0 && (VAR_8[0] == '/' || VAR_8[0] == '?')) {
  ++VAR_8;
  --VAR_5;
 }


 if (VAR_8[0] == '^') {
  *VAR_9++ = *VAR_8++;
  --VAR_5;
 }






 for (; VAR_5 > 0; --VAR_5) {
  if (VAR_8[0] == '\\' && (VAR_8[1] == '/' || VAR_8[1] == '?')) {
   ++VAR_8;
   --VAR_5;
  } else if (FUNC_2(FUNC_1("^.[]$*"), VAR_8[0]))
   *VAR_9++ = '\\';
  *VAR_9++ = *VAR_8++;
 }
 if (VAR_6)
  *VAR_9++ = '$';

 *VAR_1 = VAR_7;
 *VAR_2 = VAR_9 - VAR_7;
 return (0);
}
