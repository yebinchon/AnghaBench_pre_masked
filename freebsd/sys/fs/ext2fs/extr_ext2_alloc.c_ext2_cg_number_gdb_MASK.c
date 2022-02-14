
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct m_ext2fs {TYPE_1__* e2fs; } ;
struct TYPE_2__ {unsigned long e3fs_first_meta_bg; } ;


 int VAR_0 ;
 int FUNC_0 (struct m_ext2fs*) ;
 int FUNC_1 (struct m_ext2fs*,int ) ;
 int FUNC_2 (struct m_ext2fs*,int) ;
 int FUNC_3 (struct m_ext2fs*,int) ;

uint64_t
FUNC_4(struct m_ext2fs *VAR_1, int VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_3 = VAR_1->e2fs->e3fs_first_meta_bg;
 VAR_4 = VAR_2 / FUNC_0(VAR_1);

 if (!FUNC_1(VAR_1, VAR_0) ||
     VAR_4 < VAR_3)
  return (FUNC_3(VAR_1, VAR_2));

 return FUNC_2(VAR_1, VAR_2);
}
