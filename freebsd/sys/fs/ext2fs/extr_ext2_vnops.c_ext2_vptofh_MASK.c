
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_vptofh_args {scalar_t__ a_fhp; int a_vp; } ;
struct ufid {int ufid_len; int ufid_gen; int ufid_ino; } ;
struct inode {int i_gen; int i_number; } ;


 struct inode* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct vop_vptofh_args *VAR_0)
{
 struct inode *VAR_1;
 struct ufid *VAR_2;

 VAR_1 = FUNC_0(VAR_0->a_vp);
 VAR_2 = (struct ufid *)VAR_0->a_fhp;
 VAR_2->ufid_len = sizeof(struct ufid);
 VAR_2->ufid_ino = VAR_1->i_number;
 VAR_2->ufid_gen = VAR_1->i_gen;
 return (0);
}
