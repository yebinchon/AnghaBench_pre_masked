
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum xprt_stat { ____Placeholder_xprt_stat } xprt_stat ;
typedef scalar_t__ bool_t ;
struct TYPE_7__ {scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
struct TYPE_8__ {scalar_t__ fbtbc; scalar_t__ in_finger; scalar_t__ in_boundry; scalar_t__ last_frag; scalar_t__ nonblock; } ;
typedef TYPE_2__ RECSTREAM ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;

bool_t
FUNC_3(XDR *VAR_3)
{
 RECSTREAM *VAR_4 = (RECSTREAM *)(VAR_3->x_private);
 enum xprt_stat VAR_5;

 if (VAR_4->nonblock) {
  if (FUNC_0(VAR_3, &VAR_5, VAR_0)) {
   VAR_4->fbtbc = 0;
   return VAR_1;
  }
  if (VAR_4->in_finger == VAR_4->in_boundry &&
      VAR_5 == VAR_2) {
   VAR_4->fbtbc = 0;
   return VAR_1;
  }
  return VAR_0;
 }

 while (VAR_4->fbtbc > 0 || (! VAR_4->last_frag)) {
  if (! FUNC_2(VAR_4, VAR_4->fbtbc))
   return (VAR_0);
  VAR_4->fbtbc = 0;
  if ((! VAR_4->last_frag) && (! FUNC_1(VAR_4)))
   return (VAR_0);
 }
 VAR_4->last_frag = VAR_0;
 return (VAR_1);
}
