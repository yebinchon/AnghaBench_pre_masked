
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

int
FUNC_1(const char *VAR_45, int *VAR_46, int *VAR_47)
{

 *VAR_46 = VAR_44;
 *VAR_47 = VAR_0;
 if (FUNC_0(VAR_45, "RAID0") == 0)
  *VAR_46 = VAR_32;
 else if (FUNC_0(VAR_45, "RAID1") == 0)
  *VAR_46 = VAR_33;
 else if (FUNC_0(VAR_45, "RAID3-P0") == 0) {
  *VAR_46 = VAR_35;
  *VAR_47 = VAR_3;
 } else if (FUNC_0(VAR_45, "RAID3-PN") == 0 ||
     FUNC_0(VAR_45, "RAID3") == 0) {
  *VAR_46 = VAR_35;
  *VAR_47 = VAR_4;
 } else if (FUNC_0(VAR_45, "RAID4-P0") == 0) {
  *VAR_46 = VAR_36;
  *VAR_47 = VAR_5;
 } else if (FUNC_0(VAR_45, "RAID4-PN") == 0 ||
     FUNC_0(VAR_45, "RAID4") == 0) {
  *VAR_46 = VAR_36;
  *VAR_47 = VAR_6;
 } else if (FUNC_0(VAR_45, "RAID5-RA") == 0) {
  *VAR_46 = VAR_37;
  *VAR_47 = VAR_17;
 } else if (FUNC_0(VAR_45, "RAID5-RS") == 0) {
  *VAR_46 = VAR_37;
  *VAR_47 = VAR_22;
 } else if (FUNC_0(VAR_45, "RAID5") == 0 ||
     FUNC_0(VAR_45, "RAID5-LA") == 0) {
  *VAR_46 = VAR_37;
  *VAR_47 = VAR_15;
 } else if (FUNC_0(VAR_45, "RAID5-LS") == 0) {
  *VAR_46 = VAR_37;
  *VAR_47 = VAR_16;
 } else if (FUNC_0(VAR_45, "RAID6-RA") == 0) {
  *VAR_46 = VAR_41;
  *VAR_47 = VAR_25;
 } else if (FUNC_0(VAR_45, "RAID6-RS") == 0) {
  *VAR_46 = VAR_41;
  *VAR_47 = VAR_26;
 } else if (FUNC_0(VAR_45, "RAID6") == 0 ||
     FUNC_0(VAR_45, "RAID6-LA") == 0) {
  *VAR_46 = VAR_41;
  *VAR_47 = VAR_23;
 } else if (FUNC_0(VAR_45, "RAID6-LS") == 0) {
  *VAR_46 = VAR_41;
  *VAR_47 = VAR_24;
 } else if (FUNC_0(VAR_45, "RAIDMDF-RA") == 0) {
  *VAR_46 = VAR_42;
  *VAR_47 = VAR_29;
 } else if (FUNC_0(VAR_45, "RAIDMDF-RS") == 0) {
  *VAR_46 = VAR_42;
  *VAR_47 = VAR_30;
 } else if (FUNC_0(VAR_45, "RAIDMDF") == 0 ||
     FUNC_0(VAR_45, "RAIDMDF-LA") == 0) {
  *VAR_46 = VAR_42;
  *VAR_47 = VAR_27;
 } else if (FUNC_0(VAR_45, "RAIDMDF-LS") == 0) {
  *VAR_46 = VAR_42;
  *VAR_47 = VAR_28;
 } else if (FUNC_0(VAR_45, "RAID10") == 0 ||
     FUNC_0(VAR_45, "RAID1E") == 0 ||
     FUNC_0(VAR_45, "RAID1E-A") == 0) {
  *VAR_46 = VAR_34;
  *VAR_47 = VAR_1;
 } else if (FUNC_0(VAR_45, "RAID1E-O") == 0) {
  *VAR_46 = VAR_34;
  *VAR_47 = VAR_2;
 } else if (FUNC_0(VAR_45, "SINGLE") == 0)
  *VAR_46 = VAR_43;
 else if (FUNC_0(VAR_45, "CONCAT") == 0)
  *VAR_46 = VAR_31;
 else if (FUNC_0(VAR_45, "RAID5E-RA") == 0) {
  *VAR_46 = VAR_38;
  *VAR_47 = VAR_13;
 } else if (FUNC_0(VAR_45, "RAID5E-RS") == 0) {
  *VAR_46 = VAR_38;
  *VAR_47 = VAR_14;
 } else if (FUNC_0(VAR_45, "RAID5E") == 0 ||
     FUNC_0(VAR_45, "RAID5E-LA") == 0) {
  *VAR_46 = VAR_38;
  *VAR_47 = VAR_11;
 } else if (FUNC_0(VAR_45, "RAID5E-LS") == 0) {
  *VAR_46 = VAR_38;
  *VAR_47 = VAR_12;
 } else if (FUNC_0(VAR_45, "RAID5EE-RA") == 0) {
  *VAR_46 = VAR_39;
  *VAR_47 = VAR_9;
 } else if (FUNC_0(VAR_45, "RAID5EE-RS") == 0) {
  *VAR_46 = VAR_39;
  *VAR_47 = VAR_10;
 } else if (FUNC_0(VAR_45, "RAID5EE") == 0 ||
     FUNC_0(VAR_45, "RAID5EE-LA") == 0) {
  *VAR_46 = VAR_39;
  *VAR_47 = VAR_7;
 } else if (FUNC_0(VAR_45, "RAID5EE-LS") == 0) {
  *VAR_46 = VAR_39;
  *VAR_47 = VAR_8;
 } else if (FUNC_0(VAR_45, "RAID5R-RA") == 0) {
  *VAR_46 = VAR_40;
  *VAR_47 = VAR_20;
 } else if (FUNC_0(VAR_45, "RAID5R-RS") == 0) {
  *VAR_46 = VAR_40;
  *VAR_47 = VAR_21;
 } else if (FUNC_0(VAR_45, "RAID5R") == 0 ||
     FUNC_0(VAR_45, "RAID5R-LA") == 0) {
  *VAR_46 = VAR_40;
  *VAR_47 = VAR_18;
 } else if (FUNC_0(VAR_45, "RAID5R-LS") == 0) {
  *VAR_46 = VAR_40;
  *VAR_47 = VAR_19;
 } else
  return (-1);
 return (0);
}
