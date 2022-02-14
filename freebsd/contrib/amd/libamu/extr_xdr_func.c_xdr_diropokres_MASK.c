
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int drok_attributes; int drok_fhandle; } ;
typedef TYPE_1__ nfsdiropokres ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

bool_t
FUNC_4(XDR *VAR_4, nfsdiropokres *VAR_5)
{
  if (FUNC_0(VAR_0))
    FUNC_1(VAR_3, "xdr_diropokres:");

  if (!FUNC_3(VAR_4, &VAR_5->drok_fhandle)) {
    return (VAR_1);
  }
  if (!FUNC_2(VAR_4, &VAR_5->drok_attributes)) {
    return (VAR_1);
  }
  return (VAR_2);
}
