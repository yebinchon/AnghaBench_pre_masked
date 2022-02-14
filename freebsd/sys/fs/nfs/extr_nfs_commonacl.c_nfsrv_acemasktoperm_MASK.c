
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef enum vtype { ____Placeholder_vtype } vtype ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;

__attribute__((used)) static int
FUNC_1(u_int32_t VAR_36, u_int32_t VAR_37, int VAR_38,
    enum vtype VAR_39, acl_perm_t *VAR_40)
{
 acl_perm_t VAR_41 = 0x0;
 int VAR_42 = 0;

 if (VAR_37 & VAR_27) {
  VAR_37 &= ~VAR_27;
  VAR_41 |= VAR_9;
 }
 if (VAR_37 & VAR_24) {
  VAR_37 &= ~VAR_24;
  VAR_41 |= VAR_6;
 }
 if (VAR_37 & VAR_33) {
  VAR_37 &= ~VAR_33;
  VAR_41 |= VAR_14;
 }
 if (VAR_37 & VAR_18) {
  VAR_37 &= ~VAR_18;
  VAR_41 |= VAR_0;
 }
 if (VAR_37 & VAR_20) {
  VAR_37 &= ~VAR_20;
  VAR_41 |= VAR_2;
 }
 if (VAR_37 & VAR_19) {
  VAR_37 &= ~VAR_19;
  VAR_41 |= VAR_1;
 }
 if (VAR_37 & VAR_28) {
  VAR_37 &= ~VAR_28;
  VAR_41 |= VAR_10;
 }
 if (VAR_37 & VAR_34) {
  VAR_37 &= ~VAR_34;
  VAR_41 |= VAR_15;
 }
 if (VAR_37 & VAR_23) {
  VAR_37 &= ~VAR_23;
  VAR_41 |= VAR_5;
 }
 if (VAR_37 & VAR_29) {
  VAR_37 &= ~VAR_29;
  VAR_41 |= VAR_5;
 }
 if (VAR_37 & VAR_22) {
  VAR_37 &= ~VAR_22;
  VAR_41 |= VAR_4;
 }
 if (VAR_37 & VAR_26) {
  VAR_37 &= ~VAR_26;
  VAR_41 |= VAR_8;
 }
 if (VAR_37 & VAR_32) {
  VAR_37 &= ~VAR_32;
  VAR_41 |= VAR_13;
 }
 if (VAR_37 & VAR_21) {
  VAR_37 &= ~VAR_21;
  VAR_41 |= VAR_3;
 }
 if (VAR_37 & VAR_25) {
  VAR_37 &= ~VAR_25;
  VAR_41 |= VAR_7;
 }
 if (VAR_37 & VAR_31) {
  VAR_37 &= ~VAR_31;
  VAR_41 |= VAR_12;
 }
 if (VAR_37 & VAR_35) {
  VAR_37 &= ~VAR_35;
  VAR_41 |= VAR_16;
 }
 if (VAR_37 & VAR_30) {
  VAR_37 &= ~VAR_30;
  VAR_41 |= VAR_11;
 }
 if (VAR_37 != 0) {
  VAR_42 = VAR_17;
  goto out;
 }
 *VAR_40 = VAR_41;

out:
 FUNC_0(VAR_42);
 return (VAR_42);
}
