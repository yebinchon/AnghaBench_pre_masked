
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int tlv ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int VAR_0 ;




 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int const,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_9(netdissect_options *VAR_4,
                        const u_char *VAR_5, u_int VAR_6)
{
    int VAR_7, VAR_8 = VAR_0;
    uint8_t VAR_9;
    uint16_t VAR_10;
    uint32_t VAR_11, VAR_12, VAR_13;
    u_int VAR_14, VAR_15, VAR_16;
    const u_char *VAR_17, *VAR_18;

    if (VAR_6 < 4) {
        return VAR_8;
    }
    VAR_7 = *(VAR_5+3);

    FUNC_5((VAR_4, "\n\t  %s Subtype (%u)",
           FUNC_8(VAR_3, "unknown", VAR_7),
           VAR_7));


    if (VAR_7 == VAR_1)
 return VAR_2;

    VAR_17 = VAR_5 + 4;
    VAR_14 = VAR_6 - 4;

    while (VAR_14 >= sizeof(VAR_10)) {

        FUNC_6(*VAR_17, sizeof(VAR_10));

        VAR_10 = FUNC_0(VAR_17);

        VAR_15 = FUNC_4(VAR_10);
        VAR_16 = FUNC_3(VAR_10);
        VAR_8 = VAR_0;

        VAR_14 -= sizeof(VAR_10);
        VAR_17 += sizeof(VAR_10);


        if (!VAR_15 || !VAR_16) {
            break;
        }

        FUNC_6(*VAR_17, VAR_16);
        if (VAR_14 < VAR_16) {
            goto trunc;
        }


        switch (VAR_15) {
        case 130:
            if (VAR_16 < 10) {
                goto trunc;
            }
     FUNC_5((VAR_4, "\n\t    Control - Protocol Control (type 0x%x, length %d)",
  130, VAR_16));
     FUNC_5((VAR_4, "\n\t      Oper_Version: %d", *VAR_17));
     FUNC_5((VAR_4, "\n\t      Max_Version: %d", *(VAR_17 + 1)));
     FUNC_5((VAR_4, "\n\t      Sequence Number: %d", FUNC_2(VAR_17 + 2)));
     FUNC_5((VAR_4, "\n\t      Acknowledgement Number: %d",
     FUNC_2(VAR_17 + 6)));
     break;
        case 128:
            if (VAR_16 < 17) {
                goto trunc;
            }
     FUNC_5((VAR_4, "\n\t    Feature - Priority Group (type 0x%x, length %d)",
  128, VAR_16));
     FUNC_5((VAR_4, "\n\t      Oper_Version: %d", *VAR_17));
     FUNC_5((VAR_4, "\n\t      Max_Version: %d", *(VAR_17 + 1)));
     FUNC_5((VAR_4, "\n\t      Info block(0x%02X): ", *(VAR_17 + 2)));
     VAR_9 = *(VAR_17+2);
     FUNC_5((VAR_4, "Enable bit: %d, Willing bit: %d, Error Bit: %d",
  (VAR_9 & 0x80) ? 1 : 0, (VAR_9 & 0x40) ? 1 : 0,
  (VAR_9 & 0x20) ? 1 : 0));
     FUNC_5((VAR_4, "\n\t      SubType: %d", *(VAR_17 + 3)));
     FUNC_5((VAR_4, "\n\t      Priority Allocation"));





     VAR_12 = FUNC_2(VAR_17+4);
     for (VAR_11 = 0; VAR_11 <= 7; VAR_11++) {
  FUNC_5((VAR_4, "\n\t          PgId_%d: %d",
   VAR_11, (VAR_12 >> (28 - 4 * VAR_11)) & 0xF));
     }
     FUNC_5((VAR_4, "\n\t      Priority Group Allocation"));
     for (VAR_11 = 0; VAR_11 <= 7; VAR_11++)
  FUNC_5((VAR_4, "\n\t          Pg percentage[%d]: %d", VAR_11, *(VAR_17 + 8 + VAR_11)));
     FUNC_5((VAR_4, "\n\t      NumTCsSupported: %d", *(VAR_17 + 8 + 8)));
     break;
        case 129:
            if (VAR_16 < 6) {
                goto trunc;
            }
     FUNC_5((VAR_4, "\n\t    Feature - Priority Flow Control"));
     FUNC_5((VAR_4, " (type 0x%x, length %d)",
  129, VAR_16));
     FUNC_5((VAR_4, "\n\t      Oper_Version: %d", *VAR_17));
     FUNC_5((VAR_4, "\n\t      Max_Version: %d", *(VAR_17 + 1)));
     FUNC_5((VAR_4, "\n\t      Info block(0x%02X): ", *(VAR_17 + 2)));
     VAR_9 = *(VAR_17+2);
     FUNC_5((VAR_4, "Enable bit: %d, Willing bit: %d, Error Bit: %d",
  (VAR_9 & 0x80) ? 1 : 0, (VAR_9 & 0x40) ? 1 : 0,
  (VAR_9 & 0x20) ? 1 : 0));
     FUNC_5((VAR_4, "\n\t      SubType: %d", *(VAR_17 + 3)));
     VAR_9 = *(VAR_17+4);
     FUNC_5((VAR_4, "\n\t      PFC Config (0x%02X)", *(VAR_17 + 4)));
     for (VAR_11 = 0; VAR_11 <= 7; VAR_11++)
  FUNC_5((VAR_4, "\n\t          Priority Bit %d: %s",
      VAR_11, (VAR_9 & (1 << VAR_11)) ? "Enabled" : "Disabled"));
     FUNC_5((VAR_4, "\n\t      NumTCPFCSupported: %d", *(VAR_17 + 5)));
     break;
        case 131:
            if (VAR_16 < 4) {
                goto trunc;
            }
     FUNC_5((VAR_4, "\n\t    Feature - Application (type 0x%x, length %d)",
  131, VAR_16));
     FUNC_5((VAR_4, "\n\t      Oper_Version: %d", *VAR_17));
     FUNC_5((VAR_4, "\n\t      Max_Version: %d", *(VAR_17 + 1)));
     FUNC_5((VAR_4, "\n\t      Info block(0x%02X): ", *(VAR_17 + 2)));
     VAR_9 = *(VAR_17+2);
     FUNC_5((VAR_4, "Enable bit: %d, Willing bit: %d, Error Bit: %d",
  (VAR_9 & 0x80) ? 1 : 0, (VAR_9 & 0x40) ? 1 : 0,
  (VAR_9 & 0x20) ? 1 : 0));
     FUNC_5((VAR_4, "\n\t      SubType: %d", *(VAR_17 + 3)));
     VAR_9 = VAR_16 - 4;
     VAR_18 = VAR_17 + 4;
     while (VAR_9 >= 6) {
  FUNC_5((VAR_4, "\n\t      Application Value"));
  FUNC_5((VAR_4, "\n\t          Application Protocol ID: 0x%04x",
   FUNC_0(VAR_18)));
  VAR_13 = FUNC_1(VAR_18+2);
  FUNC_5((VAR_4, "\n\t          SF (0x%x) Application Protocol ID is %s",
   (VAR_13 >> 22),
   (VAR_13 >> 22) ? "Socket Number" : "L2 EtherType"));
  FUNC_5((VAR_4, "\n\t          OUI: 0x%06x", VAR_13 & 0x3fffff));
  FUNC_5((VAR_4, "\n\t          User Priority Map: 0x%02x", *(VAR_18 + 5)));
  VAR_9 = VAR_9 - 6;
  VAR_18 = VAR_18 + 6;
     }
     break;
 default:
     VAR_8 = VAR_2;
     break;
 }


        if (VAR_4->ndo_vflag > 1 || (VAR_4->ndo_vflag && VAR_8)) {
     FUNC_7(VAR_4, VAR_17, "\n\t    ", VAR_16);
        }

        VAR_14 -= VAR_16;
        VAR_17 += VAR_16;
    }

 trunc:
    return VAR_8;
}
