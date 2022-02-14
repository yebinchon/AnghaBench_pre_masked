
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nfsentry ;
struct TYPE_3__ {int dl_eof; int dl_entries; } ;
typedef TYPE_1__ nfsdirlist ;
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
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,char**,int,int ) ;

bool_t
FUNC_4(XDR *VAR_5, nfsdirlist *VAR_6)
{
  if (FUNC_0(VAR_0))
    FUNC_1(VAR_3, "xdr_dirlist:");

  if (!FUNC_3(VAR_5, (char **) &VAR_6->dl_entries, sizeof(nfsentry), (XDRPROC_T_TYPE) VAR_4)) {
    return (VAR_1);
  }
  if (!FUNC_2(VAR_5, &VAR_6->dl_eof)) {
    return (VAR_1);
  }
  return (VAR_2);
}
