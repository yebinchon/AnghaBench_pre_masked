
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct p2p_data {TYPE_2__* go_neg_peer; } ;
struct TYPE_3__ {int const* p2p_device_addr; } ;
struct TYPE_4__ {TYPE_1__ info; } ;



const u8 * FUNC_0(struct p2p_data *VAR_0)
{
 if (VAR_0 == ((void*)0) || VAR_0->go_neg_peer == ((void*)0))
  return ((void*)0);
 return VAR_0->go_neg_peer->info.p2p_device_addr;
}
