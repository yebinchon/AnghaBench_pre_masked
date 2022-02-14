
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_7__ {int cb_vers; int cb_prog; int cb_proc; int cb_rpcvers; } ;
struct sunrpc_msg {TYPE_1__ rm_call; int rm_xid; } ;
struct ip6_hdr {int ip6_dst; int ip6_src; } ;
struct ip {int ip_dst; int ip_src; } ;
typedef int srcid ;
struct TYPE_8__ {int ndo_nflag; } ;
typedef TYPE_2__ netdissect_options ;
typedef int dstid ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ip const*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;




 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int ,char*,int) ;

void
FUNC_9(netdissect_options *VAR_2, register const u_char *VAR_3,
                    register u_int VAR_4, register const u_char *VAR_5)
{
 register const struct sunrpc_msg *VAR_6;
 register const struct ip *VAR_7;
 register const struct ip6_hdr *VAR_8;
 uint32_t VAR_9;
 char VAR_10[20], VAR_11[20];

 VAR_6 = (const struct sunrpc_msg *)VAR_3;

 if (!VAR_2->ndo_nflag) {
  FUNC_6(VAR_10, sizeof(VAR_10), "0x%x",
      FUNC_0(&VAR_6->rm_xid));
  FUNC_7(VAR_11, "sunrpc", sizeof(VAR_11));
 } else {
  FUNC_6(VAR_10, sizeof(VAR_10), "0x%x",
      FUNC_0(&VAR_6->rm_xid));
  FUNC_6(VAR_11, sizeof(VAR_11), "0x%x", VAR_0);
 }

 switch (FUNC_1((const struct ip *)VAR_5)) {
 case 4:
  VAR_7 = (const struct ip *)VAR_5;
  FUNC_2((VAR_2, "%s.%s > %s.%s: %d",
      FUNC_4(VAR_2, &VAR_7->ip_src), VAR_10,
      FUNC_4(VAR_2, &VAR_7->ip_dst), VAR_11, VAR_4));
  break;
 case 6:
  VAR_8 = (const struct ip6_hdr *)VAR_5;
  FUNC_2((VAR_2, "%s.%s > %s.%s: %d",
      FUNC_3(VAR_2, &VAR_8->ip6_src), VAR_10,
      FUNC_3(VAR_2, &VAR_8->ip6_dst), VAR_11, VAR_4));
  break;
 default:
  FUNC_2((VAR_2, "%s.%s > %s.%s: %d", "?", VAR_10, "?", VAR_11, VAR_4));
  break;
 }

 FUNC_2((VAR_2, " %s", FUNC_8(VAR_1, " proc #%u",
     FUNC_0(&VAR_6->rm_call.cb_proc))));
 VAR_9 = FUNC_0(&VAR_6->rm_call.cb_rpcvers);
 if (VAR_9 != 2)
  FUNC_2((VAR_2, " [rpcver %u]", VAR_9));

 switch (FUNC_0(&VAR_6->rm_call.cb_proc)) {

 case 129:
 case 128:
 case 130:
 case 131:
  VAR_9 = FUNC_0(&VAR_6->rm_call.cb_prog);
  if (!VAR_2->ndo_nflag)
   FUNC_2((VAR_2, " %s", FUNC_5(VAR_9)));
  else
   FUNC_2((VAR_2, " %u", VAR_9));
  FUNC_2((VAR_2, ".%u", FUNC_0(&VAR_6->rm_call.cb_vers)));
  break;
 }
}
