
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_ext2fs {unsigned int e2fs_gcount; TYPE_1__* e2fs_gd; } ;
struct TYPE_2__ {int ext4bgd_csum; } ;


 int FUNC_0 (struct m_ext2fs*,unsigned int,TYPE_1__*) ;

void
FUNC_1(struct m_ext2fs *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->e2fs_gcount; VAR_1++)
      VAR_0->e2fs_gd[VAR_1].ext4bgd_csum =
   FUNC_0(VAR_0, VAR_1, &VAR_0->e2fs_gd[VAR_1]);
}
