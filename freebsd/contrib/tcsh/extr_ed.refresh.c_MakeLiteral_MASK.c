
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int* FUNC_3 (scalar_t__*,int) ;

__attribute__((used)) static int FUNC_4(Char *VAR_6, int VAR_7, Char VAR_8)
{
    int VAR_9, VAR_10 = 0;
    Char *VAR_11 = 0;
    if (VAR_8) {
 if ((VAR_8 & VAR_1) != 0) {
     VAR_11 = VAR_5 + (VAR_8 & ~VAR_1) * VAR_2;
     VAR_10 = FUNC_0(VAR_11);
 } else {
     VAR_11 = &VAR_8;
     VAR_10 = 1;
 }
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9 += VAR_2)
     if (!FUNC_1(VAR_11, VAR_5 + VAR_9, VAR_10) && !FUNC_1(VAR_6, VAR_5 + VAR_9 + VAR_10, VAR_7) && VAR_5[VAR_9 + VAR_10 + VAR_7] == 0)
  return (VAR_9 / VAR_2) | VAR_1;
    } else {
 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9 += VAR_2)
     if (!FUNC_1(VAR_6, VAR_5 + VAR_9, VAR_7) && VAR_5[VAR_9 + VAR_7] == 0)
  return (VAR_9 / VAR_2) | VAR_1;
    }
    if (VAR_4 + VAR_10 + VAR_7 + 1 + (VAR_2 - 1) > VAR_3) {
 Char *VAR_12;
 int VAR_13 = 256;
 while (VAR_7 + VAR_10 + 1 + (VAR_2 - 1) > VAR_13)
     VAR_13 *= 2;
 VAR_12 = FUNC_3(VAR_5, (VAR_3 + VAR_13) * sizeof(Char));
 if (!VAR_12)
     return '?';
 VAR_5 = VAR_12;
 VAR_3 += VAR_13;
 if (VAR_11 && VAR_11 != &VAR_8)
     VAR_11 = VAR_5 + (VAR_8 & ~VAR_1) * VAR_2;
    }
    VAR_9 = VAR_4 / VAR_2;
    if (VAR_9 >= VAR_1 || VAR_9 == VAR_0)
 return '?';
    if (VAR_11) {
 FUNC_2(VAR_5 + VAR_4, VAR_11, VAR_10);
 VAR_4 += VAR_10;
    }
    FUNC_2(VAR_5 + VAR_4, VAR_6, VAR_7);
    VAR_4 += VAR_7;
    do
 VAR_5[VAR_4++] = 0;
    while (VAR_4 % VAR_2);
    return VAR_9 | VAR_1;
}
