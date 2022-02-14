
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct m_ext2fs {int e2fs_bsize; TYPE_2__* e2fs_gd; TYPE_1__* e2fs; } ;
struct buf {int b_data; } ;
struct TYPE_6__ {int ext4bgd_flags; } ;
struct TYPE_5__ {scalar_t__ e2fs_bpg; scalar_t__ e2fs_first_dblock; int e2fs_ipg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct m_ext2fs*,int ) ;
 int FUNC_1 (struct m_ext2fs*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (struct m_ext2fs*,scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int,int ) ;
 int FUNC_7 (struct m_ext2fs*,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_10(struct m_ext2fs *VAR_3, int VAR_4, struct buf *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 uint64_t VAR_9, VAR_10;

 if (!(VAR_3->e2fs_gd[VAR_4].ext4bgd_flags & VAR_2))
  return (0);

 FUNC_8(VAR_5->b_data, 0, VAR_3->e2fs_bsize);

 VAR_7 = FUNC_7(VAR_3, VAR_4);
 if ((VAR_7 >> 3) >= VAR_3->e2fs_bsize)
  return (VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  FUNC_9(VAR_5->b_data, VAR_6);

 VAR_9 = (uint64_t)VAR_4 * VAR_3->e2fs->e2fs_bpg + VAR_3->e2fs->e2fs_first_dblock;


 VAR_10 = FUNC_2(&VAR_3->e2fs_gd[VAR_4]);
 if (!FUNC_0(VAR_3, VAR_1) ||
     FUNC_5(VAR_3, VAR_10, VAR_4))
  FUNC_9(VAR_5->b_data, VAR_10 - VAR_9);

 VAR_10 = FUNC_3(&VAR_3->e2fs_gd[VAR_4]);
 if (!FUNC_0(VAR_3, VAR_1) ||
     FUNC_5(VAR_3, VAR_10, VAR_4))
  FUNC_9(VAR_5->b_data, VAR_10 - VAR_9);

 VAR_10 = FUNC_4(&VAR_3->e2fs_gd[VAR_4]);
 VAR_8 = VAR_3->e2fs_bsize/FUNC_1(VAR_3);
 while( VAR_10 < FUNC_4(&VAR_3->e2fs_gd[VAR_4]) +
     VAR_3->e2fs->e2fs_ipg / VAR_8 ) {
  if (!FUNC_0(VAR_3, VAR_1) ||
      FUNC_5(VAR_3, VAR_10, VAR_4))
   FUNC_9(VAR_5->b_data, VAR_10 - VAR_9);
  VAR_10++;
 }






 FUNC_6(VAR_3->e2fs->e2fs_bpg, VAR_3->e2fs_bsize * 8,
     VAR_5->b_data);


 VAR_3->e2fs_gd[VAR_4].ext4bgd_flags &= ~VAR_2;

 return (0);
}
