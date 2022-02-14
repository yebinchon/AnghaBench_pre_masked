
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ sysctl_checksum; } ;
struct net {TYPE_1__ ct; } ;
struct icmphdr {scalar_t__ type; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int _ih ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct net*,int ) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct net*,struct sk_buff*,int*,unsigned int) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,unsigned int,unsigned int,int ) ;
 int FUNC_4 (int ,int ,struct sk_buff*,int *,int *,int *,char*) ;
 struct icmphdr* FUNC_5 (struct sk_buff*,int ,int,struct icmphdr*) ;

__attribute__((used)) static int
FUNC_6(struct net *VAR_10, struct sk_buff *VAR_11, unsigned int VAR_12,
    enum ip_conntrack_info *VAR_13, u_int8_t VAR_14, unsigned int VAR_15)
{
 const struct icmphdr *VAR_16;
 struct icmphdr VAR_17;


 VAR_16 = FUNC_5(VAR_11, FUNC_2(VAR_11), sizeof(VAR_17), &VAR_17);
 if (VAR_16 == ((void*)0)) {
  if (FUNC_0(VAR_10, VAR_5))
   FUNC_4(VAR_9, 0, VAR_11, ((void*)0), ((void*)0), ((void*)0),
          "nf_ct_icmp: short packet ");
  return -VAR_6;
 }


 if (VAR_10->ct.sysctl_checksum && VAR_15 == VAR_7 &&
     FUNC_3(VAR_11, VAR_15, VAR_12, 0)) {
  if (FUNC_0(VAR_10, VAR_5))
   FUNC_4(VAR_9, 0, VAR_11, ((void*)0), ((void*)0), ((void*)0),
          "nf_ct_icmp: bad HW ICMP checksum ");
  return -VAR_6;
 }







 if (VAR_16->type > VAR_8) {
  if (FUNC_0(VAR_10, VAR_5))
   FUNC_4(VAR_9, 0, VAR_11, ((void*)0), ((void*)0), ((void*)0),
          "nf_ct_icmp: invalid ICMP type ");
  return -VAR_6;
 }


 if (VAR_16->type != VAR_0
     && VAR_16->type != VAR_3
     && VAR_16->type != VAR_4
     && VAR_16->type != VAR_1
     && VAR_16->type != VAR_2)
  return VAR_6;

 return FUNC_1(VAR_10, VAR_11, VAR_13, VAR_15);
}
