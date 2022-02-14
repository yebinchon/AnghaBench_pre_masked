
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_sb_private_info {scalar_t__ fs_magic; } ;
struct TYPE_2__ {int * i_data; int * u2_i_data; } ;
struct ufs_inode_info {TYPE_1__ i_u1; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline void *FUNC_1(struct ufs_sb_private_info *VAR_2,
         struct ufs_inode_info *VAR_3,
         unsigned VAR_4)
{
 FUNC_0(VAR_4 > VAR_1);
 return VAR_2->fs_magic == VAR_0 ?
  (void *)&VAR_3->i_u1.u2_i_data[VAR_4] :
  (void *)&VAR_3->i_u1.i_data[VAR_4];
}
