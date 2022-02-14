
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint64_t ;
typedef int ufs_lbn_t ;
typedef scalar_t__ ufs2_daddr_t ;
typedef int ufs1_daddr_t ;
typedef int (* ino_visitor ) (scalar_t__,int,scalar_t__,scalar_t__) ;
typedef scalar_t__ ino_t ;
struct TYPE_3__ {scalar_t__ fs_magic; scalar_t__ fs_frag; int fs_bsize; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,scalar_t__,int ,int,int) ;

__attribute__((used)) static void
FUNC_6(ino_t VAR_5, ufs_lbn_t VAR_6, ufs2_daddr_t VAR_7, uint64_t *VAR_8,
    ino_visitor VAR_9, int VAR_10)
{
 ufs2_daddr_t *VAR_11;
 ufs1_daddr_t *VAR_12;
 ufs_lbn_t VAR_13;
 ufs2_daddr_t VAR_14;
 ufs_lbn_t VAR_15;
 int VAR_16;
 int VAR_17;







 if (VAR_7 == 0)
  return;
 VAR_16 = FUNC_4(VAR_6);
 if (VAR_16 == -1)
  FUNC_3("Invalid level for lbn %jd\n", VAR_6);
 if ((VAR_10 & VAR_2) == 0 && FUNC_1(VAR_7, VAR_5, VAR_6) == 0) {
  if (VAR_3)
   FUNC_5("blk %jd ino %ju lbn %jd(%d) is not indir.\n",
       VAR_7, (uintmax_t)VAR_5, VAR_6, VAR_16);
  goto out;
 }
 VAR_13 = 1;
 for (VAR_17 = VAR_16; VAR_17 > 0; VAR_17--)
  VAR_13 *= FUNC_0(VAR_4);
 VAR_12 = (void *)FUNC_2(VAR_7, VAR_4->fs_bsize);
 VAR_11 = (void *)VAR_12;
 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_4); VAR_17++) {
  if (VAR_4->fs_magic == VAR_0)
   VAR_14 = *VAR_12++;
  else
   VAR_14 = *VAR_11++;
  if (VAR_14 == 0)
   continue;
  if (VAR_16 == 0) {
   VAR_15 = -VAR_6 + VAR_17 * VAR_13;
   (*VAR_8) += VAR_4->fs_frag;
   VAR_9(VAR_5, VAR_15, VAR_14, VAR_4->fs_frag);
  } else {
   VAR_15 = (VAR_6 + 1) - (VAR_17 * VAR_13);
   FUNC_6(VAR_5, VAR_15, VAR_14, VAR_8, VAR_9, VAR_10);
  }
 }
out:
 if (VAR_10 & VAR_1) {
  (*VAR_8) += VAR_4->fs_frag;
  VAR_9(VAR_5, VAR_6, VAR_7, VAR_4->fs_frag);
 }
}
