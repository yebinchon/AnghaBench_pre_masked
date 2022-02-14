
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Value_t ;


 unsigned int* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__** VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static void
FUNC_0(int VAR_7)
{
    unsigned *VAR_8;
    unsigned *VAR_9;
    unsigned *VAR_10;
    int VAR_11;
    Value_t *VAR_12;

    Value_t VAR_13;
    unsigned *VAR_14;

    VAR_3[++VAR_6] = (Value_t)VAR_7;
    VAR_1[VAR_7] = VAR_13 = VAR_6;

    VAR_14 = VAR_0 + VAR_7 * VAR_5;
    VAR_10 = VAR_14 + VAR_5;

    VAR_12 = VAR_2[VAR_7];
    if (VAR_12)
    {
 while ((VAR_11 = *VAR_12++) >= 0)
 {
     if (VAR_1[VAR_11] == 0)
  FUNC_0(VAR_11);

     if (VAR_1[VAR_7] > VAR_1[VAR_11])
  VAR_1[VAR_7] = VAR_1[VAR_11];

     VAR_8 = VAR_14;
     VAR_9 = VAR_0 + VAR_11 * VAR_5;

     while (VAR_8 < VAR_10)
  *VAR_8++ |= *VAR_9++;
 }
    }

    if (VAR_1[VAR_7] == VAR_13)
    {
 for (;;)
 {
     VAR_11 = VAR_3[VAR_6--];
     VAR_1[VAR_11] = VAR_4;

     if (VAR_7 == VAR_11)
  break;

     VAR_8 = VAR_14;
     VAR_9 = VAR_0 + VAR_11 * VAR_5;

     while (VAR_8 < VAR_10)
  *VAR_9++ = *VAR_8++;
 }
    }
}
