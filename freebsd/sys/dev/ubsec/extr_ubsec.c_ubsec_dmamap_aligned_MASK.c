
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubsec_operand {int nsegs; TYPE_1__* segs; } ;
struct TYPE_2__ {int ds_addr; int ds_len; } ;



__attribute__((used)) static int
FUNC_0(struct ubsec_operand *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nsegs; VAR_1++) {
  if (VAR_0->segs[VAR_1].ds_addr & 3)
   return (0);
  if ((VAR_1 != (VAR_0->nsegs - 1)) &&
      (VAR_0->segs[VAR_1].ds_len & 3))
   return (0);
 }
 return (1);
}
