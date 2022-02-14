
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_5__ {int sag_fhandle; } ;
typedef TYPE_1__ nfssattrargs ;
struct TYPE_6__ {void* ns_status; } ;
typedef TYPE_2__ nfsattrstat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;

nfsattrstat *
FUNC_2(nfssattrargs *VAR_2, struct svc_req *VAR_3)
{
  static nfsattrstat VAR_4;

  if (!FUNC_0(&VAR_2->sag_fhandle))
    VAR_4.ns_status = FUNC_1(VAR_1);
  else
    VAR_4.ns_status = FUNC_1(VAR_0);

  return &VAR_4;
}
