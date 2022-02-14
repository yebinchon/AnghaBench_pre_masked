
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ opaque_t ;
struct TYPE_9__ {int na_fileid; } ;
struct TYPE_13__ {int am_gen; TYPE_4__* am_al; TYPE_1__ am_fattr; } ;
typedef TYPE_5__ am_node ;
struct TYPE_12__ {TYPE_3__* al_mnt; } ;
struct TYPE_11__ {TYPE_2__* mf_ops; } ;
struct TYPE_10__ {int (* mount_child ) (TYPE_5__*,int*) ;TYPE_5__* (* lookup_child ) (TYPE_5__*,char*,int*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 TYPE_5__* FUNC_1 (TYPE_5__*,char*,int*,int ) ;
 int FUNC_2 (TYPE_5__*,int*) ;

int
FUNC_3(char *VAR_3, opaque_t VAR_4)
{
  int VAR_5 = 0;
  am_node *VAR_6 = (am_node *) VAR_4;
  am_node *VAR_7;

  VAR_7 = VAR_6->am_al->al_mnt->mf_ops->lookup_child(VAR_6, VAR_3, &VAR_5, VAR_0);
  if (VAR_7 && VAR_5 < 0) {




    VAR_7->am_gen = VAR_7->am_fattr.na_fileid = 1;

    (void) VAR_6->am_al->al_mnt->mf_ops->mount_child(VAR_7, &VAR_5);
  }

  if (VAR_5 > 0) {
    VAR_2 = VAR_5;
    FUNC_0(VAR_1, "Could not mount %s: %m", VAR_3);
  }
  return VAR_5;
}
