
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_ext2fs {int e2fs_bsize; TYPE_1__* e2fs; } ;
struct ext2_gd {int dummy; } ;
typedef int e4fs_daddr_t ;
struct TYPE_2__ {int e3fs_first_meta_bg; int e2fs_first_dblock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct m_ext2fs*) ;
 scalar_t__ FUNC_1 (struct m_ext2fs*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct m_ext2fs*,int) ;

__attribute__((used)) static e4fs_daddr_t
FUNC_3(struct m_ext2fs *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9 = 0;






 VAR_8 = VAR_4->e2fs_bsize > VAR_3 ? 0 : 1;

 if (!FUNC_1(VAR_4, VAR_2) ||
     VAR_5 < VAR_4->e2fs->e3fs_first_meta_bg)
  return (VAR_8 + VAR_5 + 1);

 if (FUNC_1(VAR_4, VAR_1))
  VAR_7 = VAR_4->e2fs_bsize / sizeof(struct ext2_gd);
 else
  VAR_7 = VAR_4->e2fs_bsize / VAR_0;

 VAR_6 = VAR_7 * VAR_5;

 if (FUNC_2(VAR_4, VAR_6))
  VAR_9 = 1;

 return (VAR_9 + VAR_6 * (e4fs_daddr_t)FUNC_0(VAR_4) +
     VAR_4->e2fs->e2fs_first_dblock);
}
