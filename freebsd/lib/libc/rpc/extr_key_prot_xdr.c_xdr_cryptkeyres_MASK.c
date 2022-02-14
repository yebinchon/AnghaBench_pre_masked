
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int deskey; } ;
struct TYPE_5__ {int status; TYPE_1__ cryptkeyres_u; } ;
typedef TYPE_2__ cryptkeyres ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int*) ;

bool_t
FUNC_2(register XDR *VAR_2, cryptkeyres *VAR_3)
{

 if (!FUNC_1(VAR_2, &VAR_3->status))
  return (VAR_0);
 switch (VAR_3->status) {
 case 128:
  if (!FUNC_0(VAR_2, &VAR_3->cryptkeyres_u.deskey))
   return (VAR_0);
  break;
 default:
  break;
 }
 return (VAR_1);
}
