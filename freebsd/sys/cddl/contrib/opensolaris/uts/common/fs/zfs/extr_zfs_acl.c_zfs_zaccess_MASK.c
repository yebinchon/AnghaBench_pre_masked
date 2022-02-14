
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int z_pflags; int z_uid; int z_zfsvfs; int z_sa_hdl; } ;
typedef TYPE_1__ znode_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ uid_t ;
typedef int parent ;
typedef int mode_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_14__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (TYPE_6__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_6__* FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int *,int) ;
 int FUNC_7 (int *,TYPE_6__*,scalar_t__,int,int) ;
 int FUNC_8 (TYPE_6__*,int *,scalar_t__) ;
 int FUNC_9 (TYPE_6__*,int *) ;
 int FUNC_10 (TYPE_6__*,int *,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int ,int *,int ) ;
 int FUNC_12 (TYPE_1__*,int*,scalar_t__*,int *) ;
 int FUNC_13 (TYPE_1__*,int,int*,scalar_t__*,scalar_t__,int *) ;
 int FUNC_14 (int ,int ,TYPE_1__**) ;

int
FUNC_15(znode_t *VAR_23, int VAR_24, int VAR_25, boolean_t VAR_26, cred_t *VAR_27)
{
 uint32_t VAR_28;
 int VAR_29;
 int VAR_30;
 boolean_t VAR_31;
 znode_t *VAR_32;
 znode_t *VAR_33 = VAR_23;
 mode_t VAR_34;
 uid_t VAR_35;

 VAR_30 = ((VAR_23->z_pflags & VAR_22) && (FUNC_4(VAR_23)->v_type == VAR_15));
 if (VAR_30) {
  uint64_t VAR_36;

  if ((VAR_29 = FUNC_6(VAR_23->z_sa_hdl,
      FUNC_1(VAR_23->z_zfsvfs), &VAR_36,
      sizeof (VAR_36))) != 0)
   return (VAR_29);

  if ((VAR_29 = FUNC_14(VAR_23->z_zfsvfs,
      VAR_36, &VAR_32)) != 0) {
   return (VAR_29);
  }

  VAR_33 = VAR_32;





  if (VAR_24 & (VAR_11|VAR_0)) {
   VAR_24 &= ~(VAR_11|VAR_0);
   VAR_24 |= VAR_12;
  }

  if (VAR_24 & (VAR_6|VAR_3)) {
   VAR_24 &= ~(VAR_6|VAR_3);
   VAR_24 |= VAR_7;
  }
 }


 VAR_35 = FUNC_11(VAR_23->z_zfsvfs, VAR_23->z_uid, VAR_27, VAR_21);







 VAR_34 = 0;

 VAR_28 = VAR_24;
 if ((VAR_28 & (VAR_4|VAR_5)) &&
     VAR_35 == FUNC_5(VAR_27))
  VAR_28 &= ~(VAR_4|VAR_5);

 if (VAR_28 & (VAR_6|VAR_7|
     VAR_4|VAR_5|VAR_8))
  VAR_34 |= VAR_17;
 if (VAR_28 & (VAR_11|VAR_12|
     VAR_0|VAR_10|VAR_8))
  VAR_34 |= VAR_18;
 if (VAR_28 & VAR_3)
  VAR_34 |= VAR_16;

 if ((VAR_29 = FUNC_13(VAR_33, VAR_24, &VAR_28,
     &VAR_31, VAR_26, VAR_27)) == 0) {
  if (VAR_30)
   FUNC_3(FUNC_4(VAR_32));
  return (FUNC_7(VAR_27, FUNC_4(VAR_23), VAR_35,
      VAR_34, VAR_34));
 }

 if (VAR_29 && !VAR_31) {
  if (VAR_30)
   FUNC_3(FUNC_4(VAR_32));
  return (VAR_29);
 }

 if (VAR_29 && (VAR_25 & VAR_19)) {
  VAR_29 = FUNC_12(VAR_23, &VAR_28, &VAR_31, VAR_27);
 }

 if (VAR_29 && VAR_31) {
  mode_t VAR_37 = 0;






  VAR_29 = 0;
  FUNC_0(VAR_28 != 0);

  if ((VAR_28 & (VAR_4|VAR_5) &&
      VAR_35 == FUNC_5(VAR_27)))
   VAR_28 &= ~(VAR_4|VAR_5);

  if (VAR_28 & (VAR_6|VAR_7|
      VAR_4|VAR_5|VAR_8))
   VAR_37 |= VAR_17;
  if (VAR_28 & (VAR_11|VAR_12|
      VAR_0|VAR_10|VAR_8))
   VAR_37 |= VAR_18;
  if (VAR_28 & VAR_3)
   VAR_37 |= VAR_16;

  VAR_29 = FUNC_7(VAR_27, FUNC_4(VAR_33), VAR_35,
      VAR_34 & ~VAR_37, VAR_34);

  if (VAR_29 == 0 && (VAR_28 & VAR_13))
   VAR_29 = FUNC_8(FUNC_4(VAR_33), VAR_27, VAR_35);
  if (VAR_29 == 0 && (VAR_28 & VAR_9))
   VAR_29 = FUNC_10(FUNC_4(VAR_33), VAR_27, VAR_35);

  if (VAR_29 == 0 && (VAR_28 &
      (VAR_1|VAR_2)))
   VAR_29 = FUNC_9(FUNC_4(VAR_33), VAR_27);

  if (VAR_29 == 0 && (VAR_28 & VAR_8)) {
   VAR_29 = FUNC_8(FUNC_4(VAR_33), VAR_27, VAR_35);
  }
  if (VAR_29 == 0) {




   if (VAR_28 & ~(VAR_20)) {
    VAR_29 = FUNC_2(VAR_14);
   }
  }
 } else if (VAR_29 == 0) {
  VAR_29 = FUNC_7(VAR_27, FUNC_4(VAR_23), VAR_35,
      VAR_34, VAR_34);
 }


 if (VAR_30)
  FUNC_3(FUNC_4(VAR_32));

 return (VAR_29);
}
