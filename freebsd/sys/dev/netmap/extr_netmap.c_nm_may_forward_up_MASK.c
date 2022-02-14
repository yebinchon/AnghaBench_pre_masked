
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_kring {scalar_t__ ring_id; TYPE_1__* na; } ;
struct TYPE_2__ {scalar_t__ num_rx_rings; } ;


 scalar_t__ FUNC_0 (struct netmap_kring*) ;

__attribute__((used)) static inline int
FUNC_1(struct netmap_kring *VAR_0)
{
 return FUNC_0(VAR_0) &&
   VAR_0->ring_id != VAR_0->na->num_rx_rings;
}
