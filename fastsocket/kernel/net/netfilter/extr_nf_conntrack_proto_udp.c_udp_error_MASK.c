
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct udphdr {int check; int len; } ;
struct sk_buff {unsigned int len; } ;
struct TYPE_2__ {scalar_t__ sysctl_checksum; } ;
struct net {TYPE_1__ ct; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int _hdr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net*,int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int,unsigned int,int ,int ) ;
 int FUNC_2 (int ,int ,struct sk_buff*,int *,int *,int *,char*) ;
 int FUNC_3 (int ) ;
 struct udphdr* FUNC_4 (struct sk_buff*,unsigned int,int,struct udphdr*) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_3, struct sk_buff *VAR_4, unsigned int VAR_5,
       enum ip_conntrack_info *VAR_6,
       u_int8_t VAR_7,
       unsigned int VAR_8)
{
 unsigned int VAR_9 = VAR_4->len - VAR_5;
 const struct udphdr *VAR_10;
 struct udphdr VAR_11;


 VAR_10 = FUNC_4(VAR_4, VAR_5, sizeof(VAR_11), &VAR_11);
 if (VAR_10 == ((void*)0)) {
  if (FUNC_0(VAR_3, VAR_0))
   FUNC_2(VAR_7, 0, VAR_4, ((void*)0), ((void*)0), ((void*)0),
          "nf_ct_udp: short packet ");
  return -VAR_1;
 }


 if (FUNC_3(VAR_10->len) > VAR_9 || FUNC_3(VAR_10->len) < sizeof(*VAR_10)) {
  if (FUNC_0(VAR_3, VAR_0))
   FUNC_2(VAR_7, 0, VAR_4, ((void*)0), ((void*)0), ((void*)0),
    "nf_ct_udp: truncated/malformed packet ");
  return -VAR_1;
 }


 if (!VAR_10->check)
  return VAR_1;





 if (VAR_3->ct.sysctl_checksum && VAR_8 == VAR_2 &&
     FUNC_1(VAR_4, VAR_8, VAR_5, VAR_0, VAR_7)) {
  if (FUNC_0(VAR_3, VAR_0))
   FUNC_2(VAR_7, 0, VAR_4, ((void*)0), ((void*)0), ((void*)0),
    "nf_ct_udp: bad UDP checksum ");
  return -VAR_1;
 }

 return VAR_1;
}
