
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct in6_addr {int dummy; } ;
struct dhcp6_relay {int dh6relay_peeraddr; int dh6relay_linkaddr; } ;
struct dhcp6 {scalar_t__ dh6_msgtype; int dh6_xid; } ;
struct TYPE_6__ {int ndo_vflag; scalar_t__ ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;
typedef int addr6 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int const*,int const*) ;
 int FUNC_4 (TYPE_1__*,struct in6_addr*) ;
 int FUNC_5 (struct in6_addr*,int ,int) ;
 char* FUNC_6 (int ,char*,scalar_t__) ;

void
FUNC_7(netdissect_options *VAR_4,
            const u_char *VAR_5, u_int VAR_6)
{
 const struct dhcp6 *VAR_7;
 const struct dhcp6_relay *VAR_8;
 const u_char *VAR_9;
 const u_char *VAR_10;
 const char *VAR_11;

 FUNC_1((VAR_4, "dhcp6"));

 VAR_9 = (const u_char *)VAR_4->ndo_snapend;
 if (VAR_5 + VAR_6 < VAR_9)
  VAR_9 = VAR_5 + VAR_6;

 VAR_7 = (const struct dhcp6 *)VAR_5;
 VAR_8 = (const struct dhcp6_relay *)VAR_5;
 FUNC_2(VAR_7->dh6_xid);
 VAR_11 = FUNC_6(VAR_3, "msgtype-%u", VAR_7->dh6_msgtype);

 if (!VAR_4->ndo_vflag) {
  FUNC_1((VAR_4, " %s", VAR_11));
  return;
 }



 FUNC_1((VAR_4, " %s (", VAR_11));
 if (VAR_7->dh6_msgtype != VAR_0 &&
     VAR_7->dh6_msgtype != VAR_1) {
  FUNC_1((VAR_4, "xid=%x", FUNC_0(&VAR_7->dh6_xid) & VAR_2));
  VAR_10 = (const u_char *)(VAR_7 + 1);
  FUNC_3(VAR_4, VAR_10, VAR_9);
 } else {
  struct in6_addr VAR_12;

  FUNC_2(VAR_8->dh6relay_peeraddr);

  FUNC_5(&VAR_12, VAR_8->dh6relay_linkaddr, sizeof (VAR_12));
  FUNC_1((VAR_4, "linkaddr=%s", FUNC_4(VAR_4, &VAR_12)));

  FUNC_5(&VAR_12, VAR_8->dh6relay_peeraddr, sizeof (VAR_12));
  FUNC_1((VAR_4, " peeraddr=%s", FUNC_4(VAR_4, &VAR_12)));

  FUNC_3(VAR_4, (const u_char *)(VAR_8 + 1), VAR_9);
 }

 FUNC_1((VAR_4, ")"));
 return;

trunc:
 FUNC_1((VAR_4, "[|dhcp6]"));
}
