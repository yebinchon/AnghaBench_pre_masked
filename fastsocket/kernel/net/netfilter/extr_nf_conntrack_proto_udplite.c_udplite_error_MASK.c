
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
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net*,int ) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int,unsigned int,unsigned int,int ,int ) ;
 int FUNC_2 (int ,int ,struct sk_buff*,int *,int *,int *,char*) ;
 unsigned int FUNC_3 (int ) ;
 struct udphdr* FUNC_4 (struct sk_buff*,unsigned int,int,struct udphdr*) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_4,
    struct sk_buff *VAR_5,
    unsigned int VAR_6,
    enum ip_conntrack_info *VAR_7,
    u_int8_t VAR_8,
    unsigned int VAR_9)
{
 unsigned int VAR_10 = VAR_5->len - VAR_6;
 const struct udphdr *VAR_11;
 struct udphdr VAR_12;
 unsigned int VAR_13;


 VAR_11 = FUNC_4(VAR_5, VAR_6, sizeof(VAR_12), &VAR_12);
 if (VAR_11 == ((void*)0)) {
  if (FUNC_0(VAR_4, VAR_1))
   FUNC_2(VAR_8, 0, VAR_5, ((void*)0), ((void*)0), ((void*)0),
          "nf_ct_udplite: short packet ");
  return -VAR_2;
 }

 VAR_13 = FUNC_3(VAR_11->len);
 if (VAR_13 == 0)
  VAR_13 = VAR_10;
 else if (VAR_13 < sizeof(*VAR_11) || VAR_13 > VAR_10) {
  if (FUNC_0(VAR_4, VAR_1))
   FUNC_2(VAR_8, 0, VAR_5, ((void*)0), ((void*)0), ((void*)0),
    "nf_ct_udplite: invalid checksum coverage ");
  return -VAR_2;
 }


 if (!VAR_11->check) {
  if (FUNC_0(VAR_4, VAR_1))
   FUNC_2(VAR_8, 0, VAR_5, ((void*)0), ((void*)0), ((void*)0),
          "nf_ct_udplite: checksum missing ");
  return -VAR_2;
 }


 if (VAR_4->ct.sysctl_checksum && VAR_9 == VAR_3 &&
     FUNC_1(VAR_5, VAR_9, VAR_6, VAR_13, VAR_0,
        VAR_8)) {
  if (FUNC_0(VAR_4, VAR_1))
   FUNC_2(VAR_8, 0, VAR_5, ((void*)0), ((void*)0), ((void*)0),
          "nf_ct_udplite: bad UDPLite checksum ");
  return -VAR_2;
 }

 return VAR_2;
}
