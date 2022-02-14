
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct m_ext2fs {int e2fs_bcount; int e2fs_rbcount; int e2fs_fbcount; struct ext2fs* e2fs; } ;
struct ext2mount {int um_devvp; struct m_ext2fs* um_e2fs; } ;
struct ext2fs {int e2fs_bcount; int e2fs_rbcount; int e2fs_fbcount; int e4fs_bcount_hi; int e4fs_rbcount_hi; int e4fs_fbcount_hi; } ;
struct buf {int b_data; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct m_ext2fs*,int ) ;
 scalar_t__ FUNC_1 (struct m_ext2fs*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct m_ext2fs*) ;
 struct buf* FUNC_6 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct ext2mount *VAR_5, int VAR_6)
{
 struct m_ext2fs *VAR_7 = VAR_5->um_e2fs;
 struct ext2fs *VAR_8 = VAR_7->e2fs;
 struct buf *VAR_9;
 int VAR_10 = 0;

 VAR_8->e2fs_bcount = VAR_7->e2fs_bcount & 0xffffffff;
 VAR_8->e2fs_rbcount = VAR_7->e2fs_rbcount & 0xffffffff;
 VAR_8->e2fs_fbcount = VAR_7->e2fs_fbcount & 0xffffffff;
 if (FUNC_0(VAR_7, VAR_0)) {
  VAR_8->e4fs_bcount_hi = VAR_7->e2fs_bcount >> 32;
  VAR_8->e4fs_rbcount_hi = VAR_7->e2fs_rbcount >> 32;
  VAR_8->e4fs_fbcount_hi = VAR_7->e2fs_fbcount >> 32;
 }

 if (FUNC_1(VAR_7, VAR_1))
  FUNC_5(VAR_7);

 VAR_9 = FUNC_6(VAR_5->um_devvp, VAR_3, VAR_4, 0, 0, 0);
 FUNC_3((caddr_t)VAR_8, VAR_9->b_data, (u_int)sizeof(struct ext2fs));
 if (VAR_6 == VAR_2)
  VAR_10 = FUNC_4(VAR_9);
 else
  FUNC_2(VAR_9);






 return (VAR_10);
}
