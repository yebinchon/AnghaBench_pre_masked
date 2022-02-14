
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct tcphdr {int doff; } ;
struct sk_buff {unsigned int len; } ;
struct TYPE_2__ {scalar_t__ sysctl_checksum; } ;
struct net {TYPE_1__ ct; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int _tcph ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net*,int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int,unsigned int,int ,size_t) ;
 int FUNC_2 (size_t,int ,struct sk_buff*,int *,int *,int *,char*) ;
 struct tcphdr* FUNC_3 (struct sk_buff*,unsigned int,int,struct tcphdr*) ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_4(struct net *VAR_7,
       struct sk_buff *VAR_8,
       unsigned int VAR_9,
       enum ip_conntrack_info *VAR_10,
       u_int8_t VAR_11,
       unsigned int VAR_12)
{
 const struct tcphdr *VAR_13;
 struct tcphdr VAR_14;
 unsigned int VAR_15 = VAR_8->len - VAR_9;
 u_int8_t VAR_16;


 VAR_13 = FUNC_3(VAR_8, VAR_9, sizeof(VAR_14), &VAR_14);
 if (VAR_13 == ((void*)0)) {
  if (FUNC_0(VAR_7, VAR_0))
   FUNC_2(VAR_11, 0, VAR_8, ((void*)0), ((void*)0), ((void*)0),
    "nf_ct_tcp: short packet ");
  return -VAR_1;
 }


 if (VAR_13->doff*4 < sizeof(struct tcphdr) || VAR_15 < VAR_13->doff*4) {
  if (FUNC_0(VAR_7, VAR_0))
   FUNC_2(VAR_11, 0, VAR_8, ((void*)0), ((void*)0), ((void*)0),
    "nf_ct_tcp: truncated/malformed packet ");
  return -VAR_1;
 }






 if (VAR_7->ct.sysctl_checksum && VAR_12 == VAR_2 &&
     FUNC_1(VAR_8, VAR_12, VAR_9, VAR_0, VAR_11)) {
  if (FUNC_0(VAR_7, VAR_0))
   FUNC_2(VAR_11, 0, VAR_8, ((void*)0), ((void*)0), ((void*)0),
      "nf_ct_tcp: bad TCP checksum ");
  return -VAR_1;
 }


 VAR_16 = (((u_int8_t *)VAR_13)[13] & ~(VAR_4|VAR_3|VAR_5));
 if (!VAR_6[VAR_16]) {
  if (FUNC_0(VAR_7, VAR_0))
   FUNC_2(VAR_11, 0, VAR_8, ((void*)0), ((void*)0), ((void*)0),
      "nf_ct_tcp: invalid TCP flag combination ");
  return -VAR_1;
 }

 return VAR_1;
}
