
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,void const*,size_t) ;

void FUNC_2(char *VAR_0, size_t VAR_1,
        const void *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 if (VAR_3 >= VAR_1)
  VAR_3 = VAR_1 - 1;
 FUNC_1(VAR_0, VAR_2, VAR_3);
 VAR_0[VAR_3] = '\0';
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_0[VAR_4] == '\0')
   break;
  if (FUNC_0(VAR_0[VAR_4]))
   VAR_0[VAR_4] = '_';
 }
}
