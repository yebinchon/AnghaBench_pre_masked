
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {int dummy; } ;
struct tcphdr {int doff; } ;
struct sk_buff {unsigned char* data; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int buf ;
typedef int _tcph ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 () ;
 struct nf_conn* FUNC_3 (struct sk_buff*,int*) ;
 int FUNC_4 (struct sk_buff*,struct nf_conn*,int,unsigned int,int,char*,int) ;
 int FUNC_5 (struct sk_buff*,struct nf_conn*,int,unsigned int,int,char*,int) ;
 int FUNC_6 (char*) ;
 struct tcphdr* FUNC_7 (struct sk_buff*,int,int,struct tcphdr*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_1,
      unsigned char **VAR_2, int VAR_3,
      unsigned int VAR_4, __be32 VAR_5, __be16 VAR_6)
{
 enum ip_conntrack_info VAR_7;
 struct nf_conn *VAR_8 = FUNC_3(VAR_1, &VAR_7);
 struct {
  __be32 ip;
  __be16 port;
 } __attribute__ ((__packed__)) VAR_9;
 const struct tcphdr *VAR_10;
 struct tcphdr VAR_11;

 VAR_9.ip = VAR_5;
 VAR_9.port = VAR_6;
 VAR_4 += VAR_3;

 if (FUNC_0(VAR_1)->protocol == VAR_0) {
  if (!FUNC_4(VAR_1, VAR_8, VAR_7,
           VAR_4, sizeof(VAR_9),
           (char *) &VAR_9, sizeof(VAR_9))) {
   if (FUNC_2())
    FUNC_6("nf_nat_h323: nf_nat_mangle_tcp_packet"
           " error\n");
   return -1;
  }


  VAR_10 = FUNC_7(VAR_1, FUNC_1(VAR_1),
     sizeof(VAR_11), &VAR_11);
  if (VAR_10 == ((void*)0))
   return -1;
  *VAR_2 = VAR_1->data + FUNC_1(VAR_1) + VAR_10->doff * 4 + VAR_3;
 } else {
  if (!FUNC_5(VAR_1, VAR_8, VAR_7,
           VAR_4, sizeof(VAR_9),
           (char *) &VAR_9, sizeof(VAR_9))) {
   if (FUNC_2())
    FUNC_6("nf_nat_h323: nf_nat_mangle_udp_packet"
           " error\n");
   return -1;
  }



  *VAR_2 = VAR_1->data + FUNC_1(VAR_1) + sizeof(struct udphdr);
 }

 return 0;
}
