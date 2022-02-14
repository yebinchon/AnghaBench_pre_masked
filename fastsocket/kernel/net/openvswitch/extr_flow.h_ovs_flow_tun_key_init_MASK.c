
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovs_key_ipv4_tunnel {int tun_flags; int ipv4_ttl; int ipv4_tos; int ipv4_dst; int ipv4_src; int tun_id; } ;
struct iphdr {int ttl; int tos; int daddr; int saddr; } ;
typedef int __be64 ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct ovs_key_ipv4_tunnel *VAR_1,
      const struct iphdr *VAR_2, __be64 VAR_3,
      __be16 VAR_4)
{
 VAR_1->tun_id = VAR_3;
 VAR_1->ipv4_src = VAR_2->saddr;
 VAR_1->ipv4_dst = VAR_2->daddr;
 VAR_1->ipv4_tos = VAR_2->tos;
 VAR_1->ipv4_ttl = VAR_2->ttl;
 VAR_1->tun_flags = VAR_4;


 FUNC_0((unsigned char *) VAR_1 + VAR_0, 0,
        sizeof(*VAR_1) - VAR_0);
}
