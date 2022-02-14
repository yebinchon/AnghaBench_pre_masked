
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef scalar_t__ xfs_off_t ;
typedef int xfs_mount_t ;
struct TYPE_16__ {int di_mode; int di_flags; } ;
struct TYPE_17__ {TYPE_1__ i_d; int * i_mount; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef scalar_t__ xfs_fsize_t ;
struct TYPE_18__ {int l_whence; scalar_t__ l_start; scalar_t__ l_len; } ;
typedef TYPE_3__ xfs_flock64_t ;
struct iattr {scalar_t__ ia_size; int ia_valid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_16 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,struct iattr*,int) ;
 int FUNC_11 (TYPE_2__*,scalar_t__,scalar_t__,int ) ;
 int * FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,TYPE_2__*,int) ;
 int FUNC_16 (int *,TYPE_2__*) ;
 int FUNC_17 (int *,TYPE_2__*,int ) ;
 int FUNC_18 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_19 (int *) ;

int
FUNC_20(
 xfs_inode_t *VAR_17,
 int VAR_18,
 xfs_flock64_t *VAR_19,
 xfs_off_t VAR_20,
 int VAR_21)
{
 xfs_mount_t *VAR_22 = VAR_17->i_mount;
 int VAR_23;
 int VAR_24;
 xfs_fsize_t VAR_25;
 int VAR_26;
 xfs_off_t VAR_27;
 xfs_off_t VAR_28;
 xfs_trans_t *VAR_29;
 struct iattr VAR_30;
 int VAR_31;

 if (!FUNC_1(VAR_17->i_d.di_mode))
  return FUNC_2(VAR_1);

 switch (VAR_19->l_whence) {
 case 0:
  break;
 case 1:
  VAR_19->l_start += VAR_20;
  break;
 case 2:
  VAR_19->l_start += FUNC_3(VAR_17);
  break;
 default:
  return FUNC_2(VAR_1);
 }

 VAR_28 = VAR_19->l_len > 0 ? VAR_19->l_len - 1 : VAR_19->l_len;

 if ( (VAR_19->l_start < 0)
     || (VAR_19->l_start > FUNC_4(VAR_22))
     || (VAR_19->l_start + VAR_28 < 0)
     || (VAR_19->l_start + VAR_28 > FUNC_4(VAR_22)))
  return FUNC_2(VAR_1);

 VAR_19->l_whence = 0;

 VAR_27 = VAR_19->l_start;
 VAR_25 = FUNC_3(VAR_17);
 VAR_26 = VAR_23 = 0;
 VAR_31 = VAR_9;

 switch (VAR_18) {
 case 128:
  VAR_31 |= VAR_8;
  FUNC_11(VAR_17, VAR_27, VAR_27 + VAR_19->l_len, 0);

 case 132:
 case 131:
  VAR_24 = FUNC_6(VAR_17, VAR_27, VAR_19->l_len,
      VAR_31, VAR_21);
  if (VAR_24)
   return VAR_24;
  VAR_26 = 1;
  break;

 case 130:
 case 129:
  if ((VAR_24 = FUNC_7(VAR_17, VAR_27, VAR_19->l_len,
        VAR_21)))
   return VAR_24;
  break;

 case 136:
 case 135:
 case 134:
 case 133:
  FUNC_8(VAR_17, VAR_15);
  if (VAR_27 > VAR_25) {
   VAR_24 = FUNC_6(VAR_17, VAR_25,
     VAR_27 - VAR_25, 0,
     VAR_21 | VAR_6);
   if (VAR_24) {
    FUNC_9(VAR_17, VAR_15);
    break;
   }
  }

  VAR_30.ia_valid = VAR_0;
  VAR_30.ia_size = VAR_27;

  VAR_24 = FUNC_10(VAR_17, &VAR_30, VAR_21 | VAR_6);
  FUNC_9(VAR_17, VAR_15);

  if (VAR_24)
   return VAR_24;

  VAR_23 = 1;
  break;

 default:
  FUNC_0(0);
  return FUNC_2(VAR_1);
 }




 VAR_29 = FUNC_12(VAR_22, VAR_16);

 if ((VAR_24 = FUNC_18(VAR_29, 0, FUNC_5(VAR_22),
          0, 0, 0))) {

  FUNC_13(VAR_29, 0);
  return VAR_24;
 }

 FUNC_8(VAR_17, VAR_13);

 FUNC_16(VAR_29, VAR_17);

 if ((VAR_21 & VAR_5) == 0) {
  VAR_17->i_d.di_mode &= ~VAR_3;
  if (VAR_17->i_d.di_mode & VAR_4)
   VAR_17->i_d.di_mode &= ~VAR_2;

  FUNC_15(VAR_29, VAR_17, VAR_12 | VAR_11);
 }
 if (VAR_26)
  VAR_17->i_d.di_flags |= VAR_10;
 else if (VAR_23)
  VAR_17->i_d.di_flags &= ~VAR_10;

 FUNC_17(VAR_29, VAR_17, VAR_14);
 if (VAR_21 & VAR_7)
  FUNC_19(VAR_29);

 VAR_24 = FUNC_14(VAR_29, 0);

 FUNC_9(VAR_17, VAR_13);

 return VAR_24;
}
