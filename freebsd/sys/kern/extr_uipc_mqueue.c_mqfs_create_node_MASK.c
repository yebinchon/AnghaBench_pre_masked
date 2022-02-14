
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int cr_gid; int cr_uid; TYPE_1__* cr_prison; } ;
struct mqfs_node {int mn_type; int mn_refcount; int mn_mode; int mn_gid; int mn_uid; int mn_birth; int mn_mtime; int mn_atime; int mn_ctime; int mn_pr_root; int mn_name; } ;
struct TYPE_2__ {int pr_root; } ;


 struct mqfs_node* FUNC_0 () ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct mqfs_node *
FUNC_3(const char *VAR_0, int VAR_1, struct ucred *VAR_2, int VAR_3,
 int VAR_4)
{
 struct mqfs_node *VAR_5;

 VAR_5 = FUNC_0();
 FUNC_1(VAR_5->mn_name, VAR_0, VAR_1);
 VAR_5->mn_pr_root = VAR_2->cr_prison->pr_root;
 VAR_5->mn_type = VAR_4;
 VAR_5->mn_refcount = 1;
 FUNC_2(&VAR_5->mn_birth);
 VAR_5->mn_ctime = VAR_5->mn_atime = VAR_5->mn_mtime
  = VAR_5->mn_birth;
 VAR_5->mn_uid = VAR_2->cr_uid;
 VAR_5->mn_gid = VAR_2->cr_gid;
 VAR_5->mn_mode = VAR_3;
 return (VAR_5);
}
