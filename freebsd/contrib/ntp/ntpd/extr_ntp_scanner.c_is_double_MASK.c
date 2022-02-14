
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int u_char ;


 scalar_t__ FUNC_0 (int ) ;
 char FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(
 char *VAR_0
 )
{
 u_int VAR_1 = 0;
 u_int VAR_2;

 VAR_2 = 0;


 if ('+' == VAR_0[VAR_2] || '-' == VAR_0[VAR_2])
  VAR_2++;


 for (; VAR_0[VAR_2] && FUNC_0((u_char)VAR_0[VAR_2]); VAR_2++)
  VAR_1++;


 if ('.' == VAR_0[VAR_2]) {
  VAR_2++;

  for (; VAR_0[VAR_2] && FUNC_0((u_char)VAR_0[VAR_2]); VAR_2++)
   VAR_1++;
 }





 if (!VAR_1)
  return 0;


 if (!VAR_0[VAR_2])
  return 1;


 if ('e' == FUNC_1((u_char)VAR_0[VAR_2]))
  VAR_2++;
 else
  return 0;


 if ('+' == VAR_0[VAR_2] || '-' == VAR_0[VAR_2])
  VAR_2++;


 while (VAR_0[VAR_2] && FUNC_0((u_char)VAR_0[VAR_2]))
  VAR_2++;


 if (!VAR_0[VAR_2])
  return 1;
 else
  return 0;
}
