
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int rule_cnt; int echo; } ;
struct eth_multicast_rules_ramrod_data {TYPE_2__ header; } ;
struct ecore_raw_obj {int cid; scalar_t__ rdata; } ;
struct ecore_mcast_ramrod_params {TYPE_1__* mcast_obj; } ;
struct bxe_softc {int dummy; } ;
struct TYPE_3__ {struct ecore_raw_obj raw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_1(struct bxe_softc *VAR_3,
     struct ecore_mcast_ramrod_params *VAR_4,
     uint8_t VAR_5)
{
 struct ecore_raw_obj *VAR_6 = &VAR_4->mcast_obj->raw;
 struct eth_multicast_rules_ramrod_data *VAR_7 =
  (struct eth_multicast_rules_ramrod_data *)(VAR_6->rdata);

 VAR_7->header.echo = FUNC_0((VAR_6->cid & VAR_1) |
     (VAR_0 <<
      VAR_2));
 VAR_7->header.rule_cnt = VAR_5;
}
