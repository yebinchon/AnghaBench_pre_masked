
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_rule {scalar_t__ dr_magic; int dr_id; } ;
struct devfs_mount {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct devfs_mount*) ;

__attribute__((used)) static int
FUNC_1(struct devfs_rule *VAR_2, struct devfs_mount *VAR_3)
{

 if (VAR_2->dr_magic != VAR_0)
  return (VAR_1);
 VAR_2->dr_id = FUNC_0(VAR_2->dr_id, VAR_3);
 return (0);
}
