
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int acl_tag_t ;
typedef int acl_perm_t ;


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
 int FUNC_0 (char*,int) ;

acl_perm_t
FUNC_1(acl_tag_t VAR_12, mode_t VAR_13)
{
 acl_perm_t VAR_14 = 0;

 switch(VAR_12) {
 case 128:
  if (VAR_13 & VAR_11)
   VAR_14 |= VAR_0;
  if (VAR_13 & VAR_5)
   VAR_14 |= VAR_1;
  if (VAR_13 & VAR_8)
   VAR_14 |= VAR_2;
  return (VAR_14);

 case 130:
  if (VAR_13 & VAR_9)
   VAR_14 |= VAR_0;
  if (VAR_13 & VAR_3)
   VAR_14 |= VAR_1;
  if (VAR_13 & VAR_6)
   VAR_14 |= VAR_2;
  return (VAR_14);

 case 129:
  if (VAR_13 & VAR_10)
   VAR_14 |= VAR_0;
  if (VAR_13 & VAR_4)
   VAR_14 |= VAR_1;
  if (VAR_13 & VAR_7)
   VAR_14 |= VAR_2;
  return (VAR_14);

 default:
  FUNC_0("acl_posix1e_mode_to_perm: invalid tag (%d)\n", VAR_12);
  return (0);
 }
}
