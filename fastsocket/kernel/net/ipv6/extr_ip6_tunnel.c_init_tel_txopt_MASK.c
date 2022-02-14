
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opt_nflen; struct ipv6_opt_hdr* dst0opt; } ;
struct ipv6_tel_txoption {int* dst_opt; TYPE_1__ ops; } ;
struct ipv6_opt_hdr {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipv6_tel_txoption*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ipv6_tel_txoption *VAR_2, __u8 VAR_3)
{
 FUNC_0(VAR_2, 0, sizeof(struct ipv6_tel_txoption));

 VAR_2->dst_opt[2] = VAR_1;
 VAR_2->dst_opt[3] = 1;
 VAR_2->dst_opt[4] = VAR_3;
 VAR_2->dst_opt[5] = VAR_0;
 VAR_2->dst_opt[6] = 1;

 VAR_2->ops.dst0opt = (struct ipv6_opt_hdr *) VAR_2->dst_opt;
 VAR_2->ops.opt_nflen = 8;
}
