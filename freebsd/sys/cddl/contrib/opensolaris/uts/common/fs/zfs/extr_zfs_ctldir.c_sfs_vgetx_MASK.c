
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vop_vector {int dummy; } ;
struct vnode {int * v_data; int v_vnlock; } ;
struct mount {int dummy; } ;
typedef int (* sfs_vnode_setup_fn ) (struct vnode*,void*) ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,struct mount*,struct vop_vector*,struct vnode**) ;
 int FUNC_2 (struct vnode*,struct mount*) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct mount*,int,int ,int ,struct vnode**) ;
 int FUNC_5 (struct vnode*,int,int ,int ,struct vnode**) ;

__attribute__((used)) static int
FUNC_6(struct mount *VAR_1, int VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    const char *VAR_5, struct vop_vector *VAR_6,
    sfs_vnode_setup_fn VAR_7, void *VAR_8,
    struct vnode **VAR_9)
{
 struct vnode *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_9);
 if (VAR_11 != 0 || *VAR_9 != ((void*)0)) {
  FUNC_0(VAR_11 == 0, (*VAR_9)->v_data != ((void*)0),
      "sfs vnode with no data");
  return (VAR_11);
 }


 VAR_11 = FUNC_1(VAR_5, VAR_1, VAR_6, &VAR_10);
 if (VAR_11 != 0) {
  *VAR_9 = ((void*)0);
  return (VAR_11);
 }




 FUNC_3(VAR_10->v_vnlock, VAR_0, ((void*)0));
 VAR_11 = FUNC_2(VAR_10, VAR_1);
 if (VAR_11 != 0) {
  *VAR_9 = ((void*)0);
  return (VAR_11);
 }

 VAR_7(VAR_10, VAR_8);

 VAR_11 = FUNC_5(VAR_10, VAR_2, VAR_3, VAR_4, VAR_9);
 if (VAR_11 != 0 || *VAR_9 != ((void*)0)) {
  FUNC_0(VAR_11 == 0, (*VAR_9)->v_data != ((void*)0),
      "sfs vnode with no data");
  return (VAR_11);
 }

 *VAR_9 = VAR_10;
 return (0);
}
