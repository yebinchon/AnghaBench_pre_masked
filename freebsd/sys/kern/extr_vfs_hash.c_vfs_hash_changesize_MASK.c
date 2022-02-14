
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct vnode {int v_hash; int v_mount; } ;
struct vfs_hash_head {int dummy; } ;


 struct vnode* FUNC_0 (struct vfs_hash_head*) ;
 int FUNC_1 (int ,struct vnode*,int ) ;
 int FUNC_2 (struct vnode*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct vfs_hash_head*,int ) ;
 struct vfs_hash_head* FUNC_4 (int,int ,scalar_t__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct vfs_hash_head* VAR_4 ;

void
FUNC_8(int VAR_5)
{
 struct vfs_hash_head *VAR_6, *VAR_7;
 u_long VAR_8, VAR_9;
 struct vnode *VAR_10;
 int VAR_11;

 VAR_6 = FUNC_4(VAR_5, VAR_0,
  &VAR_8);

 if (VAR_3 == VAR_8) {
  FUNC_3(VAR_6, VAR_0);
  return;
 }





 FUNC_5(&VAR_2);
 VAR_7 = VAR_4;
 VAR_9 = VAR_3;
 VAR_4 = VAR_6;
 VAR_3 = VAR_8;
 for (VAR_11 = 0; VAR_11 <= VAR_9; VAR_11++) {
  while ((VAR_10 = FUNC_0(&VAR_7[VAR_11])) != ((void*)0)) {
   FUNC_2(VAR_10, VAR_1);
   FUNC_1(
       FUNC_7(VAR_10->v_mount, VAR_10->v_hash),
       VAR_10, VAR_1);
  }
 }
 FUNC_6(&VAR_2);
 FUNC_3(VAR_7, VAR_0);
}
