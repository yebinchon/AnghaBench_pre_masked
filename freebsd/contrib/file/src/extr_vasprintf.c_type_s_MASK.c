
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xprintf_struct ;


 int FUNC_0 (int *,size_t,char const*,char const*) ;

__attribute__((used)) static int FUNC_1(xprintf_struct *VAR_0, int VAR_1, int VAR_2,
                  const char *VAR_3, const char *VAR_4)
{
  size_t VAR_5;

  if (VAR_4 == ((void*)0))
    return FUNC_0(VAR_0, (size_t)6, "(null)", 0);



  VAR_5 = 0;
  while (VAR_4[VAR_5] != 0 && (size_t)VAR_2 != VAR_5)
    VAR_5++;

  if (VAR_1 != -1 && VAR_5 < (size_t)VAR_1)
    VAR_5 = (size_t)VAR_1;

  return FUNC_0(VAR_0, VAR_5, VAR_3, VAR_4);
}
