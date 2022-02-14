
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
typedef int objset_t ;
struct TYPE_8__ {int dn_nlevels; unsigned long long dn_indblkshift; unsigned long long dn_datablkshift; int dn_object; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 unsigned long long VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,TYPE_1__*,unsigned long long,unsigned long long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,unsigned long long,int ,TYPE_1__**) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,unsigned long long*,int,int,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_12 (int ) ;

int
FUNC_13(objset_t *VAR_6, uint64_t VAR_7,
    uint64_t VAR_8)
{
 uint64_t VAR_9, VAR_10;
 int VAR_11;
 dnode_t *VAR_12;

 VAR_11 = FUNC_7(VAR_6, VAR_7, VAR_2, &VAR_12);
 if (VAR_11 != 0) {
  return (VAR_11);
 }

 if (VAR_12->dn_nlevels <= 1) {
  if (FUNC_12(VAR_3) && FUNC_12(VAR_1)) {
   VAR_11 = FUNC_0(VAR_0);
  }






  if (VAR_11 == 0 && FUNC_8(VAR_12)) {
   dmu_tx_t *VAR_13 = FUNC_5(VAR_6);
   FUNC_6(VAR_13, VAR_12->dn_object);
   if ((VAR_11 = FUNC_3(VAR_13, VAR_5)) == 0) {
    FUNC_11(VAR_12, VAR_13);
    FUNC_4(VAR_13);
   } else {
    FUNC_2(VAR_13);
   }
  }

  FUNC_10(VAR_12, VAR_2);
  return (VAR_11);
 }

 VAR_9 = 0;
 VAR_10 = 1ULL << (VAR_12->dn_indblkshift - VAR_4 +
     VAR_12->dn_datablkshift);



 while (FUNC_9(VAR_12, 0, &VAR_9, 2, 1, 0) == 0) {
  if (FUNC_12(VAR_3) && FUNC_12(VAR_1)) {
   VAR_11 = FUNC_0(VAR_0);
   break;
  }
  if ((VAR_11 = FUNC_1(VAR_6, VAR_12,
      VAR_8, VAR_9)) != 0) {
   break;
  }
  VAR_9 += VAR_10;
 }

 FUNC_10(VAR_12, VAR_2);
 return (VAR_11);
}
