
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(unsigned *VAR_1, int VAR_2)
{
    int VAR_3;
    unsigned VAR_4;
    unsigned *VAR_5;
    unsigned *VAR_6;
    unsigned *VAR_7;
    unsigned *VAR_8;
    unsigned *VAR_9;
    unsigned *VAR_10;
    unsigned *VAR_11;

    VAR_3 = FUNC_0(VAR_2);
    VAR_9 = VAR_1 + VAR_2 * VAR_3;

    VAR_10 = VAR_1;
    VAR_4 = 0;
    VAR_11 = VAR_1;
    while (VAR_11 < VAR_9)
    {
 VAR_8 = VAR_10;
 VAR_5 = VAR_1;

 while (VAR_5 < VAR_9)
 {
     if (*VAR_8 & (unsigned)(1 << VAR_4))
     {
  VAR_6 = VAR_11;
  VAR_7 = VAR_5 + VAR_3;
  while (VAR_5 < VAR_7)
      *VAR_5++ |= *VAR_6++;
     }
     else
     {
  VAR_5 += VAR_3;
     }

     VAR_8 += VAR_3;
 }

 if (++VAR_4 >= VAR_0)
 {
     VAR_4 = 0;
     VAR_10++;
 }

 VAR_11 += VAR_3;
    }
}
