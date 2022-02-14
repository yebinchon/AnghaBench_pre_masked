
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int tn_dirhead; } ;
struct tmpfs_node {TYPE_1__ tn_dir; } ;
struct tmpfs_dirent {int td_hash; } ;


 struct tmpfs_dirent* FUNC_0 (int ,int *,struct tmpfs_dirent*) ;
 int VAR_0 ;

__attribute__((used)) static struct tmpfs_dirent *
FUNC_1(struct tmpfs_node *VAR_1, uint32_t VAR_2)
{
 struct tmpfs_dirent *VAR_3, VAR_4;

 VAR_4.td_hash = VAR_2;
 VAR_3 = FUNC_0(VAR_0, &VAR_1->tn_dir.tn_dirhead, &VAR_4);
 return (VAR_3);
}
