
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sglist {int sg_nseg; TYPE_1__* sg_segs; } ;
struct TYPE_2__ {int ss_len; } ;


 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct sglist *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->sg_nseg; VAR_2++)
  VAR_3 += FUNC_0(VAR_0->sg_segs[VAR_2].ss_len, VAR_1);
 return (VAR_3);
}
