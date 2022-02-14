
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int u_long ;
struct TYPE_6__ {size_t valdat_len; int valdat_val; } ;
struct TYPE_5__ {size_t keydat_len; int keydat_val; } ;
struct TYPE_7__ {int stat; TYPE_2__ val; TYPE_1__ key; } ;
struct TYPE_8__ {TYPE_3__ val; } ;
struct ypresp_all {scalar_t__ more; TYPE_4__ ypresp_all_u; } ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (struct ypresp_all*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,char*,size_t,char*,size_t,int ) ;
 int FUNC_5 (int ,struct ypresp_all*) ;
 int FUNC_6 (int *,struct ypresp_all*) ;
 int FUNC_7 (int,char*,size_t,char*,size_t,int ) ;
 int VAR_3 ;

bool_t
FUNC_8(XDR *VAR_4, u_long *VAR_5)
{
 struct ypresp_all VAR_6;
 u_long VAR_7;
 char *VAR_8, *VAR_9;
 int VAR_10;

 FUNC_1(&VAR_6, sizeof VAR_6);
 while (1) {
  if (!FUNC_6(VAR_4, &VAR_6)) {
   FUNC_5((xdrproc_t)FUNC_6, &VAR_6);
   *VAR_5 = VAR_2;
   return (VAR_0);
  }
  if (VAR_6.more == 0) {
   FUNC_5((xdrproc_t)FUNC_6, &VAR_6);
   *VAR_5 = 129;
   return (VAR_1);
  }
  VAR_7 = VAR_6.ypresp_all_u.val.stat;
  switch (VAR_7) {
  case 128:
   VAR_8 = (char *)FUNC_3(VAR_6.ypresp_all_u.val.key.keydat_len + 1);
   if (VAR_8 == ((void*)0)) {
    FUNC_5((xdrproc_t)FUNC_6, &VAR_6);
    *VAR_5 = VAR_2;
    return (VAR_0);
   }
   FUNC_0(VAR_6.ypresp_all_u.val.key.keydat_val, VAR_8,
    VAR_6.ypresp_all_u.val.key.keydat_len);
   VAR_8[VAR_6.ypresp_all_u.val.key.keydat_len] = '\0';
   VAR_9 = (char *)FUNC_3(VAR_6.ypresp_all_u.val.val.valdat_len + 1);
   if (VAR_9 == ((void*)0)) {
    FUNC_2(VAR_8);
    FUNC_5((xdrproc_t)FUNC_6, &VAR_6);
    *VAR_5 = VAR_2;
    return (VAR_0);
   }
   FUNC_0(VAR_6.ypresp_all_u.val.val.valdat_val, VAR_9,
    VAR_6.ypresp_all_u.val.val.valdat_len);
   VAR_9[VAR_6.ypresp_all_u.val.val.valdat_len] = '\0';
   FUNC_5((xdrproc_t)FUNC_6, &VAR_6);

   VAR_10 = FUNC_7)(VAR_7,
    VAR_8, VAR_6.ypresp_all_u.val.key.keydat_len,
    VAR_9, VAR_6.ypresp_all_u.val.val.valdat_len,
    VAR_3);
   *VAR_5 = VAR_7;
   FUNC_2(VAR_8);
   FUNC_2(VAR_9);
   if (VAR_10)
    return (VAR_1);
   break;
  case 129:
   FUNC_5((xdrproc_t)FUNC_6, &VAR_6);
   *VAR_5 = 129;
   return (VAR_1);
  default:
   FUNC_5((xdrproc_t)FUNC_6, &VAR_6);
   *VAR_5 = VAR_7;
   return (VAR_1);
  }
 }
}
