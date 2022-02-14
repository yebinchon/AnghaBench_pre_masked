
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int v_mount; struct mount* v_mountedhere; TYPE_2__* v_data; } ;
typedef TYPE_1__ vnode_t ;
struct vop_vptocnp_args {size_t* a_buflen; scalar_t__ a_buf; TYPE_1__** a_vpp; TYPE_1__* a_vp; } ;
struct mount {int dummy; } ;
struct TYPE_10__ {int sn_name; } ;
typedef TYPE_2__ sfs_node_t ;
typedef enum vgetstate { ____Placeholder_vgetstate } vgetstate ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,scalar_t__,size_t) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (struct mount*,int ) ;
 int FUNC_7 (struct mount*) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,int *,int ,TYPE_1__**) ;

__attribute__((used)) static int
FUNC_12(struct vop_vptocnp_args *VAR_4)
{
 struct mount *VAR_5;
 vnode_t *VAR_6;
 vnode_t *VAR_7;
 sfs_node_t *VAR_8;
 size_t VAR_9;
 enum vgetstate VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_7 = VAR_4->a_vp;
 VAR_8 = VAR_7->v_data;
 VAR_9 = FUNC_5(VAR_8->sn_name);
 if (*VAR_4->a_buflen < VAR_9)
  return (FUNC_1(VAR_1));







 VAR_5 = VAR_7->v_mountedhere;
 if (VAR_5 == ((void*)0))
  return (FUNC_1(VAR_0));
 VAR_12 = FUNC_6(VAR_5, 0);
 FUNC_0(VAR_12 == 0, ("vfs_busy(mp, 0) failed with %d", VAR_12));







 VAR_11 = FUNC_2(VAR_7);
 VAR_10 = FUNC_9(VAR_7);
 FUNC_10(VAR_7);


 VAR_12 = FUNC_11(VAR_7->v_mount, ((void*)0), VAR_3, &VAR_6);
 if (VAR_12 == 0) {
  FUNC_3(VAR_6, 0);
  *VAR_4->a_vpp = VAR_6;
  *VAR_4->a_buflen -= VAR_9;
  FUNC_4(VAR_8->sn_name, VAR_4->a_buf + *VAR_4->a_buflen, VAR_9);
 }
 FUNC_7(VAR_5);
 FUNC_8(VAR_7, VAR_11 | VAR_2, VAR_10);
 return (VAR_12);
}
