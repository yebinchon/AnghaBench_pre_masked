
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_ext2fs {TYPE_1__* e2fs; } ;
struct TYPE_2__ {int e3fs_first_meta_bg; scalar_t__ e2fs_reserved_ngdb; } ;


 int VAR_0 ;
 int FUNC_0 (struct m_ext2fs*) ;
 int FUNC_1 (struct m_ext2fs*,int ) ;
 int FUNC_2 (struct m_ext2fs*,int) ;
 scalar_t__ FUNC_3 (struct m_ext2fs*,int) ;

__attribute__((used)) static int
FUNC_4(struct m_ext2fs *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2);

 if (!FUNC_1(VAR_1, VAR_0) ||
     VAR_2 < VAR_1->e2fs->e3fs_first_meta_bg * FUNC_0(VAR_1)) {
  if (VAR_3) {
   VAR_3 += FUNC_3(VAR_1, VAR_2);
   VAR_3 += VAR_1->e2fs->e2fs_reserved_ngdb;
  }
 } else {
  VAR_3 += FUNC_3(VAR_1, VAR_2);
 }

 return (VAR_3);
}
