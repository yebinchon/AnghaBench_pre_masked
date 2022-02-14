
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct m_ext2fs {int* e2fs_maxcluster; int e2fs_contigsumsize; int e2fs_fmod; TYPE_2__* e2fs; int * e2fs_gd; int e2fs_fbcount; scalar_t__ e2fs_fpb; TYPE_1__* e2fs_clustersum; scalar_t__ e2fs_bsize; } ;
struct inode {int i_devvp; struct ext2mount* i_ump; struct m_ext2fs* i_e2fs; } ;
struct ext2mount {int dummy; } ;
struct buf {scalar_t__ b_data; } ;
typedef int int32_t ;
typedef int daddr_t ;
struct TYPE_4__ {int e2fs_fpg; int e2fs_first_dblock; } ;
struct TYPE_3__ {int * cs_sum; } ;


 int FUNC_0 (struct ext2mount*) ;
 int FUNC_1 (struct ext2mount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (int ,int ,int,int ,struct buf**) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct m_ext2fs*,int) ;
 int FUNC_6 (struct m_ext2fs*,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (struct m_ext2fs*,char*,int,int,int) ;
 int FUNC_11 (struct m_ext2fs*,int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,int) ;

__attribute__((used)) static daddr_t
FUNC_15(struct inode *VAR_2, int VAR_3, daddr_t VAR_4, int VAR_5)
{
 struct m_ext2fs *VAR_6;
 struct ext2mount *VAR_7;
 struct buf *VAR_8;
 char *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 int32_t *VAR_16;
 daddr_t VAR_17;

 VAR_6 = VAR_2->i_e2fs;
 VAR_7 = VAR_2->i_ump;

 if (VAR_6->e2fs_maxcluster[VAR_3] < VAR_5)
  return (0);

 FUNC_1(VAR_7);
 VAR_11 = FUNC_3(VAR_2->i_devvp,
     FUNC_11(VAR_6, FUNC_7(&VAR_6->e2fs_gd[VAR_3])),
     (int)VAR_6->e2fs_bsize, VAR_1, &VAR_8);
 if (VAR_11)
  goto fail_lock;

 VAR_9 = (char *)VAR_8->b_data;
 FUNC_0(VAR_7);




 VAR_16 = &VAR_6->e2fs_clustersum[VAR_3].cs_sum[VAR_5];
 for (VAR_13 = VAR_5; VAR_13 <= VAR_6->e2fs_contigsumsize; VAR_13++)
  if (*VAR_16++ > 0)
   break;
 if (VAR_13 > VAR_6->e2fs_contigsumsize) {






  VAR_16 = &VAR_6->e2fs_clustersum[VAR_3].cs_sum[VAR_5 - 1];
  for (VAR_13 = VAR_5 - 1; VAR_13 > 0; VAR_13--)
   if (*VAR_16-- > 0)
    break;
  VAR_6->e2fs_maxcluster[VAR_3] = VAR_13;
  goto fail;
 }
 FUNC_1(VAR_7);


 if (FUNC_5(VAR_6, VAR_4) != VAR_3)
  VAR_4 = 0;
 if (VAR_4 != 0)
  VAR_4 = FUNC_6(VAR_6, VAR_4);
 VAR_14 = VAR_4 / VAR_0;
 VAR_10 = 1 << (VAR_4 % VAR_0);
 for (VAR_15 = 0, VAR_12 = VAR_4; VAR_12 < VAR_6->e2fs->e2fs_fpg; VAR_12++) {
  if ((VAR_9[VAR_14] & VAR_10) != 0)
   VAR_15 = 0;
  else {
   VAR_15++;
   if (VAR_15 == VAR_5)
    break;
  }
  if ((VAR_12 & (VAR_0 - 1)) != (VAR_0 - 1))
   VAR_10 <<= 1;
  else {
   VAR_14++;
   VAR_10 = 1;
  }
 }

 if (VAR_12 >= VAR_6->e2fs->e2fs_fpg)
  goto fail_lock;


 for (VAR_13 = 1; VAR_13 < VAR_5; VAR_13++)
  if (!FUNC_12(VAR_9, VAR_12 - VAR_15 + VAR_13))
   FUNC_13("ext2_clusteralloc: map mismatch");

 VAR_17 = VAR_12 - VAR_15 + 1;
 if (VAR_17 >= VAR_6->e2fs->e2fs_fpg)
  FUNC_13("ext2_clusteralloc: allocated out of group");

 FUNC_0(VAR_7);
 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13 += VAR_6->e2fs_fpb) {
  FUNC_14(VAR_9, VAR_17 + VAR_13);
  FUNC_10(VAR_6, VAR_9, VAR_3, VAR_17 + VAR_13, -1);
  VAR_6->e2fs_fbcount--;
  FUNC_9(&VAR_6->e2fs_gd[VAR_3],
      FUNC_8(&VAR_6->e2fs_gd[VAR_3]) - 1);
 }
 VAR_6->e2fs_fmod = 1;
 FUNC_1(VAR_7);

 FUNC_2(VAR_8);
 return (VAR_3 * VAR_6->e2fs->e2fs_fpg + VAR_6->e2fs->e2fs_first_dblock + VAR_17);

fail_lock:
 FUNC_0(VAR_7);
fail:
 FUNC_4(VAR_8);
 return (0);
}
