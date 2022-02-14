
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;

 int FUNC_1 (TYPE_1__*) ;
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
  FUNC_1((VAR_1, "\n\t  %s Option (0x%02x), length %u (length bogus, should be >= 2)",
         FUNC_4(VAR_0,"unknown",VAR_5),
         VAR_5,
         VAR_4));
  return 0;
 }

 FUNC_1((VAR_1, "\n\t  %s Option (0x%02x), length %u",
        FUNC_4(VAR_0,"unknown",VAR_5),
        VAR_5,
        VAR_4));

 switch (VAR_5) {
 case 128:
  if (VAR_4 != 10) {
   FUNC_1((VAR_1, " (length bogus, should be = 10)"));
   return VAR_4;
  }
  FUNC_2(*(VAR_2 + 2), 8);
  FUNC_1((VAR_1, ": %04x:%04x:%04x:%04x",
         FUNC_0(VAR_2 + 2),
         FUNC_0(VAR_2 + 4),
         FUNC_0(VAR_2 + 6),
         FUNC_0(VAR_2 + 8)));
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
 FUNC_1((VAR_1, "[|ip6cp]"));
 return 0;
}
