
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct svc_req {int dummy; } ;
typedef int nfsstat ;
struct TYPE_18__ {int da_name; int da_fhandle; } ;
typedef TYPE_5__ nfsdiropargs ;
struct TYPE_14__ {scalar_t__ na_type; } ;
struct TYPE_19__ {TYPE_4__* am_al; int am_path; TYPE_1__ am_fattr; } ;
typedef TYPE_6__ am_node ;
struct TYPE_17__ {TYPE_3__* al_mnt; } ;
struct TYPE_16__ {TYPE_2__* mf_ops; } ;
struct TYPE_15__ {TYPE_6__* (* lookup_child ) (TYPE_6__*,int ,int*,int ) ;} ;
struct TYPE_13__ {int d_drops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_12__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_6__* FUNC_1 (int *,int*,int ) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 TYPE_6__* FUNC_5 (TYPE_6__*,int ,int*,int ) ;

__attribute__((used)) static nfsstat *
FUNC_6(nfsdiropargs *VAR_8, struct svc_req *VAR_9, int VAR_10)
{
  static nfsstat VAR_11;
  int VAR_12;

  am_node *VAR_13 = FUNC_1(&VAR_8->da_fhandle, &VAR_12, VAR_5);
  if (VAR_13 == ((void*)0)) {
    if (VAR_12 < 0) {
      VAR_7.d_drops++;
      return 0;
    }
    VAR_11 = FUNC_3(VAR_12);
    goto out;
  }

  if (VAR_13->am_fattr.na_type != VAR_3) {
    VAR_11 = FUNC_3(VAR_2);
    goto out;
  }

  if (FUNC_0(VAR_0))
    FUNC_4(VAR_6, "\tremove(%s, %s)", VAR_13->am_path, VAR_8->da_name);

  VAR_13 = VAR_13->am_al->al_mnt->mf_ops->lookup_child(VAR_13, VAR_8->da_name, &VAR_12, VAR_5);
  if (VAR_13 == ((void*)0)) {



    if (VAR_12 < 0)
      VAR_12 = 0;



    else if (VAR_12 == VAR_1)
      VAR_12 = 0;
    VAR_11 = FUNC_3(VAR_12);
  } else {
    FUNC_2(VAR_13);
    VAR_11 = VAR_4;
  }

out:
  return &VAR_11;
}
