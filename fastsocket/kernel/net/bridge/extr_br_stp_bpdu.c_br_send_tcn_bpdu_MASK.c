
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_port {TYPE_1__* br; } ;
struct TYPE_2__ {scalar_t__ stp_enabled; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_bridge_port*,unsigned char*,int) ;

void FUNC_1(struct net_bridge_port *VAR_2)
{
 unsigned char VAR_3[4];

 if (VAR_2->br->stp_enabled != VAR_1)
  return;

 VAR_3[0] = 0;
 VAR_3[1] = 0;
 VAR_3[2] = 0;
 VAR_3[3] = VAR_0;
 FUNC_0(VAR_2, VAR_3, 4);
}
