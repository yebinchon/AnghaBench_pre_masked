
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ibv_gid {int dummy; } ibv_gid ;
typedef scalar_t__ uint8_t ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct ip {int ip_tos; int ip_ttl; TYPE_2__ ip_src; TYPE_1__ ip_dst; } ;
struct in6_addr {int dummy; } ;
struct ibv_context {int dummy; } ;
struct TYPE_6__ {int traffic_class; int hop_limit; scalar_t__ sgid_index; int dgid; } ;
struct ibv_ah_attr {TYPE_3__ grh; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ibv_context*,scalar_t__,union ibv_gid*,int ) ;
 int FUNC_3 (int ,struct in6_addr*) ;

__attribute__((used)) static inline int FUNC_4(struct ibv_context *VAR_3,
          struct ibv_ah_attr *VAR_4,
          struct ip *VAR_5, uint8_t VAR_6)
{
 union ibv_gid VAR_7;
 int VAR_8;


 if (FUNC_0(FUNC_1(VAR_5->ip_dst.s_addr))) {
  VAR_2 = VAR_0;
  return -1;
 }

 FUNC_3(VAR_5->ip_dst.s_addr, (struct in6_addr *)&VAR_7);
 VAR_8 = FUNC_2(VAR_3, VAR_6, &VAR_7,
     VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_3(VAR_5->ip_src.s_addr,
         (struct in6_addr *)&VAR_4->grh.dgid);
 VAR_4->grh.sgid_index = (uint8_t) VAR_8;
 VAR_4->grh.hop_limit = VAR_5->ip_ttl;
 VAR_4->grh.traffic_class = VAR_5->ip_tos;

 return 0;
}
