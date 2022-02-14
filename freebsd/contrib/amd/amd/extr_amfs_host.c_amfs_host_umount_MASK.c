
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* mnt; struct TYPE_9__* mnext; } ;
typedef TYPE_2__ mntlist ;
struct TYPE_10__ {int mf_flags; int mf_mount; } ;
typedef TYPE_3__ mntfs ;
typedef int am_node ;
struct TYPE_8__ {char* mnt_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,char*,char*) ;
 TYPE_2__* FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(am_node *VAR_9, mntfs *VAR_10)
{
  mntlist *VAR_11, *VAR_12;
  int VAR_13 = (VAR_10->mf_flags & VAR_4) ? VAR_0 : 0;
  int VAR_14 = 0;




  mntlist *VAR_15 = FUNC_6(VAR_10->mf_mount, VAR_8);
  VAR_11 = VAR_15;
  VAR_12 = ((void*)0);
  while (VAR_11) {
    mntlist *VAR_16 = VAR_11->mnext;
    VAR_11->mnext = VAR_12;
    VAR_12 = VAR_11;
    VAR_11 = VAR_16;
  }
  VAR_15 = VAR_12;




  for (VAR_11 = VAR_15; VAR_11 && !VAR_14; VAR_11 = VAR_11->mnext) {
    char *VAR_17 = VAR_11->mnt->mnt_dir;
    if (FUNC_2(VAR_10->mf_mount, VAR_17)) {
      int VAR_18;
      FUNC_4("amfs_host: unmounts %s", VAR_17);



      VAR_18 = FUNC_0(VAR_17, VAR_8, VAR_13);



      if (VAR_18) {
 if (!VAR_14 && VAR_18 != VAR_2)
   VAR_14 = VAR_18;
 if (VAR_18 != VAR_1) {
   VAR_7 = VAR_18;
   FUNC_5(VAR_5, "Tree unmount of %s failed: %m", VAR_11->mnt->mnt_dir);
 }
      } else {
 (void) FUNC_7(VAR_17);
      }
    }
  }




  FUNC_3(VAR_15);




  if (VAR_14 && VAR_6 != VAR_3) {
    VAR_14 = FUNC_1(VAR_9, VAR_10);
    if (!VAR_14) {




      VAR_14 = VAR_1;
    }
  }
  return VAR_14;
}
