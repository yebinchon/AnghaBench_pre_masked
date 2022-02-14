
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int * tptr ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const,int) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(netdissect_options *VAR_4,
                                const uint8_t *VAR_5, int VAR_6)
{
  int VAR_7, VAR_8, VAR_9;

  while (VAR_6 > 2)
  {
    FUNC_4(*VAR_5, 2);
    VAR_7 = *(VAR_5++);
    VAR_8 = *(VAR_5++);


    FUNC_3((VAR_4, "\n\t      %s subTLV #%u, length: %u",
               FUNC_5(VAR_2, "unknown", VAR_7),
               VAR_7,
               VAR_8));

    VAR_6 = VAR_6 - 2;


    if (VAR_6 < VAR_8)
      goto trunc;

    FUNC_4(*(VAR_5), VAR_8);

    switch (VAR_7)
    {
      case 128:
          if (VAR_8 < VAR_0)
            goto trunc;

          FUNC_3((VAR_4, "\n\t        CIST Root-ID: %08x", FUNC_2(VAR_5)));
          VAR_5 = VAR_5+4;
          FUNC_3((VAR_4, " %08x", FUNC_2(VAR_5)));
          VAR_5 = VAR_5+4;
          FUNC_3((VAR_4, ", Path Cost: %08x", FUNC_2(VAR_5)));
          VAR_5 = VAR_5+4;
          FUNC_3((VAR_4, ", Prio: %d", FUNC_0(VAR_5)));
          VAR_5 = VAR_5 + 2;
          FUNC_3((VAR_4, "\n\t        RES: %d",
                    FUNC_0(VAR_5) >> 5));
          FUNC_3((VAR_4, ", V: %d",
                    (FUNC_0(VAR_5) >> 4) & 0x0001));
          FUNC_3((VAR_4, ", SPSource-ID: %d",
                    (FUNC_2(VAR_5) & 0x000fffff)));
          VAR_5 = VAR_5+4;
          FUNC_3((VAR_4, ", No of Trees: %x", *(VAR_5)));

          VAR_9 = *(VAR_5++);

          VAR_6 = VAR_6 - VAR_0;
          VAR_8 = VAR_8 - VAR_0;

          while (VAR_9)
          {
            if (VAR_8 < VAR_1)
              goto trunc;

            FUNC_3((VAR_4, "\n\t         U:%d, M:%d, A:%d, RES:%d",
                      *(VAR_5) >> 7, (*(VAR_5) >> 6) & 0x01,
                      (*(VAR_5) >> 5) & 0x01, (*(VAR_5) & 0x1f)));

            VAR_5++;

            FUNC_3((VAR_4, ", ECT: %08x", FUNC_2(VAR_5)));

            VAR_5 = VAR_5 + 4;

            FUNC_3((VAR_4, ", BVID: %d, SPVID: %d",
                      (FUNC_1(VAR_5) >> 12) & 0x000fff,
                      FUNC_1(VAR_5) & 0x000fff));

            VAR_5 = VAR_5 + 3;
            VAR_6 = VAR_6 - VAR_1;
            VAR_8 = VAR_8 - VAR_1;
            VAR_9--;
          }

          break;

      case 129:
          if (VAR_8 < 8)
            goto trunc;

          FUNC_3((VAR_4, "\n\t        BMAC: %08x", FUNC_2(VAR_5)));
          VAR_5 = VAR_5+4;
          FUNC_3((VAR_4, "%04x", FUNC_0(VAR_5)));
          VAR_5 = VAR_5+2;

          FUNC_3((VAR_4, ", RES: %d, VID: %d", FUNC_0(VAR_5) >> 12,
                    (FUNC_0(VAR_5)) & 0x0fff));

          VAR_5 = VAR_5+2;
          VAR_6 = VAR_6 - 8;
          VAR_8 = VAR_8 - 8;

          while (VAR_8 >= 4) {
            FUNC_4(*VAR_5, 4);
            FUNC_3((VAR_4, "\n\t        T: %d, R: %d, RES: %d, ISID: %d",
                    (FUNC_2(VAR_5) >> 31),
                    (FUNC_2(VAR_5) >> 30) & 0x01,
                    (FUNC_2(VAR_5) >> 24) & 0x03f,
                    (FUNC_2(VAR_5)) & 0x0ffffff));

            VAR_5 = VAR_5 + 4;
            VAR_6 = VAR_6 - 4;
            VAR_8 = VAR_8 - 4;
          }

        break;

      default:
        break;
    }
    VAR_5 += VAR_8;
    VAR_6 -= VAR_8;
  }
  return 0;

  trunc:
    FUNC_3((VAR_4, "\n\t\t"));
    FUNC_3((VAR_4, "%s", VAR_3));
    return(1);
}
