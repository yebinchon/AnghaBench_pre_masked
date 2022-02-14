
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_vptofh_args {int a_vp; scalar_t__ a_fhp; } ;
struct tmpfs_node {int tn_gen; int tn_id; } ;
struct tmpfs_fid {int tf_len; int tf_gen; int tf_id; } ;


 struct tmpfs_node* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct vop_vptofh_args *VAR_0)
{
 struct tmpfs_fid *VAR_1;
 struct tmpfs_node *VAR_2;

 VAR_1 = (struct tmpfs_fid *)VAR_0->a_fhp;
 VAR_2 = FUNC_0(VAR_0->a_vp);

 VAR_1->tf_len = sizeof(struct tmpfs_fid);
 VAR_1->tf_id = VAR_2->tn_id;
 VAR_1->tf_gen = VAR_2->tn_gen;

 return (0);
}
