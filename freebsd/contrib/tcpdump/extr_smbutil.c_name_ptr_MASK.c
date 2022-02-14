
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const,int) ;

__attribute__((used)) static const u_char *
FUNC_2(netdissect_options *VAR_0,
         const u_char *VAR_1, int VAR_2, const u_char *VAR_3)
{
    const u_char *VAR_4;
    u_char VAR_5;

    VAR_4 = VAR_1 + VAR_2;
    if (VAR_4 >= VAR_3)
 return(((void*)0));
    FUNC_1(*VAR_4, 1);

    VAR_5 = *VAR_4;


    if ((VAR_5 & 0xC0) == 0xC0) {
 uint16_t VAR_6;

 FUNC_1(*VAR_4, 2);
 if ((VAR_4 + 1) >= VAR_3)
     return(((void*)0));
 VAR_6 = FUNC_0(VAR_4) & 0x3FFF;
 if (VAR_6 == 0) {

     return(((void*)0));
 }
 VAR_4 = VAR_1 + VAR_6;
 if (VAR_4 >= VAR_3)
     return(((void*)0));
 FUNC_1(*VAR_4, 1);
    }
    return(VAR_4);

trunc:
    return(((void*)0));
}
