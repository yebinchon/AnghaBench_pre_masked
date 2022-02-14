
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ino_blk {scalar_t__ ib_dirty; int ib_blk; int ib_buf; } ;
struct TYPE_3__ {int fs_bsize; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ino_blk *VAR_2)
{

 if (VAR_2->ib_dirty == 0)
  return;
 if (FUNC_0(&VAR_0, FUNC_2(VAR_1, VAR_2->ib_blk), VAR_2->ib_buf,
     VAR_1->fs_bsize) == -1)
  FUNC_1("Failed to write inode block %jd\n", VAR_2->ib_blk);
}
