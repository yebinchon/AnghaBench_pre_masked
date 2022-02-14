
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct m_ext2fs {int e2fs_contigsumsize; int* e2fs_maxcluster; TYPE_2__* e2fs; TYPE_1__* e2fs_clustersum; } ;
typedef int int32_t ;
typedef size_t e4fs_daddr_t ;
struct TYPE_4__ {int e2fs_fpg; } ;
struct TYPE_3__ {int* cs_sum; int cs_init; } ;


 int VAR_0 ;

void
FUNC_0(struct m_ext2fs *VAR_1, char *VAR_2, int VAR_3, e4fs_daddr_t VAR_4, int VAR_5)
{
 int32_t *VAR_6 = VAR_1->e2fs_clustersum[VAR_3].cs_sum;
 int32_t *VAR_7;
 e4fs_daddr_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;


 if (VAR_1->e2fs_clustersum[VAR_3].cs_init == 0) {
  int VAR_15 = 0;

  VAR_13 = 1;
  VAR_10 = 0;

  for (VAR_14 = 0; VAR_14 < VAR_1->e2fs->e2fs_fpg; VAR_14++) {
   if ((VAR_2[VAR_10] & VAR_13) == 0)
    VAR_15++;
   else if (VAR_15 != 0) {
    if (VAR_15 > VAR_1->e2fs_contigsumsize)
     VAR_15 = VAR_1->e2fs_contigsumsize;
    VAR_6[VAR_15]++;
    VAR_15 = 0;
   }
   if ((VAR_14 & (VAR_0 - 1)) != (VAR_0 - 1))
    VAR_13 <<= 1;
   else {
    VAR_10++;
    VAR_13 = 1;
   }
  }
  if (VAR_15 != 0) {
   if (VAR_15 > VAR_1->e2fs_contigsumsize)
    VAR_15 = VAR_1->e2fs_contigsumsize;
   VAR_6[VAR_15]++;
  }
  VAR_1->e2fs_clustersum[VAR_3].cs_init = 1;
 }

 if (VAR_1->e2fs_contigsumsize <= 0)
  return;


 VAR_8 = VAR_4 + 1;
 VAR_9 = VAR_8 + VAR_1->e2fs_contigsumsize;
 if (VAR_9 > VAR_1->e2fs->e2fs_fpg)
  VAR_9 = VAR_1->e2fs->e2fs_fpg;
 VAR_10 = VAR_8 / VAR_0;
 VAR_13 = 1 << (VAR_8 % VAR_0);
 for (VAR_14 = VAR_8; VAR_14 < VAR_9; VAR_14++) {
  if ((VAR_2[VAR_10] & VAR_13) != 0)
   break;
  if ((VAR_14 & (VAR_0 - 1)) != (VAR_0 - 1))
   VAR_13 <<= 1;
  else {
   VAR_10++;
   VAR_13 = 1;
  }
 }
 VAR_11 = VAR_14 - VAR_8;


 VAR_8 = VAR_4 - 1;
 VAR_9 = VAR_8 - VAR_1->e2fs_contigsumsize;
 if (VAR_9 < 0)
  VAR_9 = -1;
 VAR_10 = VAR_8 / VAR_0;
 VAR_13 = 1 << (VAR_8 % VAR_0);
 for (VAR_14 = VAR_8; VAR_14 > VAR_9; VAR_14--) {
  if ((VAR_2[VAR_10] & VAR_13) != 0)
   break;
  if ((VAR_14 & (VAR_0 - 1)) != 0)
   VAR_13 >>= 1;
  else {
   VAR_10--;
   VAR_13 = 1 << (VAR_0 - 1);
  }
 }
 VAR_12 = VAR_8 - VAR_14;





 VAR_14 = VAR_12 + VAR_11 + 1;
 if (VAR_14 > VAR_1->e2fs_contigsumsize)
  VAR_14 = VAR_1->e2fs_contigsumsize;
 VAR_6[VAR_14] += VAR_5;
 if (VAR_12 > 0)
  VAR_6[VAR_12] -= VAR_5;
 if (VAR_11 > 0)
  VAR_6[VAR_11] -= VAR_5;


 VAR_7 = &VAR_6[VAR_1->e2fs_contigsumsize];
 for (VAR_14 = VAR_1->e2fs_contigsumsize; VAR_14 > 0; VAR_14--)
  if (*VAR_7-- > 0)
   break;
 VAR_1->e2fs_maxcluster[VAR_3] = VAR_14;
}
