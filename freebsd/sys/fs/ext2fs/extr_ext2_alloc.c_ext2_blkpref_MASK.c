
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_ext2fs {TYPE_1__* e2fs; } ;
struct inode {scalar_t__ i_next_alloc_block; scalar_t__ i_next_alloc_goal; int i_block_group; int i_ump; struct m_ext2fs* i_e2fs; } ;
typedef scalar_t__ e4fs_daddr_t ;
typedef scalar_t__ e2fs_lbn_t ;
typedef scalar_t__ e2fs_daddr_t ;
struct TYPE_2__ {scalar_t__ e2fs_first_dblock; } ;


 int FUNC_0 (struct m_ext2fs*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

e4fs_daddr_t
FUNC_3(struct inode *VAR_1, e2fs_lbn_t VAR_2, int VAR_3, e2fs_daddr_t *VAR_4,
    e2fs_daddr_t VAR_5)
{
 struct m_ext2fs *VAR_6;
 int VAR_7;

 VAR_6 = VAR_1->i_e2fs;

 FUNC_2(FUNC_1(VAR_1->i_ump), VAR_0);





 if (VAR_1->i_next_alloc_block == VAR_2 && VAR_1->i_next_alloc_goal != 0)
  return VAR_1->i_next_alloc_goal;





 if (VAR_4)
  for (VAR_7 = VAR_3 - 1; VAR_7 >= 0; VAR_7--)
   if (VAR_4[VAR_7])
    return VAR_4[VAR_7];





 return (VAR_5 ? VAR_5 :
     (e2fs_daddr_t)(VAR_1->i_block_group *
     FUNC_0(VAR_6)) + VAR_6->e2fs->e2fs_first_dblock);
}
