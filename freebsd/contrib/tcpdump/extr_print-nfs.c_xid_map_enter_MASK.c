
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct xid_map_entry {int ipver; void* vers; void* proc; int server; int client; int xid; } ;
struct TYPE_2__ {int cb_vers; int cb_proc; } ;
struct sunrpc_msg {TYPE_1__ rm_call; int rm_xid; } ;
struct ip6_hdr {int ip6_dst; int ip6_src; } ;
struct ip {int ip_dst; int ip_src; } ;
typedef int netdissect_options ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (struct ip const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 size_t VAR_0 ;
 struct xid_map_entry* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_3,
              const struct sunrpc_msg *VAR_4, const u_char *VAR_5)
{
 const struct ip *VAR_6 = ((void*)0);
 const struct ip6_hdr *VAR_7 = ((void*)0);
 struct xid_map_entry *VAR_8;

 if (!FUNC_2(VAR_4->rm_call.cb_proc))
  return (0);
 switch (FUNC_1((const struct ip *)VAR_5)) {
 case 4:
  VAR_6 = (const struct ip *)VAR_5;
  break;
 case 6:
  VAR_7 = (const struct ip6_hdr *)VAR_5;
  break;
 default:
  return (1);
 }

 VAR_8 = &VAR_1[VAR_2];

 if (++VAR_2 >= VAR_0)
  VAR_2 = 0;

 FUNC_3(&VAR_8->xid, &VAR_4->rm_xid, sizeof(VAR_8->xid));
 if (VAR_6) {
  VAR_8->ipver = 4;
  FUNC_3(&VAR_8->client, &VAR_6->ip_src, sizeof(VAR_6->ip_src));
  FUNC_3(&VAR_8->server, &VAR_6->ip_dst, sizeof(VAR_6->ip_dst));
 }
 else if (VAR_7) {
  VAR_8->ipver = 6;
  FUNC_3(&VAR_8->client, &VAR_7->ip6_src, sizeof(VAR_7->ip6_src));
  FUNC_3(&VAR_8->server, &VAR_7->ip6_dst, sizeof(VAR_7->ip6_dst));
 }
 VAR_8->proc = FUNC_0(&VAR_4->rm_call.cb_proc);
 VAR_8->vers = FUNC_0(&VAR_4->rm_call.cb_vers);
 return (1);
}
