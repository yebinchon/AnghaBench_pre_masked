
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct vop_getacl_args {scalar_t__ a_type; int a_td; int a_aclp; int a_cred; int a_vp; } ;
typedef int gid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct vop_getacl_args *VAR_4)
{
 int VAR_5;

 if (VAR_4->a_type != VAR_0)
  return (VAR_1);
 VAR_5 = FUNC_1(VAR_4->a_vp, VAR_4->a_cred, VAR_4->a_td, VAR_4->a_aclp,
     ((void*)0));
 if (VAR_5 > VAR_3) {
  (void) FUNC_0(VAR_4->a_td, VAR_5, (uid_t)0, (gid_t)0);
  VAR_5 = VAR_2;
 }
 return (VAR_5);
}
