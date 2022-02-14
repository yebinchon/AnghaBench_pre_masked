
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_4__ {int da_fhandle; } ;
struct TYPE_5__ {TYPE_1__ sla_from; } ;
typedef TYPE_2__ nfssymlinkargs ;
typedef int nfsstat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

nfsstat *
FUNC_2(nfssymlinkargs *VAR_2, struct svc_req *VAR_3)
{
  static nfsstat VAR_4;

  if (!FUNC_0(&VAR_2->sla_from.da_fhandle))
    VAR_4 = FUNC_1(VAR_1);
  else
    VAR_4 = FUNC_1(VAR_0);

  return &VAR_4;
}
