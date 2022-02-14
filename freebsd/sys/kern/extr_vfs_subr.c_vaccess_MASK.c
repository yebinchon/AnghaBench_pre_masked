
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct ucred {scalar_t__ cr_uid; } ;
typedef int mode_t ;
typedef int gid_t ;
typedef enum vtype { ____Placeholder_vtype } vtype ;
typedef int accmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_1 (int ,struct ucred*) ;
 int FUNC_2 (struct ucred*,int ) ;

int
FUNC_3(enum vtype VAR_22, mode_t VAR_23, uid_t VAR_24, gid_t VAR_25,
    accmode_t VAR_26, struct ucred *VAR_27, int *VAR_28)
{
 accmode_t VAR_29;
 accmode_t VAR_30;

 FUNC_0((VAR_26 & ~(VAR_19 | VAR_21 | VAR_20 | VAR_16 | VAR_17)) == 0,
     ("invalid bit in accmode"));
 FUNC_0((VAR_26 & VAR_17) == 0 || (VAR_26 & VAR_21),
     ("VAPPEND without VWRITE"));






 if (VAR_28 != ((void*)0))
  *VAR_28 = 0;

 VAR_29 = 0;


 if (VAR_27->cr_uid == VAR_24) {
  VAR_29 |= VAR_16;
  if (VAR_23 & VAR_15)
   VAR_29 |= VAR_19;
  if (VAR_23 & VAR_9)
   VAR_29 |= VAR_20;
  if (VAR_23 & VAR_12)
   VAR_29 |= (VAR_21 | VAR_17);

  if ((VAR_26 & VAR_29) == VAR_26)
   return (0);

  goto privcheck;
 }


 if (FUNC_1(VAR_25, VAR_27)) {
  if (VAR_23 & VAR_13)
   VAR_29 |= VAR_19;
  if (VAR_23 & VAR_7)
   VAR_29 |= VAR_20;
  if (VAR_23 & VAR_10)
   VAR_29 |= (VAR_21 | VAR_17);

  if ((VAR_26 & VAR_29) == VAR_26)
   return (0);

  goto privcheck;
 }


 if (VAR_23 & VAR_14)
  VAR_29 |= VAR_19;
 if (VAR_23 & VAR_8)
  VAR_29 |= VAR_20;
 if (VAR_23 & VAR_11)
  VAR_29 |= (VAR_21 | VAR_17);
 if ((VAR_26 & VAR_29) == VAR_26)
  return (0);

privcheck:






 VAR_30 = 0;

 if (VAR_22 == VAR_18) {




  if ((VAR_26 & VAR_19) && ((VAR_29 & VAR_19) == 0) &&
      !FUNC_2(VAR_27, VAR_4))
   VAR_30 |= VAR_19;
 } else {





  if ((VAR_26 & VAR_19) && ((VAR_29 & VAR_19) == 0) &&
      (VAR_23 & (VAR_15 | VAR_13 | VAR_14)) != 0 &&
      !FUNC_2(VAR_27, VAR_3))
   VAR_30 |= VAR_19;
 }

 if ((VAR_26 & VAR_20) && ((VAR_29 & VAR_20) == 0) &&
     !FUNC_2(VAR_27, VAR_5))
  VAR_30 |= VAR_20;

 if ((VAR_26 & VAR_21) && ((VAR_29 & VAR_21) == 0) &&
     !FUNC_2(VAR_27, VAR_6))
  VAR_30 |= (VAR_21 | VAR_17);

 if ((VAR_26 & VAR_16) && ((VAR_29 & VAR_16) == 0) &&
     !FUNC_2(VAR_27, VAR_2))
  VAR_30 |= VAR_16;

 if ((VAR_26 & (VAR_30 | VAR_29)) == VAR_26) {

  if (VAR_28 != ((void*)0))
   *VAR_28 = 1;
  return (0);
 }

 return ((VAR_26 & VAR_16) ? VAR_1 : VAR_0);
}
