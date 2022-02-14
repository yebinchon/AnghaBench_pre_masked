
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int raok_len_u; int raok_val_u; } ;
struct TYPE_5__ {TYPE_1__ raok_u; int raok_attributes; } ;
typedef TYPE_2__ nfsreadokres ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char**,int *,int ) ;
 int FUNC_3 (int *,int *) ;

bool_t
FUNC_4(XDR *VAR_5, nfsreadokres *VAR_6)
{
  if (FUNC_0(VAR_0))
    FUNC_1(VAR_4, "xdr_readokres:");

  if (!FUNC_3(VAR_5, &VAR_6->raok_attributes)) {
    return (VAR_1);
  }
  if (!FUNC_2(VAR_5,
   (char **) & VAR_6->raok_u.raok_val_u,
   (u_int *) & VAR_6->raok_u.raok_len_u,
   VAR_2)) {
    return (VAR_1);
  }
  return (VAR_3);
}
