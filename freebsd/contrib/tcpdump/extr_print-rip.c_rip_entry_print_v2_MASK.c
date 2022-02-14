
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_short ;
typedef scalar_t__ u_int ;
typedef char u_char ;
struct rip_netinfo {int rip_router; int rip_metric; int const rip_tag; int rip_dest_mask; int rip_dest; int const rip_family; } ;
typedef int netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 unsigned int const VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int const*,char*,unsigned int const) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static unsigned
FUNC_8(netdissect_options *VAR_4,
                   register const struct rip_netinfo *VAR_5, const unsigned VAR_6)
{
 register u_short VAR_7;

 VAR_7 = FUNC_0(&VAR_5->rip_family);
 if (VAR_7 == 0xFFFF) {
  uint16_t VAR_8 = FUNC_0(&VAR_5->rip_tag);
  if (VAR_8 == 2) {
   register const u_char *VAR_9 = (const u_char *)&VAR_5->rip_dest;
   u_int VAR_10 = 0;
   FUNC_3((VAR_4, "\n\t  Simple Text Authentication data: "));
   for (; VAR_10 < VAR_1; VAR_9++, VAR_10++)
    FUNC_3((VAR_4, "%c", FUNC_2(*VAR_9) ? *VAR_9 : '.'));
  } else if (VAR_8 == 3) {
   FUNC_3((VAR_4, "\n\t  Auth header:"));
   FUNC_3((VAR_4, " Packet Len %u,", FUNC_0((const uint8_t *)VAR_5 + 4)));
   FUNC_3((VAR_4, " Key-ID %u,", *((const uint8_t *)VAR_5 + 6)));
   FUNC_3((VAR_4, " Auth Data Len %u,", *((const uint8_t *)VAR_5 + 7)));
   FUNC_3((VAR_4, " SeqNo %u,", FUNC_1(&VAR_5->rip_dest_mask)));
   FUNC_3((VAR_4, " MBZ %u,", FUNC_1(&VAR_5->rip_router)));
   FUNC_3((VAR_4, " MBZ %u", FUNC_1(&VAR_5->rip_metric)));
  } else if (VAR_8 == 1) {
   FUNC_3((VAR_4, "\n\t  Auth trailer:"));
   FUNC_6(VAR_4, (const uint8_t *)&VAR_5->rip_dest, "\n\t  ", VAR_6);
   return VAR_6;
  } else {
   FUNC_3((VAR_4, "\n\t  Unknown (%u) Authentication data:",
          FUNC_0(&VAR_5->rip_tag)));
   FUNC_6(VAR_4, (const uint8_t *)&VAR_5->rip_dest, "\n\t  ", VAR_6);
  }
 } else if (VAR_7 != VAR_0 && VAR_7 != 0) {
  FUNC_3((VAR_4, "\n\t  AFI %s", FUNC_7(VAR_3, "Unknown (%u)", VAR_7)));
                FUNC_6(VAR_4, (const uint8_t *)&VAR_5->rip_tag, "\n\t  ", VAR_2-2);
 } else {
  FUNC_3((VAR_4, "\n\t  AFI %s, %15s/%-2d, tag 0x%04x, metric: %u, next-hop: ",
                       FUNC_7(VAR_3, "%u", VAR_7),
                       FUNC_4(VAR_4, &VAR_5->rip_dest),
         FUNC_5(FUNC_1(&VAR_5->rip_dest_mask)),
                       FUNC_0(&VAR_5->rip_tag),
                       FUNC_1(&VAR_5->rip_metric)));
  if (FUNC_1(&VAR_5->rip_router))
   FUNC_3((VAR_4, "%s", FUNC_4(VAR_4, &VAR_5->rip_router)));
  else
   FUNC_3((VAR_4, "self"));
 }
 return sizeof (*VAR_5);
}
