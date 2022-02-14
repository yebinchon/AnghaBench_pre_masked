
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct m_ext2fs {int e2fs_fmod; TYPE_1__* e2fs; int * e2fs_gd; int e2fs_fbcount; int e2fs_fsmnt; scalar_t__ e2fs_bsize; } ;
struct inode {int i_devvp; struct ext2mount* i_ump; struct m_ext2fs* i_e2fs; } ;
struct ext2mount {int dummy; } ;
struct buf {scalar_t__ b_data; } ;
typedef int intmax_t ;
typedef int daddr_t ;
struct TYPE_2__ {int e2fs_fpg; int e2fs_first_dblock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct m_ext2fs*,int ) ;
 int FUNC_1 (struct ext2mount*) ;
 int FUNC_2 (struct ext2mount*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (int ,int ,int,int ,struct buf**) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct m_ext2fs*,int) ;
 int FUNC_7 (struct m_ext2fs*,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (struct m_ext2fs*,struct buf*,int) ;
 int FUNC_12 (struct m_ext2fs*,int,struct buf*) ;
 int FUNC_13 (struct m_ext2fs*,char*,int,int,int) ;
 int FUNC_14 (struct m_ext2fs*,int,struct buf*) ;
 int FUNC_15 (struct m_ext2fs*,int,struct buf*) ;
 int FUNC_16 (struct m_ext2fs*,char*,int) ;
 int FUNC_17 (char) ;
 int FUNC_18 (char) ;
 int FUNC_19 (struct m_ext2fs*,int ) ;
 int FUNC_20 (int,int) ;
 scalar_t__ FUNC_21 (char*,int) ;
 scalar_t__ FUNC_22 (char*,int) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (char*,int,int ,int ) ;
 int FUNC_25 (char*,int) ;

__attribute__((used)) static daddr_t
FUNC_26(struct inode *VAR_4, int VAR_5, daddr_t VAR_6, int VAR_7)
{
 struct m_ext2fs *VAR_8;
 struct buf *VAR_9;
 struct ext2mount *VAR_10;
 daddr_t VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 char *VAR_19;

 VAR_8 = VAR_4->i_e2fs;
 VAR_10 = VAR_4->i_ump;
 if (FUNC_9(&VAR_8->e2fs_gd[VAR_5]) == 0)
  return (0);

 FUNC_2(VAR_10);
 VAR_17 = FUNC_4(VAR_4->i_devvp, FUNC_19(VAR_8,
     FUNC_8(&VAR_8->e2fs_gd[VAR_5])),
     (int)VAR_8->e2fs_bsize, VAR_3, &VAR_9);
 if (VAR_17)
  goto fail;

 if (FUNC_0(VAR_8, VAR_0) ||
     FUNC_0(VAR_8, VAR_1)) {
  VAR_17 = FUNC_12(VAR_8, VAR_5, VAR_9);
  if (VAR_17)
   goto fail;

  FUNC_14(VAR_8, VAR_5, VAR_9);
 }
 VAR_17 = FUNC_15(VAR_8, VAR_5, VAR_9);
 if (VAR_17)
  goto fail;

 VAR_17 = FUNC_11(VAR_8,VAR_9, VAR_5);
 if (VAR_17)
  goto fail;





 if (FUNC_9(&VAR_8->e2fs_gd[VAR_5]) == 0)
  goto fail;

 VAR_19 = (char *)VAR_9->b_data;

 if (FUNC_6(VAR_8, VAR_6) != VAR_5)
  VAR_6 = 0;
 if (VAR_6 != 0) {
  VAR_6 = FUNC_7(VAR_8, VAR_6);



  if (FUNC_21(VAR_19, VAR_6)) {
   VAR_11 = VAR_6;
   goto gotit;
  }
 }






 if (VAR_6)
  VAR_18 = FUNC_7(VAR_8, VAR_6) / VAR_2;
 else
  VAR_18 = 0;
 VAR_16 = FUNC_20(VAR_8->e2fs->e2fs_fpg, VAR_2) - VAR_18;
retry:
 VAR_13 = 0;
 VAR_12 = 0;
 for (VAR_15 = VAR_18; VAR_15 < VAR_16; VAR_15++) {
  if (VAR_19[VAR_15] == (char)0xff) {
   VAR_13 = 0;
   continue;
  }


  if (VAR_13 == 0) {
   VAR_14 = FUNC_18(VAR_19[VAR_15]);
   VAR_13 = VAR_2 - VAR_14;
   VAR_12 = VAR_15 * VAR_2 + VAR_14;
  } else if (VAR_19[VAR_15] == 0) {

   VAR_13 += VAR_2;
  } else {




   VAR_14 = FUNC_17(VAR_19[VAR_15]) - 1;
   VAR_13 += VAR_14;
   if (VAR_13 >= 8) {
    VAR_11 = VAR_12;
    goto gotit;
   }


   VAR_14 = FUNC_18(VAR_19[VAR_15]);
   VAR_13 = VAR_2 - VAR_14;
   VAR_12 = VAR_15 * VAR_2 + VAR_14;
  }


  if (VAR_13 >= 8) {
   VAR_11 = VAR_12;
   goto gotit;
  }
 }
 if (VAR_18 != 0) {
  VAR_16 = VAR_18;
  VAR_18 = 0;
  goto retry;
 }
 VAR_11 = FUNC_16(VAR_8, VAR_19, VAR_6);
 if (VAR_11 < 0)
  goto fail;

gotit:







 FUNC_25(VAR_19, VAR_11);
 FUNC_1(VAR_10);
 FUNC_13(VAR_8, VAR_19, VAR_5, VAR_11, -1);
 VAR_8->e2fs_fbcount--;
 FUNC_10(&VAR_8->e2fs_gd[VAR_5],
     FUNC_9(&VAR_8->e2fs_gd[VAR_5]) - 1);
 VAR_8->e2fs_fmod = 1;
 FUNC_2(VAR_10);
 FUNC_14(VAR_8, VAR_5, VAR_9);
 FUNC_3(VAR_9);
 return (((uint64_t)VAR_5) * VAR_8->e2fs->e2fs_fpg + VAR_8->e2fs->e2fs_first_dblock + VAR_11);

fail:
 FUNC_5(VAR_9);
 FUNC_1(VAR_10);
 return (0);
}
