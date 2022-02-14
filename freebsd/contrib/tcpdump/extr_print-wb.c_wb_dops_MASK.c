
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_char ;
struct pkt_dop {int dummy; } ;
struct dophdr {int dh_type; int dh_ts; } ;
typedef int netdissect_options ;


 struct dophdr* FUNC_0 (struct dophdr const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dophdr const) ;
 int * VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_5, const struct pkt_dop *VAR_6,
        uint32_t VAR_7, uint32_t VAR_8)
{
 const struct dophdr *VAR_9 = (const struct dophdr *)((const u_char *)VAR_6 + sizeof(*VAR_6));

 FUNC_2((VAR_5, " <"));
 for ( ; VAR_7 <= VAR_8; ++VAR_7) {
  int VAR_10;

  if (!FUNC_3(*VAR_9)) {
   FUNC_2((VAR_5, "%s", VAR_4));
   break;
  }
  VAR_10 = VAR_9->dh_type;

  if (VAR_10 > VAR_1)
   FUNC_2((VAR_5, " dop-%d!", VAR_10));
  else {
   FUNC_2((VAR_5, " %s", VAR_3[VAR_10]));
   if (VAR_10 == VAR_2 || VAR_10 == VAR_0) {
    uint32_t VAR_11 = FUNC_1(&VAR_9->dh_ts);
    FUNC_2((VAR_5, "%d", VAR_11 - VAR_7 + 1));
    if (VAR_7 > VAR_11 || VAR_11 > VAR_8) {
     FUNC_2((VAR_5, "[|]"));
     if (VAR_11 < VAR_7)
      return (0);
    }
    VAR_7 = VAR_11;
   }
  }
  VAR_9 = FUNC_0(VAR_9);
 }
 FUNC_2((VAR_5, " >"));
 return (0);
}
