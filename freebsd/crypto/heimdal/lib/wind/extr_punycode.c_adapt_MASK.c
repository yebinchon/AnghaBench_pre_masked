
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static unsigned
FUNC_0(unsigned VAR_5, unsigned VAR_6, int VAR_7)
{
    unsigned VAR_8;

    if (VAR_7)
 VAR_5 = VAR_5 / VAR_1;
    else
 VAR_5 /= 2;
    VAR_5 += VAR_5 / VAR_6;
    VAR_8 = 0;
    while (VAR_5 > ((VAR_0 - VAR_4) * VAR_3) / 2) {
 VAR_5 /= VAR_0 - VAR_4;
 VAR_8 += VAR_0;
    }
    return VAR_8 + (((VAR_0 - VAR_4 + 1) * VAR_5) / (VAR_5 + VAR_2));
}
