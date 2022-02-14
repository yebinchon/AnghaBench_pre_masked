
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct svc_req {int dummy; } ;
typedef int nfsstat ;
struct TYPE_6__ {int da_name; int da_fhandle; } ;
struct TYPE_5__ {int da_fhandle; } ;
struct TYPE_7__ {TYPE_2__ rna_to; TYPE_1__ rna_from; } ;
typedef TYPE_3__ nfsrenameargs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

nfsstat *
FUNC_3(nfsrenameargs *VAR_3, struct svc_req *VAR_4)
{
  static nfsstat VAR_5;

  if (!FUNC_1(&VAR_3->rna_from.da_fhandle) || !FUNC_1(&VAR_3->rna_to.da_fhandle))
    VAR_5 = FUNC_2(VAR_1);




  else if (FUNC_0(VAR_3->rna_to.da_name, ".nfs", 4))
    VAR_5 = VAR_2;



  else
    VAR_5 = FUNC_2(VAR_0);

  return &VAR_5;
}
