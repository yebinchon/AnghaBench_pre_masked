
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_ext2fs {int e2fs_bsize; TYPE_1__* e2fs; } ;
typedef int e4fs_daddr_t ;
struct TYPE_2__ {int e2fs_first_dblock; } ;



__attribute__((used)) static int
FUNC_0(struct m_ext2fs *VAR_0, e4fs_daddr_t VAR_1)
{

 return ((VAR_1 - VAR_0->e2fs->e2fs_first_dblock) / VAR_0->e2fs_bsize);
}
