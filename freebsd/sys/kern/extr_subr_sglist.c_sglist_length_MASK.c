
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sglist {int sg_nseg; TYPE_1__* sg_segs; } ;
struct TYPE_2__ {scalar_t__ ss_len; } ;



size_t
FUNC_0(struct sglist *VAR_0)
{
 size_t VAR_1;
 int VAR_2;

 VAR_1 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->sg_nseg; VAR_2++)
  VAR_1 += VAR_0->sg_segs[VAR_2].ss_len;
 return (VAR_1);
}
