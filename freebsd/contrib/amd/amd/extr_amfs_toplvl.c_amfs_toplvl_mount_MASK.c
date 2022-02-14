
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int toplvl_opts ;
struct stat {int st_mode; } ;
typedef int preopts ;
typedef int opts ;
struct TYPE_10__ {int mf_flags; int mf_info; TYPE_1__* mf_ops; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_11__ {int am_autofs_fh; int am_path; } ;
typedef TYPE_3__ am_node ;
struct TYPE_12__ {scalar_t__* amfs_auto_timeo; scalar_t__* amfs_auto_retrans; scalar_t__ auto_attrcache; } ;
struct TYPE_9__ {int fs_type; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,char*) ;
 int FUNC_1 (char*,int,int ) ;
 int VAR_16 ;
 TYPE_4__ VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (char*,int,char*,char*,scalar_t__,...) ;
 int FUNC_6 (char*,char*,int) ;

int
FUNC_7(am_node *VAR_19, mntfs *VAR_20)
{
  struct stat VAR_21;
  char VAR_22[VAR_11], VAR_23[VAR_11], VAR_24[40];
  int VAR_25;







  if (FUNC_4(VAR_19->am_path, &VAR_21) < 0) {
    return VAR_16;
  } else if ((VAR_21.st_mode & VAR_13) != VAR_12) {
    FUNC_2(VAR_15, "%s is not a directory", VAR_19->am_path);
    return VAR_1;
  }
  {
    VAR_23[0] = '\0';
    FUNC_5(VAR_22, sizeof(VAR_22), "%s%s,%s=%d,%s,map=%s",
       VAR_23,
       VAR_9,
       VAR_7, VAR_18,
       VAR_20->mf_ops->fs_type, VAR_20->mf_info);


    if (VAR_17.amfs_auto_timeo[VAR_0] > 0) {
      FUNC_5(VAR_24, sizeof(VAR_24), ",%s=%d",
  VAR_10, VAR_17.amfs_auto_timeo[VAR_0]);
      FUNC_6(VAR_22, VAR_24, sizeof(VAR_22));
    }
    if (VAR_17.amfs_auto_retrans[VAR_0] > 0) {
      FUNC_5(VAR_24, sizeof(VAR_24), ",%s=%d",
  VAR_8, VAR_17.amfs_auto_retrans[VAR_0]);
      FUNC_6(VAR_22, VAR_24, sizeof(VAR_22));
    }
      FUNC_3(VAR_23, VAR_22, sizeof(VAR_23));
  }


  VAR_25 = FUNC_0(VAR_19, VAR_20, VAR_22);
  if (VAR_25) {
    VAR_16 = VAR_25;
    FUNC_2(VAR_14, "amfs_toplvl_mount: amfs_mount failed: %m");
    return VAR_25;
  }
  return 0;
}
