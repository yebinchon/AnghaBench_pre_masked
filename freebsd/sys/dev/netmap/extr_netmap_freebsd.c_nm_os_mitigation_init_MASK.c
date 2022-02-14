
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_generic_mit {int mit_ring_idx; struct netmap_adapter* mit_na; scalar_t__ mit_pending; } ;
struct netmap_adapter {int dummy; } ;



void
FUNC_0(struct nm_generic_mit *VAR_0, int VAR_1, struct netmap_adapter *VAR_2)
{
 VAR_0->mit_pending = 0;
 VAR_0->mit_ring_idx = VAR_1;
 VAR_0->mit_na = VAR_2;
}
