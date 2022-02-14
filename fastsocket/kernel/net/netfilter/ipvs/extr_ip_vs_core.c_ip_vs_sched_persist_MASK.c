
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union nf_inet_addr {int ip; int in6; } ;
struct sk_buff {int mark; } ;
struct ip_vs_service {scalar_t__ af; int netmask; scalar_t__ port; int flags; int timeout; TYPE_1__* scheduler; scalar_t__ fwmark; } ;
struct ip_vs_iphdr {int protocol; union nf_inet_addr daddr; union nf_inet_addr saddr; } ;
struct ip_vs_dest {scalar_t__ port; int addr; } ;
struct ip_vs_conn_param {int pe_data; } ;
struct ip_vs_conn {struct ip_vs_dest* dest; int timeout; } ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {struct ip_vs_dest* (* schedule ) (struct ip_vs_service*,struct sk_buff*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__,union nf_inet_addr*) ;
 int FUNC_2 (int,char*,int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ip_vs_conn*) ;
 int FUNC_5 (scalar_t__,int,union nf_inet_addr*,scalar_t__,union nf_inet_addr*,scalar_t__,struct ip_vs_conn_param*) ;
 int FUNC_6 (struct ip_vs_service*,struct sk_buff*,int,union nf_inet_addr*,int ,union nf_inet_addr const*,scalar_t__,struct ip_vs_conn_param*) ;
 struct ip_vs_conn* FUNC_7 (struct ip_vs_conn_param*,int *,scalar_t__,unsigned int,struct ip_vs_dest*,int ) ;
 int FUNC_8 (struct ip_vs_conn*) ;
 int FUNC_9 (struct ip_vs_conn*,struct ip_vs_service*) ;
 int FUNC_10 (struct ip_vs_conn*,struct ip_vs_conn*) ;
 struct ip_vs_conn* FUNC_11 (struct ip_vs_conn_param*) ;
 int FUNC_12 (scalar_t__,int ,struct ip_vs_iphdr*) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct sk_buff*) ;
 struct ip_vs_dest* FUNC_17 (struct ip_vs_service*,struct sk_buff*) ;

__attribute__((used)) static struct ip_vs_conn *
FUNC_18(struct ip_vs_service *VAR_7,
      struct sk_buff *VAR_8,
      __be16 VAR_9, __be16 VAR_10)
{
 struct ip_vs_conn *VAR_11 = ((void*)0);
 struct ip_vs_iphdr VAR_12;
 struct ip_vs_dest *VAR_13;
 struct ip_vs_conn *VAR_14;
 __be16 VAR_15 = 0;
 unsigned int VAR_16;
 struct ip_vs_conn_param VAR_17;
 const union nf_inet_addr VAR_18 = { .ip = FUNC_3(VAR_7->fwmark) };
 union nf_inet_addr VAR_19;


 FUNC_12(VAR_7->af, FUNC_16(VAR_8), &VAR_12);







  VAR_19.ip = VAR_12.saddr.ip & VAR_7->netmask;

 FUNC_2(6, "p-schedule: src %s:%u dest %s:%u "
        "mnet %s\n",
        FUNC_1(VAR_7->af, &VAR_12.saddr), FUNC_15(VAR_9),
        FUNC_1(VAR_7->af, &VAR_12.daddr), FUNC_15(VAR_10),
        FUNC_1(VAR_7->af, &VAR_19));
 {
  int VAR_20 = VAR_12.protocol;
  const union nf_inet_addr *VAR_21 = &VAR_12.daddr;
  __be16 VAR_22 = 0;

  if (VAR_10 == VAR_7->port) {





   if (VAR_7->port != VAR_1)
    VAR_22 = VAR_10;
  } else {







   if (VAR_7->fwmark) {
    VAR_20 = VAR_2;
    VAR_21 = &VAR_18;
   }
  }
  FUNC_6(VAR_7, VAR_8, VAR_20, &VAR_19, 0,
           VAR_21, VAR_22, &VAR_17);
 }


 VAR_14 = FUNC_11(&VAR_17);
 if (!VAR_14 || !FUNC_4(VAR_14)) {



  VAR_13 = VAR_7->scheduler->schedule(VAR_7, VAR_8);
  if (!VAR_13) {
   FUNC_0(1, "p-schedule: no dest found.\n");
   FUNC_14(VAR_17.pe_data);
   return ((void*)0);
  }

  if (VAR_10 == VAR_7->port && VAR_7->port != VAR_1)
   VAR_15 = VAR_13->port;





  VAR_14 = FUNC_7(&VAR_17, &VAR_13->addr, VAR_15,
        VAR_5, VAR_13, VAR_8->mark);
  if (VAR_14 == ((void*)0)) {
   FUNC_14(VAR_17.pe_data);
   return ((void*)0);
  }

  VAR_14->timeout = VAR_7->timeout;
 } else {

  VAR_13 = VAR_14->dest;
  FUNC_14(VAR_17.pe_data);
 }

 VAR_15 = VAR_10;
 if (VAR_15 == VAR_7->port && VAR_13->port)
  VAR_15 = VAR_13->port;

 VAR_16 = (VAR_7->flags & VAR_6
   && VAR_12.protocol == VAR_3)?
  VAR_4 : 0;




 FUNC_5(VAR_7->af, VAR_12.protocol, &VAR_12.saddr, VAR_9,
         &VAR_12.daddr, VAR_10, &VAR_17);

 VAR_11 = FUNC_7(&VAR_17, &VAR_13->addr, VAR_15, VAR_16, VAR_13, VAR_8->mark);
 if (VAR_11 == ((void*)0)) {
  FUNC_8(VAR_14);
  return ((void*)0);
 }




 FUNC_10(VAR_11, VAR_14);
 FUNC_8(VAR_14);

 FUNC_9(VAR_11, VAR_7);
 return VAR_11;
}
