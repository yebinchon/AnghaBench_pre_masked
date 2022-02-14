
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int caddr_t ;
typedef int bool_t ;
struct TYPE_3__ {scalar_t__ fh_data; } ;
typedef TYPE_1__ am_nfs_fh ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ,int ) ;

bool_t
FUNC_3(XDR *VAR_5, am_nfs_fh *VAR_6)
{
  if (FUNC_0(VAR_0))
    FUNC_1(VAR_4, "xdr_nfs_fh:");

  if (!FUNC_2(VAR_5, (caddr_t) VAR_6->fh_data, VAR_2)) {
    return (VAR_1);
  }
  return (VAR_3);
}
