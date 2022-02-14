
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef int u_short ;
struct vattr {scalar_t__ va_uid; int va_mode; int va_gid; } ;
struct ucred {scalar_t__ cr_uid; } ;
typedef int gid_t ;
typedef int accmode_t ;


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
 scalar_t__ FUNC_0 (int ,struct ucred*) ;

__attribute__((used)) static int
FUNC_1(accmode_t VAR_13,
        struct vattr *VAR_14,
        struct ucred *VAR_15)
{
 int VAR_16;
 uid_t VAR_17;
 gid_t VAR_18;
 u_short VAR_19;
 u_short VAR_20;

 VAR_20 = 0;
 VAR_17 = VAR_14->va_uid;
 VAR_18 = VAR_14->va_gid;
 VAR_19 = VAR_14->va_mode;


 if (VAR_15->cr_uid == VAR_17) {
  if (VAR_13 & VAR_10)
   VAR_20 |= VAR_9;
  if (VAR_13 & VAR_11)
   VAR_20 |= VAR_3;
  if (VAR_13 & VAR_12)
   VAR_20 |= VAR_6;
  return ((VAR_19 & VAR_20) == VAR_20 ? 0 : VAR_0);
 }


 VAR_16 = 0;
 if (FUNC_0(VAR_18, VAR_15)) {
  if (VAR_13 & VAR_10)
   VAR_20 |= VAR_7;
  if (VAR_13 & VAR_11)
   VAR_20 |= VAR_1;
  if (VAR_13 & VAR_12)
   VAR_20 |= VAR_4;
  return ((VAR_19 & VAR_20) == VAR_20 ? 0 : VAR_0);
 }


 if (VAR_13 & VAR_10)
  VAR_20 |= VAR_8;
 if (VAR_13 & VAR_11)
  VAR_20 |= VAR_2;
 if (VAR_13 & VAR_12)
  VAR_20 |= VAR_5;

 return ((VAR_19 & VAR_20) == VAR_20 ? 0 : VAR_0);
}
