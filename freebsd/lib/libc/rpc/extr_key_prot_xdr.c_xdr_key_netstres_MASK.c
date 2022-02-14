
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int knet; } ;
struct TYPE_5__ {int status; TYPE_1__ key_netstres_u; } ;
typedef TYPE_2__ key_netstres ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int*) ;

bool_t
FUNC_2(register XDR *VAR_2, key_netstres *VAR_3)
{

 if (!FUNC_1(VAR_2, &VAR_3->status))
  return (VAR_0);
 switch (VAR_3->status) {
 case 128:
  if (!FUNC_0(VAR_2, &VAR_3->key_netstres_u.knet))
   return (VAR_0);
  break;
 default:
  break;
 }
 return (VAR_1);
}
