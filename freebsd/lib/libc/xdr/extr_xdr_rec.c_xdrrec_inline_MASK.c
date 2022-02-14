
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int int32_t ;
struct TYPE_4__ {int x_op; scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
struct TYPE_5__ {scalar_t__ in_finger; scalar_t__ fbtbc; scalar_t__ in_boundry; scalar_t__ out_finger; scalar_t__ out_boundry; } ;
typedef TYPE_2__ RECSTREAM ;






__attribute__((used)) static int32_t *
FUNC_0(XDR *VAR_0, u_int VAR_1)
{
 RECSTREAM *VAR_2 = (RECSTREAM *)VAR_0->x_private;
 int32_t *VAR_3 = ((void*)0);

 switch (VAR_0->x_op) {

 case 129:
  if ((VAR_2->out_finger + VAR_1) <= VAR_2->out_boundry) {
   VAR_3 = (int32_t *)(void *)VAR_2->out_finger;
   VAR_2->out_finger += VAR_1;
  }
  break;

 case 130:
  if ((VAR_1 <= VAR_2->fbtbc) &&
   ((VAR_2->in_finger + VAR_1) <= VAR_2->in_boundry)) {
   VAR_3 = (int32_t *)(void *)VAR_2->in_finger;
   VAR_2->fbtbc -= VAR_1;
   VAR_2->in_finger += VAR_1;
  }
  break;

 case 128:
  break;
 }
 return (VAR_3);
}
