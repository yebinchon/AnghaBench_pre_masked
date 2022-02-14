
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_int ;
struct vnode {int * v_data; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vnode*,int ,int,int ,struct vnode**,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct vnode *VAR_2, int VAR_3, uint64_t VAR_4,
   uint64_t VAR_5, struct vnode **VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_2->v_data != ((void*)0), ("sfs_vnode_insert with NULL v_data"));
 VAR_7 = FUNC_1(VAR_2, (u_int)VAR_5, VAR_3, VAR_0, VAR_6,
     VAR_1, VAR_2->v_data);
 return (VAR_7);
}
