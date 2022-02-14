
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mesh; int cfg; } ;
struct worker {TYPE_2__* back; TYPE_1__ env; int stats; } ;
struct TYPE_4__ {scalar_t__ num_tcp_outgoing; scalar_t__ unwanted_replies; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct worker* VAR_0)
{
 FUNC_1(&VAR_0->stats, VAR_0->env.cfg);
 FUNC_0(VAR_0->env.mesh);
 VAR_0->back->unwanted_replies = 0;
 VAR_0->back->num_tcp_outgoing = 0;
}
