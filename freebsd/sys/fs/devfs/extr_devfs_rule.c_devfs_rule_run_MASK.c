
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_ruleset {int dummy; } ;
struct devfs_rule {int dr_iacts; int dr_bacts; int dr_incset; int dr_mode; int dr_gid; int dr_uid; } ;
struct devfs_mount {int dummy; } ;
struct devfs_krule {struct devfs_rule dk_rule; } ;
struct devfs_dirent {int de_mode; int de_gid; int de_uid; int de_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct devfs_krule*,struct devfs_mount*,struct devfs_dirent*) ;
 int FUNC_2 (struct devfs_ruleset*,struct devfs_mount*,struct devfs_dirent*,unsigned int) ;
 struct devfs_ruleset* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct devfs_krule *VAR_8, struct devfs_mount *VAR_9,
    struct devfs_dirent *VAR_10, unsigned VAR_11)
{
 struct devfs_rule *VAR_12 = &VAR_8->dk_rule;
 struct devfs_ruleset *VAR_13;

 if (!FUNC_1(VAR_8, VAR_9, VAR_10))
  return;
 if (VAR_12->dr_iacts & VAR_1) {
  if (VAR_12->dr_bacts & VAR_6)
   VAR_10->de_flags |= VAR_0;
  if (VAR_12->dr_bacts & VAR_7)
   VAR_10->de_flags &= ~VAR_0;
 }
 if (VAR_12->dr_iacts & VAR_5)
  VAR_10->de_uid = VAR_12->dr_uid;
 if (VAR_12->dr_iacts & VAR_2)
  VAR_10->de_gid = VAR_12->dr_gid;
 if (VAR_12->dr_iacts & VAR_4)
  VAR_10->de_mode = VAR_12->dr_mode;
 if (VAR_12->dr_iacts & VAR_3) {
  if (VAR_11 > 0) {
   VAR_13 = FUNC_3(VAR_8->dk_rule.dr_incset);
   FUNC_0(VAR_13 != ((void*)0), ("DRA_INCSET but bad dr_incset"));
   FUNC_2(VAR_13, VAR_9, VAR_10, VAR_11 - 1);
  }
 }
}
