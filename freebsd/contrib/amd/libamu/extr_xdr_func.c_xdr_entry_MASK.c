
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ne_nextentry; int ne_cookie; int ne_name; int ne_fileid; } ;
typedef TYPE_1__ nfsentry ;
typedef int bool_t ;
typedef int XDRPROC_T_TYPE ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char**,int,int ) ;
 int FUNC_5 (int *,int *) ;

bool_t
FUNC_6(XDR *VAR_4, nfsentry *VAR_5)
{
  if (FUNC_0(VAR_0))
    FUNC_1(VAR_3, "xdr_entry:");

  if (!FUNC_5(VAR_4, &VAR_5->ne_fileid)) {
    return (VAR_1);
  }
  if (!FUNC_2(VAR_4, &VAR_5->ne_name)) {
    return (VAR_1);
  }
  if (!FUNC_3(VAR_4, VAR_5->ne_cookie)) {
    return (VAR_1);
  }
  if (!FUNC_4(VAR_4, (char **) &VAR_5->ne_nextentry, sizeof(nfsentry), (XDRPROC_T_TYPE) FUNC_6)) {
    return (VAR_1);
  }
  return (VAR_2);
}
