
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_char ;
struct xid_map_entry {int ipver; scalar_t__ xid; scalar_t__ proc; scalar_t__ vers; int client; int server; } ;
struct sunrpc_msg {int rm_xid; } ;
struct ip6_hdr {int ip6_dst; int ip6_src; } ;
struct ip {int ip_dst; int ip_src; } ;


 int FUNC_0 (struct ip const*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (scalar_t__*,int *,int) ;
 int VAR_0 ;
 struct xid_map_entry* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(const struct sunrpc_msg *VAR_3, const u_char *VAR_4, uint32_t *VAR_5,
      uint32_t *VAR_6)
{
 int VAR_7;
 struct xid_map_entry *VAR_8;
 uint32_t VAR_9;
 const struct ip *VAR_10 = (const struct ip *)VAR_4;
 const struct ip6_hdr *VAR_11 = (const struct ip6_hdr *)VAR_4;
 int VAR_12;

 FUNC_2(&VAR_9, &VAR_3->rm_xid, sizeof(VAR_8->xid));

 VAR_7 = VAR_2;
 do {
  VAR_8 = &VAR_1[VAR_7];
  VAR_12 = 1;
  if (VAR_8->ipver != FUNC_0(VAR_10) || VAR_8->xid != VAR_9)
   goto nextitem;
  switch (VAR_8->ipver) {
  case 4:
   if (FUNC_1(&VAR_10->ip_src, &VAR_8->server,
       sizeof(VAR_10->ip_src)) != 0 ||
       FUNC_1(&VAR_10->ip_dst, &VAR_8->client,
       sizeof(VAR_10->ip_dst)) != 0) {
    VAR_12 = 0;
   }
   break;
  case 6:
   if (FUNC_1(&VAR_11->ip6_src, &VAR_8->server,
       sizeof(VAR_11->ip6_src)) != 0 ||
       FUNC_1(&VAR_11->ip6_dst, &VAR_8->client,
       sizeof(VAR_11->ip6_dst)) != 0) {
    VAR_12 = 0;
   }
   break;
  default:
   VAR_12 = 0;
   break;
  }
  if (VAR_12) {

   VAR_2 = VAR_7;
   *VAR_5 = VAR_8->proc;
   *VAR_6 = VAR_8->vers;
   return 0;
  }
 nextitem:
  if (++VAR_7 >= VAR_0)
   VAR_7 = 0;
 } while (VAR_7 != VAR_2);


 return (-1);
}
