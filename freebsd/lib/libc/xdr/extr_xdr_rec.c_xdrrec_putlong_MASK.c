
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ int32_t ;
typedef int bool_t ;
struct TYPE_5__ {scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
struct TYPE_6__ {scalar_t__ out_finger; scalar_t__ out_boundry; int frag_sent; } ;
typedef TYPE_2__ RECSTREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool_t
FUNC_2(XDR *VAR_2, const long *VAR_3)
{
 RECSTREAM *VAR_4 = (RECSTREAM *)(VAR_2->x_private);
 int32_t *VAR_5 = ((int32_t *)(void *)(VAR_4->out_finger));

 if ((VAR_4->out_finger += sizeof(int32_t)) > VAR_4->out_boundry) {




  VAR_4->out_finger -= sizeof(int32_t);
  VAR_4->frag_sent = VAR_1;
  if (! FUNC_0(VAR_4, VAR_0))
   return (VAR_0);
  VAR_5 = ((int32_t *)(void *)(VAR_4->out_finger));
  VAR_4->out_finger += sizeof(int32_t);
 }
 *VAR_5 = (int32_t)FUNC_1((u_int32_t)(*VAR_3));
 return (VAR_1);
}
