
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Char ;


 int FUNC_0 (scalar_t__*,scalar_t__) ;
 scalar_t__* FUNC_1 (scalar_t__*,scalar_t__*,int,scalar_t__*) ;

__attribute__((used)) static Char *
FUNC_2(Char *VAR_0, Char *VAR_1, int VAR_2, Char *VAR_3)
{
  while (VAR_2--) {
    Char *VAR_4 = VAR_1;
    Char *VAR_5;

    while (VAR_4 < VAR_0) {
      if (!FUNC_0(VAR_3, *VAR_4) || *(VAR_4-1) == (Char)'\\')
 break;
      VAR_4++;
    }

    VAR_5 = VAR_4;

    while (VAR_5 < VAR_0) {
      VAR_4 = VAR_5;
      VAR_5 = FUNC_1(VAR_4-1, VAR_0, 1, VAR_3);
      VAR_5++;
      while (VAR_5 <= VAR_0) {
 if (!FUNC_0(VAR_3, *VAR_5) || *(VAR_5-1) == (Char)'\\')
   break;
 VAR_5++;
      }
    }

    VAR_0 = VAR_4;

  }
  if (VAR_0 < VAR_1)
    VAR_0 = VAR_1;
  return (VAR_0);
}
