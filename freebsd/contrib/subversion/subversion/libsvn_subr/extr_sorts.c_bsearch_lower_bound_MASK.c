
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0,
                    const void *VAR_1,
                    int VAR_2,
                    int VAR_3,
                    int (*VAR_4)(const void *, const void *))
{
  int VAR_5 = 0;
  int VAR_6 = VAR_2 - 1;


  while (VAR_5 <= VAR_6)
    {
      int VAR_7 = VAR_5 + (VAR_6 - VAR_5) / 2;
      int VAR_8 = VAR_4((const char *)VAR_1 + VAR_7 * VAR_3, VAR_0);

      if (VAR_8 < 0)
        VAR_5 = VAR_7 + 1;
      else
        VAR_6 = VAR_7 - 1;
    }
  FUNC_0(VAR_5 == VAR_6 + 1);

  return VAR_5;
}
