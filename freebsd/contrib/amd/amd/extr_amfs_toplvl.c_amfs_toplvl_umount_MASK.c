
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_6__ {int mf_flags; } ;
typedef TYPE_1__ mntfs ;
struct TYPE_7__ {int am_path; } ;
typedef TYPE_2__ am_node ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*,int ) ;
 int VAR_12 ;
 TYPE_3__ VAR_13 ;
 scalar_t__ FUNC_2 (int ,struct stat*) ;
 int VAR_14 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int) ;

int
FUNC_5(am_node *VAR_15, mntfs *VAR_16)
{
  struct stat VAR_17;
  int VAR_18 = (VAR_16->mf_flags & VAR_7) ? VAR_0 : 0;
  int VAR_19;
  int VAR_20 = 0;

again:
  if (FUNC_2(VAR_15->am_path, &VAR_17) < 0) {
    VAR_19 = VAR_12;
    FUNC_1("lstat(%s): %m", VAR_15->am_path);
    goto out;
  }
  if ((VAR_17.st_mode & VAR_9) != VAR_8) {
    FUNC_3(VAR_10, "amfs_toplvl_umount: %s is not a directory, aborting.", VAR_15->am_path);
    VAR_19 = VAR_5;
    goto out;
  }

  VAR_19 = FUNC_0(VAR_15->am_path, VAR_14, VAR_18);
  if (VAR_19 == VAR_4) {
    FUNC_3(VAR_11, "amfs_toplvl_unmount retrying %s in 1s", VAR_15->am_path);
    VAR_20++;
    FUNC_4(1);






    if (VAR_13.flags & VAR_3) {
      if (VAR_20 == 5) {
 FUNC_1("enabling forced unmounts for toplvl node %s", VAR_15->am_path);
 VAR_18 |= VAR_2;
      }
      if (VAR_20 == 10) {
 FUNC_1("enabling detached unmounts for toplvl node %s", VAR_15->am_path);
 VAR_18 |= VAR_1;
      }
    }
    goto again;
  }
out:
  return VAR_19;
}
