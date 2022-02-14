
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_vptofh_args {scalar_t__ a_fhp; int a_vp; } ;
struct udf_node {int hash_id; } ;
struct ifid {int ifid_len; int ifid_ino; } ;


 struct udf_node* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct vop_vptofh_args *VAR_0)
{
 struct udf_node *VAR_1;
 struct ifid *VAR_2;

 VAR_1 = FUNC_0(VAR_0->a_vp);
 VAR_2 = (struct ifid *)VAR_0->a_fhp;
 VAR_2->ifid_len = sizeof(struct ifid);
 VAR_2->ifid_ino = VAR_1->hash_id;

 return (0);
}
