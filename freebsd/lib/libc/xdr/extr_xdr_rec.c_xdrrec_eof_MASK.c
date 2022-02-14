
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bool_t ;
struct TYPE_6__ {scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
struct TYPE_7__ {scalar_t__ fbtbc; scalar_t__ in_finger; scalar_t__ in_boundry; int last_frag; } ;
typedef TYPE_2__ RECSTREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

bool_t
FUNC_2(XDR *VAR_2)
{
 RECSTREAM *VAR_3 = (RECSTREAM *)(VAR_2->x_private);

 while (VAR_3->fbtbc > 0 || (! VAR_3->last_frag)) {
  if (! FUNC_1(VAR_3, VAR_3->fbtbc))
   return (VAR_1);
  VAR_3->fbtbc = 0;
  if ((! VAR_3->last_frag) && (! FUNC_0(VAR_3)))
   return (VAR_1);
 }
 if (VAR_3->in_finger == VAR_3->in_boundry)
  return (VAR_1);
 return (VAR_0);
}
