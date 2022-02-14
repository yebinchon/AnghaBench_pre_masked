
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct vop_vptocnp_args {int* a_buflen; int a_buf; int ** a_vpp; int a_vp; } ;
typedef int dotzfs_name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char const*,int,int) ;
 int FUNC_3 (int ,int ,int *,int ,int **) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct vop_vptocnp_args *VAR_3)
{
 static const char VAR_4[4] = ".zfs";
 vnode_t *VAR_5;
 int VAR_6;

 if (*VAR_3->a_buflen < sizeof (VAR_4))
  return (FUNC_0(VAR_0));

 VAR_6 = FUNC_3(VAR_3->a_vp, VAR_2, ((void*)0),
     VAR_1, &VAR_5);
 if (VAR_6 != 0)
  return (FUNC_0(VAR_6));

 FUNC_1(VAR_5, 0);
 *VAR_3->a_vpp = VAR_5;
 *VAR_3->a_buflen -= sizeof (VAR_4);
 FUNC_2(VAR_4, VAR_3->a_buf + *VAR_3->a_buflen, sizeof (VAR_4));
 return (0);
}
