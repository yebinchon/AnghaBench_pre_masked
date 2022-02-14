
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;



 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int const*,char*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_2,
                           const uint8_t *VAR_3, int VAR_4, int VAR_5,
                           const char *VAR_6)
{

    FUNC_1((VAR_2, "%s%s subTLV #%u, length: %u",
              VAR_6, FUNC_4(VAR_0, "unknown", VAR_4),
              VAR_4, VAR_5));

    FUNC_2(*VAR_3,VAR_5);

    switch(VAR_4) {
    case 128:
    case 130:
        while (VAR_5 >= 4) {
     FUNC_1((VAR_2, ", 0x%08x (=%u)",
     FUNC_0(VAR_3),
     FUNC_0(VAR_3)));
     VAR_3+=4;
     VAR_5-=4;
 }
 break;
    case 129:
        while (VAR_5 >= 8) {
     FUNC_1((VAR_2, ", 0x%08x%08x",
     FUNC_0(VAR_3),
     FUNC_0(VAR_3+4)));
     VAR_3+=8;
     VAR_5-=8;
 }
 break;
    default:
 if (!FUNC_3(VAR_2, VAR_3, "\n\t\t    ", VAR_5))
   return(0);
 break;
    }
    return(1);

trunc:
    FUNC_1((VAR_2, "%s", VAR_6));
    FUNC_1((VAR_2, "%s", VAR_1));
    return(0);
}
