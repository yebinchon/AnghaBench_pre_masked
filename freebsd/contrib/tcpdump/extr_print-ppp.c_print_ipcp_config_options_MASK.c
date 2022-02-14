
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;




 int VAR_0 ;





 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int const*) ;

 int FUNC_4 (TYPE_1__*,int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_7(netdissect_options *VAR_4,
                          const u_char *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
        u_int VAR_9, VAR_10, VAR_11, VAR_12;

 if (VAR_6 < 2)
  return 0;
 FUNC_2(*VAR_5, 2);
 VAR_7 = VAR_5[1];
 VAR_8 = VAR_5[0];
 if (VAR_6 < VAR_7)
  return 0;
 if (VAR_7 < 2) {
  FUNC_1((VAR_4, "\n\t  %s Option (0x%02x), length %u (length bogus, should be >= 2)",
         FUNC_6(VAR_3,"unknown",VAR_8),
         VAR_8,
         VAR_7));
  return 0;
 }

 FUNC_1((VAR_4, "\n\t  %s Option (0x%02x), length %u",
        FUNC_6(VAR_3,"unknown",VAR_8),
        VAR_8,
        VAR_7));

 switch (VAR_8) {
 case 137:
  if (VAR_7 != 10) {
   FUNC_1((VAR_4, " (length bogus, should be = 10)"));
   return VAR_7;
  }
  FUNC_2(*(VAR_5 + 6), 4);
  FUNC_1((VAR_4, ": src %s, dst %s",
         FUNC_4(VAR_4, VAR_5 + 2),
         FUNC_4(VAR_4, VAR_5 + 6)));
  break;
 case 135:
  if (VAR_7 < 4) {
   FUNC_1((VAR_4, " (length bogus, should be >= 4)"));
   return 0;
  }
  FUNC_3(VAR_5+2);
  VAR_9 = FUNC_0(VAR_5+2);

  FUNC_1((VAR_4, ": %s (0x%02x):",
            FUNC_6(VAR_2, "Unknown", VAR_9),
            VAR_9));

  switch (VAR_9) {
                case 128:

                        break;
                case 134:
                        if (VAR_7 < VAR_0) {
                         FUNC_1((VAR_4, " (length bogus, should be >= %u)",
                          VAR_0));
                         return 0;
                        }

                        FUNC_2(*(VAR_5 + 2), VAR_0);
                        FUNC_1((VAR_4, "\n\t    TCP Space %u, non-TCP Space %u" ", maxPeriod %u, maxTime %u, maxHdr %u",

                               FUNC_0(VAR_5+4),
                               FUNC_0(VAR_5+6),
                               FUNC_0(VAR_5+8),
                               FUNC_0(VAR_5+10),
                               FUNC_0(VAR_5+12)));


                        if (VAR_7 > VAR_0) {
                                VAR_10 = VAR_7 - VAR_0;
                                VAR_5 += VAR_0;

                                FUNC_1((VAR_4, "\n\t      Suboptions, length %u", VAR_10));

                                while (VAR_10 >= 2) {
                                        FUNC_2(*VAR_5, 2);
                                        VAR_11 = *VAR_5;
                                        VAR_12 = *(VAR_5+1);


                                        if (VAR_11 == 0 ||
                                            VAR_12 == 0 )
                                                break;


                                        FUNC_1((VAR_4, "\n\t\t%s Suboption #%u, length %u",
                                               FUNC_6(VAR_1,
                                                       "Unknown",
                                                       VAR_11),
                                               VAR_11,
                                               VAR_12));

                                        VAR_10 -= VAR_12;
                                        VAR_5 += VAR_12;
                                }
                        }
                        break;
                default:
                        break;
  }
  break;

 case 136:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
  if (VAR_7 != 6) {
   FUNC_1((VAR_4, " (length bogus, should be = 6)"));
   return 0;
  }
  FUNC_2(*(VAR_5 + 2), 4);
  FUNC_1((VAR_4, ": %s", FUNC_4(VAR_4, VAR_5 + 2)));
  break;
 default:




  if (VAR_4->ndo_vflag < 2)
   FUNC_5(VAR_4, &VAR_5[2], "\n\t    ", VAR_7 - 2);
  break;
 }
 if (VAR_4->ndo_vflag > 1)
  FUNC_5(VAR_4, &VAR_5[2], "\n\t    ", VAR_7 - 2);
 return VAR_7;

trunc:
 FUNC_1((VAR_4, "[|ipcp]"));
 return 0;
}
