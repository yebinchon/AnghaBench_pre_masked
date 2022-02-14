
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;



__attribute__((used)) static void
FUNC_0(wchar_t *VAR_0, const wchar_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (*VAR_1 == '\0')
   break;
  *VAR_0++ = *VAR_1++;
 }

 for (; VAR_3 < VAR_2; VAR_3++)
  *VAR_0++ = ' ';

 *VAR_0 = '\0';
}
