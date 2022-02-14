
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int nt_useconds; int nt_seconds; } ;
typedef TYPE_1__ nfstime ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;

bool_t
FUNC_3(XDR *VAR_4, nfstime *VAR_5)
{
  if (FUNC_0(VAR_0))
    FUNC_1(VAR_3, "xdr_nfstime:");

  if (!FUNC_2(VAR_4, (u_int *) &VAR_5->nt_seconds)) {
    return (VAR_1);
  }
  if (!FUNC_2(VAR_4, (u_int *) &VAR_5->nt_useconds)) {
    return (VAR_1);
  }
  return (VAR_2);
}
