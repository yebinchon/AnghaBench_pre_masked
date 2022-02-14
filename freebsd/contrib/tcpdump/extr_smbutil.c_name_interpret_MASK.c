
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int netdissect_options ;


 int FUNC_0 (char const,int) ;

__attribute__((used)) static int
FUNC_1(netdissect_options *VAR_0,
               const u_char *VAR_1, const u_char *VAR_2, char *VAR_3)
{
    int VAR_4;
    int VAR_5;

    if (VAR_1 >= VAR_2)
 return(-1);
    FUNC_0(*VAR_1, 1);
    VAR_5 = (*VAR_1++) / 2;

    *VAR_3=0;

    if (VAR_5 > 30 || VAR_5 < 1)
 return(0);

    while (VAR_5--) {
 FUNC_0(*VAR_1, 2);
 if (VAR_1 + 1 >= VAR_2)
     return(-1);
 if (VAR_1[0] < 'A' || VAR_1[0] > 'P' || VAR_1[1] < 'A' || VAR_1[1] > 'P') {
     *VAR_3 = 0;
     return(0);
 }
 *VAR_3 = ((VAR_1[0] - 'A') << 4) + (VAR_1[1] - 'A');
 VAR_1 += 2;
 VAR_3++;
    }
    *VAR_3 = 0;
    VAR_4 = VAR_3[-1];

    return(VAR_4);

trunc:
    return(-1);
}
