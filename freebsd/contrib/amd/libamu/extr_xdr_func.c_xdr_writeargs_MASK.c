
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int wra_len_u; int wra_val_u; } ;
struct TYPE_5__ {TYPE_1__ wra_u; int wra_totalcount; int wra_offset; int wra_beginoffset; int wra_fhandle; } ;
typedef TYPE_2__ nfswriteargs ;
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
 int FUNC_4 (int *,int *) ;

bool_t
FUNC_5(XDR *VAR_5, nfswriteargs *VAR_6)
{
  if (FUNC_0(VAR_0))
    FUNC_1(VAR_4, "xdr_writeargs:");

  if (!FUNC_3(VAR_5, &VAR_6->wra_fhandle)) {
    return (VAR_1);
  }
  if (!FUNC_4(VAR_5, &VAR_6->wra_beginoffset)) {
    return (VAR_1);
  }
  if (!FUNC_4(VAR_5, &VAR_6->wra_offset)) {
    return (VAR_1);
  }
  if (!FUNC_4(VAR_5, &VAR_6->wra_totalcount)) {
    return (VAR_1);
  }
  if (!FUNC_2(VAR_5,
   (char **) & VAR_6->wra_u.wra_val_u,
   (u_int *) & VAR_6->wra_u.wra_len_u,
   VAR_2)) {
    return (VAR_1);
  }
  return (VAR_3);
}
