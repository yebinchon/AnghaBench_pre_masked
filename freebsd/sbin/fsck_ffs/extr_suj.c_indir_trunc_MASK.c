
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ufs_lbn_t ;
typedef scalar_t__ ufs2_daddr_t ;
typedef scalar_t__ ufs1_daddr_t ;
typedef int ino_t ;
struct TYPE_3__ {scalar_t__ fs_magic; int fs_frag; int fs_bsize; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char*,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(ino_t VAR_2, ufs_lbn_t VAR_3, ufs2_daddr_t VAR_4, ufs_lbn_t VAR_5)
{
 ufs2_daddr_t *VAR_6;
 ufs1_daddr_t *VAR_7;
 ufs_lbn_t VAR_8;
 ufs2_daddr_t VAR_9;
 ufs_lbn_t VAR_10;
 ufs_lbn_t VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 if (VAR_4 == 0)
  return;
 VAR_12 = 0;
 VAR_13 = FUNC_5(VAR_3);
 if (VAR_13 == -1)
  FUNC_4("Invalid level for lbn %jd\n", VAR_3);
 VAR_8 = 1;
 for (VAR_14 = VAR_13; VAR_14 > 0; VAR_14--)
  VAR_8 *= FUNC_0(VAR_1);
 VAR_7 = (void *)FUNC_3(VAR_4, VAR_1->fs_bsize);
 VAR_6 = (void *)VAR_7;
 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_1); VAR_14++) {
  if (VAR_1->fs_magic == VAR_0)
   VAR_9 = *VAR_7++;
  else
   VAR_9 = *VAR_6++;
  if (VAR_9 == 0)
   continue;
  if (VAR_13 != 0) {
   VAR_11 = (VAR_3 + 1) - (VAR_14 * VAR_8);





   VAR_10 = -(VAR_3 + VAR_13) + ((VAR_14+1) * VAR_8);
   if (VAR_10 <= VAR_5)
    continue;
   FUNC_6(VAR_2, VAR_11, VAR_9, VAR_5);

   VAR_11 = VAR_10 - VAR_8;
   if (VAR_11 < VAR_5)
    continue;
  } else {
   VAR_11 = -VAR_3 + VAR_14 * VAR_8;
   if (VAR_11 < VAR_5)
    continue;
  }
  VAR_12 = 1;
  FUNC_1(VAR_9, 0, VAR_1->fs_frag);
  if (VAR_1->fs_magic == VAR_0)
   *(VAR_7 - 1) = 0;
  else
   *(VAR_6 - 1) = 0;
 }
 if (VAR_12)
  FUNC_2(VAR_4);
}
