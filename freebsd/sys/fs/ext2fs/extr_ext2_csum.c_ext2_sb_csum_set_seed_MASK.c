
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_ext2fs {scalar_t__ e2fs_csum_seed; TYPE_1__* e2fs; } ;
struct TYPE_2__ {int e2fs_uuid; scalar_t__ e4fs_chksum_seed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct m_ext2fs*,int ) ;
 scalar_t__ FUNC_1 (struct m_ext2fs*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;

void
FUNC_3(struct m_ext2fs *VAR_2)
{

 if (FUNC_0(VAR_2, VAR_0))
  VAR_2->e2fs_csum_seed = VAR_2->e2fs->e4fs_chksum_seed;
 else if (FUNC_1(VAR_2, VAR_1)) {
  VAR_2->e2fs_csum_seed = FUNC_2(~0, VAR_2->e2fs->e2fs_uuid,
      sizeof(VAR_2->e2fs->e2fs_uuid));
 }
 else
  VAR_2->e2fs_csum_seed = 0;
}
