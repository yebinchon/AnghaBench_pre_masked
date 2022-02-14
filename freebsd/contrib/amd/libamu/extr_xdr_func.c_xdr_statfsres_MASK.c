
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sfr_reply_u; } ;
struct TYPE_5__ {int sfr_status; TYPE_1__ sfr_u; } ;
typedef TYPE_2__ nfsstatfsres ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int *) ;

bool_t
FUNC_4(XDR *VAR_4, nfsstatfsres *VAR_5)
{
  if (FUNC_0(VAR_0))
    FUNC_1(VAR_3, "xdr_statfsres:");

  if (!FUNC_2(VAR_4, &VAR_5->sfr_status)) {
    return (VAR_1);
  }
  switch (VAR_5->sfr_status) {
  case 128:
    if (!FUNC_3(VAR_4, &VAR_5->sfr_u.sfr_reply_u)) {
      return (VAR_1);
    }
    break;
  default:
    break;
  }
  return (VAR_2);
}
