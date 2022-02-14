
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct isis_subtlv_spb_mcid {int aux_mcid; int mcid; } ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const,int) ;
 int VAR_3 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(netdissect_options *VAR_5,
                              const uint8_t *VAR_6, int VAR_7)
{
  int VAR_8, VAR_9;
  const struct isis_subtlv_spb_mcid *VAR_10;
  int VAR_11;

  while (VAR_7 > 2)
  {
    FUNC_3(*VAR_6, 2);
    VAR_8 = *(VAR_6++);
    VAR_9 = *(VAR_6++);


    FUNC_2((VAR_5, "\n\t       %s subTLV #%u, length: %u",
               FUNC_5(VAR_3, "unknown", VAR_8),
               VAR_8,
               VAR_9));


    VAR_7 = VAR_7 -2;


    if (VAR_7 < VAR_9)
      goto trunc;

    FUNC_3(*(VAR_6), VAR_9);

    switch (VAR_8)
    {
      case 128:
      {
       if (VAR_9 < VAR_2)
         goto trunc;

        VAR_10 = (const struct isis_subtlv_spb_mcid *)VAR_6;

        FUNC_2((VAR_5, "\n\t         MCID: "));
        FUNC_4(VAR_5, &(VAR_10->mcid));




        FUNC_2((VAR_5, "\n\t         AUX-MCID: "));
        FUNC_4(VAR_5, &(VAR_10->aux_mcid));



        VAR_6 = VAR_6 + VAR_2;
        VAR_7 = VAR_7 - VAR_2;
        VAR_9 = VAR_9 - VAR_2;

        break;
      }

      case 129:
      {
        if (VAR_9 < VAR_1)
          goto trunc;

        FUNC_2((VAR_5, "\n\t        RES: %d V: %d A: %d D: %d",
                        (*(VAR_6) >> 5), (((*VAR_6)>> 4) & 0x01),
                        ((*(VAR_6) >> 2) & 0x03), ((*VAR_6) & 0x03)));

        VAR_6++;

        FUNC_2((VAR_5, "\n\t         Digest: "));

        for(VAR_11=1;VAR_11<=8; VAR_11++)
        {
            FUNC_2((VAR_5, "%08x ", FUNC_1(VAR_6)));
            if (VAR_11%4 == 0 && VAR_11 != 8)
              FUNC_2((VAR_5, "\n\t                 "));
            VAR_6 = VAR_6 + 4;
        }

        VAR_7 = VAR_7 - VAR_1;
        VAR_9 = VAR_9 - VAR_1;

        break;
      }

      case 130:
      {
        while (VAR_9 >= VAR_0)
        {
          FUNC_2((VAR_5, "\n\t           ECT: %08x",
                      FUNC_1(VAR_6)));

          VAR_6 = VAR_6+4;

          FUNC_2((VAR_5, " BVID: %d, U:%01x M:%01x ",
                     (FUNC_0 (VAR_6) >> 4) ,
                     (FUNC_0 (VAR_6) >> 3) & 0x01,
                     (FUNC_0 (VAR_6) >> 2) & 0x01));

          VAR_6 = VAR_6 + 2;
          VAR_7 = VAR_7 - VAR_0;
          VAR_9 = VAR_9 - VAR_0;
        }

        break;
      }

      default:
        break;
    }
    VAR_6 += VAR_9;
    VAR_7 -= VAR_9;
  }

  return 0;

  trunc:
    FUNC_2((VAR_5, "\n\t\t"));
    FUNC_2((VAR_5, "%s", VAR_4));
    return(1);
}
