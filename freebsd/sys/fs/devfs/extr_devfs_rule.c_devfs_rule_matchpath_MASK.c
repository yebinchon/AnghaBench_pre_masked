
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfs_rule {int dr_pathptrn; } ;
struct devfs_mount {struct devfs_dirent* dm_rootdir; } ;
struct devfs_krule {struct devfs_rule dk_rule; } ;
struct devfs_dirent {int de_flags; TYPE_1__* de_dirent; } ;
struct cdev {char* si_name; } ;
struct TYPE_2__ {scalar_t__ d_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_1 (char*,struct devfs_mount*,struct devfs_dirent*,int *) ;
 struct cdev* FUNC_2 (struct devfs_dirent*) ;
 scalar_t__ FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,int ) ;
 char* FUNC_5 (scalar_t__,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct devfs_krule *VAR_8, struct devfs_mount *VAR_9,
    struct devfs_dirent *VAR_10)
{
 struct devfs_rule *VAR_11 = &VAR_8->dk_rule;
 struct cdev *VAR_12;
 int VAR_13;
 char *VAR_14, *VAR_15;

 VAR_15 = ((void*)0);
 VAR_12 = FUNC_2(VAR_10);
 if (VAR_12 != ((void*)0))
  VAR_14 = VAR_12->si_name;
 else if (VAR_10->de_dirent->d_type == VAR_3 ||
     (VAR_10->de_dirent->d_type == VAR_2 && VAR_10 != VAR_9->dm_rootdir &&
     (VAR_10->de_flags & (VAR_0 | VAR_1)) == 0)) {
  VAR_15 = FUNC_5(VAR_7 + 1, VAR_5, VAR_6);
  VAR_14 = FUNC_1(VAR_15, VAR_9, VAR_10, ((void*)0));
 } else
  return (0);

 FUNC_0(VAR_14 != ((void*)0), ("devfs_rule_matchpath: NULL pname"));
 VAR_13 = FUNC_3(VAR_11->dr_pathptrn, VAR_14, VAR_4) == 0;
 FUNC_4(VAR_15, VAR_5);
 return (VAR_13);
}
