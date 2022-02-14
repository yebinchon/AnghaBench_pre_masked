
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_vptofh_args {scalar_t__ a_fhp; int a_vp; } ;
struct denode {int de_diroffset; int de_dirclust; } ;
struct defid {int defid_len; int defid_dirofs; int defid_dirclust; } ;


 struct denode* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct vop_vptofh_args *VAR_0)
{
 struct denode *VAR_1;
 struct defid *VAR_2;

 VAR_1 = FUNC_0(VAR_0->a_vp);
 VAR_2 = (struct defid *)VAR_0->a_fhp;
 VAR_2->defid_len = sizeof(struct defid);
 VAR_2->defid_dirclust = VAR_1->de_dirclust;
 VAR_2->defid_dirofs = VAR_1->de_diroffset;

 return (0);
}
