
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
struct xt_pkttype_info {scalar_t__ pkttype; int invert; } ;
struct xt_match_param {scalar_t__ family; struct xt_pkttype_info* matchinfo; } ;
struct sk_buff {scalar_t__ pkt_type; } ;
struct TYPE_6__ {int daddr; } ;
struct TYPE_4__ {int* s6_addr; } ;
struct TYPE_5__ {TYPE_1__ daddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_0 (struct sk_buff const*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_5, const struct xt_match_param *VAR_6)
{
 const struct xt_pkttype_info *VAR_7 = VAR_6->matchinfo;
 u_int8_t VAR_8;

 if (VAR_5->pkt_type != VAR_3)
  VAR_8 = VAR_5->pkt_type;
 else if (VAR_6->family == VAR_0 &&
     FUNC_1(FUNC_0(VAR_5)->daddr))
  VAR_8 = VAR_4;
 else if (VAR_6->family == VAR_1 &&
     FUNC_2(VAR_5)->daddr.s6_addr[0] == 0xFF)
  VAR_8 = VAR_4;
 else
  VAR_8 = VAR_2;

 return (VAR_8 == VAR_7->pkttype) ^ VAR_7->invert;
}
