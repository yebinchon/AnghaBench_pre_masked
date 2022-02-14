
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsconf {int dummy; } ;
struct mqfs_info {int mi_lock; int * mi_root; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 struct mqfs_info VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mqfs_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_6(struct vfsconf *VAR_10)
{
 struct mqfs_info *VAR_11;

 if (!VAR_9)
  return (VAR_0);
 FUNC_3(VAR_3);
 FUNC_0(VAR_8, VAR_1);
 VAR_11 = &VAR_2;
 FUNC_1(VAR_11->mi_root);
 VAR_11->mi_root = ((void*)0);
 FUNC_2(VAR_11);
 FUNC_4(&VAR_11->mi_lock);
 FUNC_5(VAR_4);
 FUNC_5(VAR_6);
 FUNC_5(VAR_7);
 FUNC_5(VAR_5);
 return (0);
}
