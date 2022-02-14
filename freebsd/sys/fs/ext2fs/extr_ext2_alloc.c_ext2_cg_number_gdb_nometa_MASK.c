
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct m_ext2fs {int e2fs_gcount; TYPE_1__* e2fs; } ;
struct TYPE_2__ {int e3fs_first_meta_bg; } ;


 int VAR_0 ;
 int FUNC_0 (struct m_ext2fs*) ;
 scalar_t__ FUNC_1 (struct m_ext2fs*,int ) ;
 int FUNC_2 (struct m_ext2fs*,int) ;

__attribute__((used)) static uint64_t
FUNC_3(struct m_ext2fs *VAR_1, int VAR_2)
{

 if (!FUNC_2(VAR_1, VAR_2))
  return (0);

 if (FUNC_1(VAR_1, VAR_0))
  return (VAR_1->e2fs->e3fs_first_meta_bg);

 return ((VAR_1->e2fs_gcount + FUNC_0(VAR_1) - 1) /
     FUNC_0(VAR_1));
}
