
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int*,int) ;

void
FUNC_2(unsigned *VAR_1, int VAR_2)
{
    int VAR_3;
    unsigned VAR_4;
    unsigned *VAR_5;
    unsigned *VAR_6;

    FUNC_1(VAR_1, VAR_2);

    VAR_3 = FUNC_0(VAR_2);
    VAR_6 = VAR_1 + VAR_2 * VAR_3;

    VAR_4 = 0;
    VAR_5 = VAR_1;
    while (VAR_5 < VAR_6)
    {
 *VAR_5 |= (unsigned)(1 << VAR_4);
 if (++VAR_4 >= VAR_0)
 {
     VAR_4 = 0;
     VAR_5++;
 }

 VAR_5 += VAR_3;
    }
}
