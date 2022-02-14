
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

unsigned
FUNC_0(const char *VAR_3)
{
    unsigned VAR_4 = 0;
    unsigned VAR_5;
    const unsigned char *VAR_6 = (const unsigned char *)VAR_3;

    for (; *VAR_6; ++VAR_6) {
 VAR_4 = (VAR_4 << VAR_2) + *VAR_6;
 if ((VAR_5 = VAR_4 & VAR_0))
     VAR_4 = (VAR_4 ^ (VAR_5 >> VAR_1)) & ~VAR_0;
    }
    return VAR_4;
}
