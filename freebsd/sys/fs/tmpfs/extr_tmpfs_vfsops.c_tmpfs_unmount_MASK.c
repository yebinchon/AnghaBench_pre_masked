
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpfs_node {scalar_t__ tn_type; } ;
struct tmpfs_mount {int tm_nodes_used; } ;
struct mount {scalar_t__ mnt_nvnodelistsize; int mnt_flag; int * mnt_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tmpfs_node* FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int VAR_3 ;
 int FUNC_3 (struct tmpfs_mount*) ;
 int FUNC_4 (struct tmpfs_node*) ;
 int FUNC_5 (struct tmpfs_node*) ;
 scalar_t__ VAR_4 ;
 struct tmpfs_mount* FUNC_6 (struct mount*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct tmpfs_mount*,struct tmpfs_node*) ;
 scalar_t__ FUNC_8 (struct tmpfs_mount*,struct tmpfs_node*,int) ;
 int FUNC_9 (struct tmpfs_mount*) ;
 int FUNC_10 (struct mount*,int ,int,int ) ;
 int FUNC_11 (struct mount*,int ) ;
 int FUNC_12 (struct mount*) ;

__attribute__((used)) static int
FUNC_13(struct mount *VAR_7, int VAR_8)
{
 struct tmpfs_mount *VAR_9;
 struct tmpfs_node *VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = (VAR_8 & VAR_2) != 0 ? VAR_1 : 0;
 VAR_9 = FUNC_6(VAR_7);


 VAR_11 = FUNC_12(VAR_7);
 if (VAR_11 != 0)
  return (VAR_11);





 for (;;) {
  VAR_11 = FUNC_10(VAR_7, 0, VAR_12, VAR_6);
  if (VAR_11 != 0) {
   FUNC_11(VAR_7, VAR_5);
   return (VAR_11);
  }
  FUNC_1(VAR_7);
  if (VAR_7->mnt_nvnodelistsize == 0) {
   FUNC_2(VAR_7);
   break;
  }
  FUNC_2(VAR_7);
  if ((VAR_8 & VAR_2) == 0) {
   FUNC_11(VAR_7, VAR_5);
   return (VAR_0);
  }
 }

 FUNC_3(VAR_9);
 while ((VAR_10 = FUNC_0(&VAR_9->tm_nodes_used)) != ((void*)0)) {
  FUNC_4(VAR_10);
  if (VAR_10->tn_type == VAR_4)
   FUNC_7(VAR_9, VAR_10);
  if (FUNC_8(VAR_9, VAR_10, 1))
   FUNC_3(VAR_9);
  else
   FUNC_5(VAR_10);
 }

 VAR_7->mnt_data = ((void*)0);
 FUNC_9(VAR_9);
 FUNC_11(VAR_7, VAR_5);

 FUNC_1(VAR_7);
 VAR_7->mnt_flag &= ~VAR_3;
 FUNC_2(VAR_7);

 return (0);
}
