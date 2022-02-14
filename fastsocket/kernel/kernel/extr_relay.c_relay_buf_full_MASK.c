
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rchan_buf {size_t subbufs_produced; size_t subbufs_consumed; TYPE_1__* chan; } ;
struct TYPE_2__ {size_t n_subbufs; } ;



int FUNC_0(struct rchan_buf *VAR_0)
{
 size_t VAR_1 = VAR_0->subbufs_produced - VAR_0->subbufs_consumed;
 return (VAR_1 >= VAR_0->chan->n_subbufs) ? 1 : 0;
}
