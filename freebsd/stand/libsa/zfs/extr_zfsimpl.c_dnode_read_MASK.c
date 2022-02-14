
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
typedef int off_t ;
struct TYPE_4__ {int dn_indblkshift; int dn_datablkszsec; int dn_nlevels; int dn_maxblkid; int * dn_blkptr; } ;
typedef TYPE_1__ dnode_phys_t ;
typedef int blkptr_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 TYPE_1__ const* VAR_6 ;
 int FUNC_1 (void*,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int const*,int *,int *) ;

__attribute__((used)) static int
FUNC_5(const spa_t *VAR_7, const dnode_phys_t *VAR_8, off_t VAR_9, void *VAR_10, size_t VAR_11)
{
 int VAR_12 = VAR_8->dn_indblkshift - VAR_1;
 int VAR_13 = VAR_8->dn_datablkszsec << VAR_3;
 int VAR_14 = VAR_8->dn_nlevels;
 int VAR_15, VAR_16;

 if (VAR_13 > VAR_2) {
  FUNC_3("ZFS: I/O error - blocks larger than %llu are not "
      "supported\n", VAR_2);
  return (VAR_0);
 }





 while (VAR_11 > 0) {
  uint64_t VAR_17 = VAR_9 / VAR_13;
  int VAR_18 = VAR_9 % VAR_13;
  int VAR_19;
  const blkptr_t *VAR_20;
  blkptr_t VAR_21;

  if (VAR_17 > VAR_8->dn_maxblkid)
   return (VAR_0);

  if (VAR_8 == VAR_6 && VAR_17 == VAR_4)
   goto cached;

  VAR_20 = VAR_8->dn_blkptr;
  for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {





   VAR_19 = VAR_17 >> ((VAR_14 - VAR_15 - 1) * VAR_12);
   VAR_19 &= ((1 << VAR_12) - 1);
   VAR_21 = VAR_20[VAR_19];
   if (FUNC_0(&VAR_21)) {
    FUNC_2(VAR_5, 0, VAR_13);
    break;
   }
   VAR_16 = FUNC_4(VAR_7, &VAR_21, VAR_5);
   if (VAR_16)
    return (VAR_16);
   VAR_20 = (const blkptr_t *) VAR_5;
  }
  VAR_6 = VAR_8;
  VAR_4 = VAR_17;
 cached:





  VAR_15 = VAR_13 - VAR_18;
  if (VAR_15 > VAR_11) VAR_15 = VAR_11;
  FUNC_1(VAR_10, &VAR_5[VAR_18], VAR_15);
  VAR_10 = ((char*) VAR_10) + VAR_15;
  VAR_9 += VAR_15;
  VAR_11 -= VAR_15;
 }

 return (0);
}
