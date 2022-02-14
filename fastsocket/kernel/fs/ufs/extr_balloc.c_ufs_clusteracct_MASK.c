
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_sb_private_info {int s_contigsumsize; } ;
struct ufs_cg_private_info {int c_nclusterblks; scalar_t__ c_clustersumoff; int c_clusteroff; } ;
struct super_block {int dummy; } ;
typedef int __fs32 ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 int FUNC_0 (struct ufs_cg_private_info*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,int *,int) ;
 int FUNC_3 (struct super_block*,int *,int) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int ,int ,int,int) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct super_block * VAR_0,
 struct ufs_cg_private_info * VAR_1, unsigned VAR_2, int VAR_3)
{
 struct ufs_sb_private_info * VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_4 = FUNC_1(VAR_0)->s_uspi;
 if (VAR_4->s_contigsumsize <= 0)
  return;

 if (VAR_3 > 0)
  FUNC_8(FUNC_0(VAR_1), VAR_1->c_clusteroff, VAR_2);
 else
  FUNC_4(FUNC_0(VAR_1), VAR_1->c_clusteroff, VAR_2);




 VAR_6 = VAR_2 + 1;
 VAR_7 = VAR_6 + VAR_4->s_contigsumsize;
 if ( VAR_7 >= VAR_1->c_nclusterblks)
  VAR_7 = VAR_1->c_nclusterblks;
 VAR_5 = FUNC_6 (FUNC_0(VAR_1), VAR_1->c_clusteroff, VAR_7, VAR_6);
 if (VAR_5 > VAR_7)
  VAR_5 = VAR_7;
 VAR_8 = VAR_5 - VAR_6;




 VAR_6 = VAR_2 - 1;
 VAR_7 = VAR_6 - VAR_4->s_contigsumsize;
 if (VAR_7 < 0 )
  VAR_7 = -1;
 VAR_5 = FUNC_5 (FUNC_0(VAR_1), VAR_1->c_clusteroff, VAR_6, VAR_7);
 if ( VAR_5 < VAR_7)
  VAR_5 = VAR_7;
 VAR_9 = VAR_6 - VAR_5;





 VAR_5 = VAR_9 + VAR_8 + 1;
 if (VAR_5 > VAR_4->s_contigsumsize)
  VAR_5 = VAR_4->s_contigsumsize;
 FUNC_2(VAR_0, (__fs32*)FUNC_7(FUNC_0(VAR_1), VAR_1->c_clustersumoff + (VAR_5 << 2)), VAR_3);
 if (VAR_9 > 0)
  FUNC_3(VAR_0, (__fs32*)FUNC_7(FUNC_0(VAR_1), VAR_1->c_clustersumoff + (VAR_9 << 2)), VAR_3);
 if (VAR_8 > 0)
  FUNC_3(VAR_0, (__fs32*)FUNC_7(FUNC_0(VAR_1), VAR_1->c_clustersumoff + (VAR_8 << 2)), VAR_3);
}
