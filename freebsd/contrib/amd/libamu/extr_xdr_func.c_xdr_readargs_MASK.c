
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ra_totalcount; int ra_count; int ra_offset; int ra_fhandle; } ;
typedef TYPE_1__ nfsreadargs ;
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
FUNC_4(XDR *VAR_4, nfsreadargs *VAR_5)
{
  if (FUNC_0(VAR_0))
    FUNC_1(VAR_3, "xdr_readargs:");

  if (!FUNC_2(VAR_4, &VAR_5->ra_fhandle)) {
    return (VAR_1);
  }
  if (!FUNC_3(VAR_4, &VAR_5->ra_offset)) {
    return (VAR_1);
  }
  if (!FUNC_3(VAR_4, &VAR_5->ra_count)) {
    return (VAR_1);
  }
  if (!FUNC_3(VAR_4, &VAR_5->ra_totalcount)) {
    return (VAR_1);
  }
  return (VAR_2);
}
