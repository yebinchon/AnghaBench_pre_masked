
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ alloc; TYPE_2__* cfm; int map_name; int (* isup ) (TYPE_3__*,int ) ;} ;
typedef TYPE_3__ mnt_map ;
struct TYPE_11__ {int na_mtime; } ;
struct TYPE_14__ {TYPE_1__ am_fattr; } ;
typedef TYPE_4__ am_node ;
struct TYPE_12__ {int cfm_dir; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_7(mnt_map *VAR_3)
{
  int VAR_4 = 0;

  if (VAR_3->alloc == VAR_1)
    return;


  if (VAR_3->isup) {
    if (!((*VAR_3->isup)(VAR_3, VAR_3->map_name))) {
      FUNC_5(VAR_2, "mapc_sync: map %s is down: not clearing map", VAR_3->map_name);
      return;
    }
  }

  if (VAR_3->alloc >= VAR_0) {

    VAR_4 = FUNC_4(VAR_3);
  } else {
    FUNC_2(VAR_3);



    FUNC_3(VAR_3);
    VAR_4 = 1;
  }





  if (VAR_4 && VAR_3->cfm) {
    am_node *VAR_5 = FUNC_1(VAR_3->cfm->cfm_dir);
    if (VAR_5) {
      FUNC_0(&VAR_5->am_fattr.na_mtime);
    } else {
      FUNC_5(VAR_2, "cannot find map %s to update its mtime",
    VAR_3->cfm->cfm_dir);
    }
  }
}
