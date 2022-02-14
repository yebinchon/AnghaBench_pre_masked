
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_1,
                         const u_char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3 < 2)
  return 0;
 FUNC_2(*VAR_2, 2);
 VAR_4 = VAR_2[1];
 VAR_5 = VAR_2[0];
 if (VAR_3 < VAR_4)
  return 0;
 if (VAR_4 < 2) {
  FUNC_0((VAR_1, "\n\t  %s Option (0x%02x), length %u (length bogus, should be >= 2)",
            FUNC_4(VAR_0, "Unknown", VAR_5),
            VAR_5,
            VAR_4));
  return 0;
 }

 FUNC_0((VAR_1, "\n\t  %s Option (0x%02x), length %u",
           FUNC_4(VAR_0, "Unknown", VAR_5),
           VAR_5,
           VAR_4));

 switch (VAR_5) {
 case 142:
  if (VAR_4 < 3) {
   FUNC_0((VAR_1, " (length bogus, should be >= 3)"));
   return VAR_4;
  }
  FUNC_1(VAR_2[2]);
  FUNC_0((VAR_1, ": Version: %u, Dictionary Bits: %u",
   VAR_2[2] >> 5, VAR_2[2] & 0x1f));
  break;
 case 135:
  if (VAR_4 < 4) {
   FUNC_0((VAR_1, " (length bogus, should be >= 4)"));
   return VAR_4;
  }
  FUNC_1(VAR_2[3]);
  FUNC_0((VAR_1, ": Features: %u, PxP: %s, History: %u, #CTX-ID: %u",
    (VAR_2[2] & 0xc0) >> 6,
    (VAR_2[2] & 0x20) ? "Enabled" : "Disabled",
    VAR_2[2] & 0x1f, VAR_2[3]));
  break;
 case 140:
  if (VAR_4 < 4) {
   FUNC_0((VAR_1, " (length bogus, should be >= 4)"));
   return VAR_4;
  }
  FUNC_1(VAR_2[3]);
  FUNC_0((VAR_1, ": Window: %uK, Method: %s (0x%x), MBZ: %u, CHK: %u",
   (VAR_2[2] & 0xf0) >> 4,
   ((VAR_2[2] & 0x0f) == 8) ? "zlib" : "unknown",
   VAR_2[2] & 0x0f, (VAR_2[3] & 0xfc) >> 2, VAR_2[3] & 0x03));
  break;
 default:




  if (VAR_1->ndo_vflag < 2)
   FUNC_3(VAR_1, &VAR_2[2], "\n\t    ", VAR_4 - 2);
  break;
 }
 if (VAR_1->ndo_vflag > 1)
  FUNC_3(VAR_1, &VAR_2[2], "\n\t    ", VAR_4 - 2);

 return VAR_4;

trunc:
 FUNC_0((VAR_1, "[|ccp]"));
 return 0;
}
