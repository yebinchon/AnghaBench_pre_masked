
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netdissect_options ;


 int FUNC_0 (unsigned char const,int) ;
 int FUNC_1 (unsigned char const*,unsigned char const*) ;

__attribute__((used)) static int
FUNC_2(netdissect_options *VAR_0,
         const unsigned char *VAR_1, const unsigned char *VAR_2)
{
    const unsigned char *VAR_3 = VAR_1;
    unsigned char VAR_4;

    if (VAR_1 >= VAR_2)
 return(-1);
    FUNC_0(*VAR_1, 1);
    VAR_4 = *VAR_1;
    if ((VAR_4 & 0xC0) == 0xC0)
 return(2);
    while (*VAR_1) {
 if (VAR_1 >= VAR_2)
     return(-1);
 FUNC_0(*VAR_1, 1);
 VAR_1 += (*VAR_1) + 1;
 FUNC_0(*VAR_1, 1);
    }
    return(FUNC_1(VAR_1, VAR_3) + 1);

trunc:
    return(-1);
}
