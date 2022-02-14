
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct safe_operand {scalar_t__ nsegs; TYPE_1__* segs; } ;
struct TYPE_2__ {int ds_len; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const struct safe_operand *VAR_1)
{
 int VAR_2 = 1;

 if (VAR_1->nsegs > 0) {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1->nsegs-1; VAR_3++) {
   if (VAR_1->segs[VAR_3].ds_len % VAR_0)
    return (0);
   if (VAR_1->segs[VAR_3].ds_len != VAR_0)
    VAR_2 = 2;
  }
 }
 return (VAR_2);
}
