
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ dn_datablkshift; scalar_t__ dn_datablksz; int dn_struct_rwlock; TYPE_1__* dn_phys; } ;
typedef TYPE_2__ dnode_t ;
struct TYPE_5__ {int dn_nlevels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int,scalar_t__*,int,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(dnode_t *VAR_5, int VAR_6, uint64_t *VAR_7,
    int VAR_8, uint64_t VAR_9, uint64_t VAR_10)
{
 uint64_t VAR_11 = *VAR_7;
 int VAR_12, VAR_13;
 int VAR_14 = 0;

 if (!(VAR_6 & VAR_1))
  FUNC_2(&VAR_5->dn_struct_rwlock, VAR_4);

 if (VAR_5->dn_phys->dn_nlevels == 0) {
  VAR_14 = FUNC_0(VAR_3);
  goto out;
 }

 if (VAR_5->dn_datablkshift == 0) {
  if (*VAR_7 < VAR_5->dn_datablksz) {
   if (VAR_6 & VAR_2)
    *VAR_7 = VAR_5->dn_datablksz;
  } else {
   VAR_14 = FUNC_0(VAR_3);
  }
  goto out;
 }

 VAR_13 = VAR_5->dn_phys->dn_nlevels;

 for (VAR_12 = VAR_8; VAR_12 <= VAR_13; VAR_12++) {
  VAR_14 = FUNC_1(VAR_5,
      VAR_6, VAR_7, VAR_12, VAR_9, VAR_10);
  if (VAR_14 != VAR_3)
   break;
 }

 while (VAR_14 == 0 && --VAR_12 >= VAR_8) {
  VAR_14 = FUNC_1(VAR_5,
      VAR_6, VAR_7, VAR_12, VAR_9, VAR_10);
 }





 if ((VAR_6 & VAR_2) && VAR_14 == VAR_3 && VAR_10 == 0 &&
     VAR_8 == 1 && VAR_9 == 1 && !(VAR_6 & VAR_0)) {
  VAR_14 = 0;
 }

 if (VAR_14 == 0 && (VAR_6 & VAR_0 ?
     VAR_11 < *VAR_7 : VAR_11 > *VAR_7))
  VAR_14 = FUNC_0(VAR_3);
out:
 if (!(VAR_6 & VAR_1))
  FUNC_3(&VAR_5->dn_struct_rwlock);

 return (VAR_14);
}
