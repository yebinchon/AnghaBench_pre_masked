
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CHAR16 ;



void
FUNC_0(const CHAR16 *VAR_0, char *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2 && VAR_0[VAR_3]; VAR_3++)
  VAR_1[VAR_3] = (char)VAR_0[VAR_3];
 if (VAR_3 < VAR_2)
  VAR_1[VAR_3] = '\0';
}
