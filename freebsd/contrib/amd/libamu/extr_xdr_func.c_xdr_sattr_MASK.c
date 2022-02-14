
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sa_mtime; int sa_atime; int sa_size; int sa_gid; int sa_uid; int sa_mode; } ;
typedef TYPE_1__ nfssattr ;
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
FUNC_4(XDR *VAR_4, nfssattr *VAR_5)
{
  if (FUNC_0(VAR_0))
    FUNC_1(VAR_3, "xdr_sattr:");

  if (!FUNC_3(VAR_4, &VAR_5->sa_mode)) {
    return (VAR_1);
  }
  if (!FUNC_3(VAR_4, &VAR_5->sa_uid)) {
    return (VAR_1);
  }
  if (!FUNC_3(VAR_4, &VAR_5->sa_gid)) {
    return (VAR_1);
  }
  if (!FUNC_3(VAR_4, &VAR_5->sa_size)) {
    return (VAR_1);
  }
  if (!FUNC_2(VAR_4, &VAR_5->sa_atime)) {
    return (VAR_1);
  }
  if (!FUNC_2(VAR_4, &VAR_5->sa_mtime)) {
    return (VAR_1);
  }
  return (VAR_2);
}
