
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;




 int FUNC_2 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,char*,int const) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int const*) ;
 int FUNC_6 (int *,int const*) ;
 int FUNC_7 (int *,int const*,int) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_9(netdissect_options *VAR_13,
                        const u_char *VAR_14, u_int VAR_15)
{
    int VAR_16, VAR_17 = VAR_0;
    u_int VAR_18;
    u_int VAR_19;
    u_int VAR_20;

    if (VAR_15 < 4) {
        return VAR_17;
    }
    VAR_16 = *(VAR_14+3);

    FUNC_2((VAR_13, "\n\t  %s Subtype (%u)",
           FUNC_8(VAR_11, "unknown", VAR_16),
           VAR_16));

    switch (VAR_16) {
    case 131:
        if (VAR_15 < 6) {
            return VAR_17;
        }
        FUNC_2((VAR_13, "\n\t    port vlan id (PVID): %u",
               FUNC_0(VAR_14 + 4)));
        break;
    case 129:
        if (VAR_15 < 7) {
            return VAR_17;
        }
        FUNC_2((VAR_13, "\n\t    port and protocol vlan id (PPVID): %u, flags [%s] (0x%02x)",
               FUNC_0(VAR_14+5),
        FUNC_3(VAR_10, "none", *(VAR_14+4)),
        *(VAR_14 + 4)));
        break;
    case 128:
        if (VAR_15 < 6) {
            return VAR_17;
        }
        FUNC_2((VAR_13, "\n\t    vlan id (VID): %u", FUNC_0(VAR_14 + 4)));
        if (VAR_15 < 7) {
            return VAR_17;
        }
        VAR_18 = *(VAR_14+6);
        if (VAR_15 < 7+VAR_18) {
            return VAR_17;
        }
        FUNC_2((VAR_13, "\n\t    vlan name: "));
        FUNC_7(VAR_13, VAR_14 + 7, VAR_18);
        break;
    case 130:
        if (VAR_15 < 5) {
            return VAR_17;
        }
        VAR_18 = *(VAR_14+4);
        if (VAR_15 < 5+VAR_18) {
            return VAR_17;
        }
        FUNC_2((VAR_13, "\n\t    protocol identity: "));
        FUNC_7(VAR_13, VAR_14 + 5, VAR_18);
        break;
    case 136:
        if(VAR_15<VAR_3){
         return VAR_17;
        }
        VAR_19=*(VAR_14+4);
        FUNC_2((VAR_13, "\n\t    Pre-Priority CNPV Indicator"));
        FUNC_2((VAR_13, "\n\t     Priority : 0  1  2  3  4  5  6  7"));
        FUNC_2((VAR_13, "\n\t     Value    : "));
        for(VAR_20=0;VAR_20<VAR_8;VAR_20++)
            FUNC_2((VAR_13, "%-2d ", (VAR_19 >> VAR_20) & 0x01));
        VAR_19=*(VAR_14+5);
        FUNC_2((VAR_13, "\n\t    Pre-Priority Ready Indicator"));
        FUNC_2((VAR_13, "\n\t     Priority : 0  1  2  3  4  5  6  7"));
        FUNC_2((VAR_13, "\n\t     Value    : "));
        for(VAR_20=0;VAR_20<VAR_8;VAR_20++)
            FUNC_2((VAR_13, "%-2d ", (VAR_19 >> VAR_20) & 0x01));
        break;

    case 135:
        if(VAR_15<VAR_4) {
            return VAR_17;
        }
        VAR_19=*(VAR_14+4);
        FUNC_2((VAR_13, "\n\t    Willing:%d, CBS:%d, RES:%d, Max TCs:%d",
         VAR_19 >> 7, (VAR_19 >> 6) & 0x02, (VAR_19 >> 3) & 0x07, VAR_19 & 0x07));


        FUNC_4(VAR_13, VAR_14 + 5);


        FUNC_5(VAR_13, VAR_14 + 9);


        FUNC_6(VAR_13, VAR_14 + 17);

        break;

    case 134:
        if(VAR_15<VAR_5) {
         return VAR_17;
        }
        FUNC_2((VAR_13, "\n\t    RES: %d", *(VAR_14 + 4)));

        FUNC_4(VAR_13, VAR_14 + 5);

        FUNC_5(VAR_13, VAR_14 + 9);

        FUNC_6(VAR_13, VAR_14 + 17);
        break;

    case 132:
        if(VAR_15<VAR_7) {
            return VAR_17;
        }
        VAR_19=*(VAR_14+4);
        FUNC_2((VAR_13, "\n\t    Willing: %d, MBC: %d, RES: %d, PFC cap:%d ",
         VAR_19 >> 7, (VAR_19 >> 6) & 0x01, (VAR_19 >> 4) & 0x03, (VAR_19 & 0x0f)));
        FUNC_2((VAR_13, "\n\t    PFC Enable"));
        VAR_19=*(VAR_14+5);
        FUNC_2((VAR_13, "\n\t     Priority : 0  1  2  3  4  5  6  7"));
        FUNC_2((VAR_13, "\n\t     Value    : "));
        for(VAR_20=0;VAR_20<VAR_8;VAR_20++)
            FUNC_2((VAR_13, "%-2d ", (VAR_19 >> VAR_20) & 0x01));
        break;

    case 138:
        if(VAR_15<VAR_1) {
            return VAR_17;
        }
        FUNC_2((VAR_13, "\n\t    RES: %d", *(VAR_14 + 4)));
        if(VAR_15<=VAR_1){
         return VAR_17;
        }

        VAR_18=VAR_15-5;
        if(VAR_18%3!=0){
         return VAR_17;
        }
        VAR_20=0;
        FUNC_2((VAR_13, "\n\t    Application Priority Table"));
        while(VAR_20<VAR_18) {
         VAR_19=*(VAR_14+VAR_20+5);
         FUNC_2((VAR_13, "\n\t      Priority: %u, RES: %u, Sel: %u, Protocol ID: %u",
           VAR_19 >> 5, (VAR_19 >> 3) & 0x03, (VAR_19 & 0x07),
           FUNC_0(VAR_14 + VAR_20 + 5)));
         VAR_20=VAR_20+3;
        }
        break;
    case 133:
        if(VAR_15<VAR_6){
         return VAR_17;
        }
        FUNC_2((VAR_13, "\n\t    EVB Bridge Status"));
        VAR_19=*(VAR_14+4);
        FUNC_2((VAR_13, "\n\t      RES: %d, BGID: %d, RRCAP: %d, RRCTR: %d",
         VAR_19 >> 3, (VAR_19 >> 2) & 0x01, (VAR_19 >> 1) & 0x01, VAR_19 & 0x01));
        FUNC_2((VAR_13, "\n\t    EVB Station Status"));
        VAR_19=*(VAR_14+5);
        FUNC_2((VAR_13, "\n\t      RES: %d, SGID: %d, RRREQ: %d,RRSTAT: %d",
         VAR_19 >> 4, (VAR_19 >> 3) & 0x01, (VAR_19 >> 2) & 0x01, VAR_19 & 0x03));
        VAR_19=*(VAR_14+6);
        FUNC_2((VAR_13, "\n\t    R: %d, RTE: %d, ",VAR_19 >> 5, VAR_19 & 0x1f));
        VAR_19=*(VAR_14+7);
        FUNC_2((VAR_13, "EVB Mode: %s [%d]",
         FUNC_8(VAR_12, "unknown", VAR_19 >> 6), VAR_19 >> 6));
        FUNC_2((VAR_13, "\n\t    ROL: %d, RWD: %d, ", (VAR_19 >> 5) & 0x01, VAR_19 & 0x1f));
        VAR_19=*(VAR_14+8);
        FUNC_2((VAR_13, "RES: %d, ROL: %d, RKA: %d", VAR_19 >> 6, (VAR_19 >> 5) & 0x01, VAR_19 & 0x1f));
        break;

    case 137:
        if(VAR_15<VAR_2){
         return VAR_17;
        }
        VAR_19=*(VAR_14+4);
        FUNC_2((VAR_13, "\n\t    Role: %d, RES: %d, Scomp: %d ",
         VAR_19 >> 7, (VAR_19 >> 4) & 0x07, (VAR_19 >> 3) & 0x01));
        FUNC_2((VAR_13, "ChnCap: %d", FUNC_0(VAR_14 + 6) & 0x0fff));
        VAR_18=VAR_15-8;
        if(VAR_18%3!=0) {
         return VAR_17;
        }
        VAR_20=0;
        while(VAR_20<VAR_18) {
         VAR_19=FUNC_1(VAR_14+VAR_20+8);
         FUNC_2((VAR_13, "\n\t    SCID: %d, SVID: %d",
          VAR_19 >> 12, VAR_19 & 0x000fff));
         VAR_20=VAR_20+3;
        }
        break;

    default:
        VAR_17 = VAR_9;
        break;
    }

    return VAR_17;
}
