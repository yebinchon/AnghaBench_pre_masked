
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_7__ {void* dr_status; } ;
typedef TYPE_2__ nfsdiropres ;
struct TYPE_6__ {int da_fhandle; } ;
struct TYPE_8__ {TYPE_1__ ca_where; } ;
typedef TYPE_3__ nfscreateargs ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;

nfsdiropres *
FUNC_2(nfscreateargs *VAR_2, struct svc_req *VAR_3)
{
  static nfsdiropres VAR_4;

  if (!FUNC_0(&VAR_2->ca_where.da_fhandle))
    VAR_4.dr_status = FUNC_1(VAR_1);
  else
    VAR_4.dr_status = FUNC_1(VAR_0);

  return &VAR_4;
}
