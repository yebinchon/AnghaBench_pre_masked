
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_ext2fs {int e2fs_gdbcount; int e2fs_bsize; int e2fs_gcount; int * e2fs_gd; } ;
struct ext2mount {int um_devvp; struct m_ext2fs* um_e2fs; } ;
struct ext2_gd {int dummy; } ;
struct buf {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct m_ext2fs*,int ) ;
 scalar_t__ FUNC_1 (struct m_ext2fs*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct m_ext2fs*,int) ;
 int FUNC_5 (struct m_ext2fs*) ;
 int FUNC_6 (struct ext2mount*,int) ;
 int FUNC_7 (struct m_ext2fs*,int ) ;
 struct buf* FUNC_8 (int ,int ,int,int ,int ,int ) ;
 int FUNC_9 (scalar_t__,int *,int) ;

int
FUNC_10(struct ext2mount *VAR_5, int VAR_6)
{
 struct m_ext2fs *VAR_7 = VAR_5->um_e2fs;
 struct buf *VAR_8;
 int VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;

 VAR_13 = FUNC_6(VAR_5, VAR_6);


 if (FUNC_1(VAR_7, VAR_2) ||
     FUNC_1(VAR_7, VAR_3))
  FUNC_5(VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_7->e2fs_gdbcount; VAR_9++) {
  VAR_8 = FUNC_8(VAR_5->um_devvp, FUNC_7(VAR_7,
      FUNC_4(VAR_7, VAR_9)),
      VAR_7->e2fs_bsize, 0, 0, 0);
  if (FUNC_0(VAR_7, VAR_1)) {
   FUNC_9(VAR_8->b_data, &VAR_7->e2fs_gd[
       VAR_9 * VAR_7->e2fs_bsize / sizeof(struct ext2_gd)],
       VAR_7->e2fs_bsize);
  } else {
   for (VAR_10 = 0; VAR_10 < VAR_7->e2fs_bsize / VAR_0 &&
       VAR_11 < VAR_7->e2fs_gcount; VAR_10++, VAR_11++)
    FUNC_9(VAR_8->b_data + VAR_10 * VAR_0,
        &VAR_7->e2fs_gd[VAR_11], VAR_0);
  }
  if (VAR_6 == VAR_4)
   VAR_12 = FUNC_3(VAR_8);
  else
   FUNC_2(VAR_8);
 }

 if (!VAR_13 && VAR_12)
  VAR_13 = VAR_12;
 return (VAR_13);
}
