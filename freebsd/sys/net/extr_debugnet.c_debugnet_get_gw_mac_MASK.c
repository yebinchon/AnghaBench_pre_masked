
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char const* octet; } ;
struct debugnet_pcb {scalar_t__ dp_state; TYPE_1__ dp_gw_mac; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 struct debugnet_pcb const VAR_2 ;

const unsigned char *
FUNC_1(const struct debugnet_pcb *VAR_3)
{
 FUNC_0(VAR_1 && VAR_3 == &VAR_2 &&
     VAR_3->dp_state >= VAR_0);
 return (VAR_3->dp_gw_mac.octet);
}
