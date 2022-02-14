
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sfrok_bavail; int sfrok_bfree; int sfrok_blocks; int sfrok_bsize; int sfrok_tsize; } ;
typedef TYPE_1__ nfsstatfsokres ;
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
FUNC_3(XDR *VAR_4, nfsstatfsokres *VAR_5)
{
  if (FUNC_0(VAR_0))
    FUNC_1(VAR_3, "xdr_statfsokres:");

  if (!FUNC_2(VAR_4, &VAR_5->sfrok_tsize)) {
    return (VAR_1);
  }
  if (!FUNC_2(VAR_4, &VAR_5->sfrok_bsize)) {
    return (VAR_1);
  }
  if (!FUNC_2(VAR_4, &VAR_5->sfrok_blocks)) {
    return (VAR_1);
  }
  if (!FUNC_2(VAR_4, &VAR_5->sfrok_bfree)) {
    return (VAR_1);
  }
  if (!FUNC_2(VAR_4, &VAR_5->sfrok_bavail)) {
    return (VAR_1);
  }
  return (VAR_2);
}
