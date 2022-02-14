
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
const char *
FUNC_0(int VAR_30, int VAR_31)
{

 switch (VAR_30) {
 case 139:
  return ("RAID0");
 case 138:
  return ("RAID1");
 case 136:
  if (VAR_31 == VAR_2)
   return ("RAID3-P0");
  if (VAR_31 == VAR_3)
   return ("RAID3-PN");
  return ("RAID3");
 case 135:
  if (VAR_31 == VAR_4)
   return ("RAID4-P0");
  if (VAR_31 == VAR_5)
   return ("RAID4-PN");
  return ("RAID4");
 case 134:
  if (VAR_31 == VAR_16)
   return ("RAID5-RA");
  if (VAR_31 == VAR_21)
   return ("RAID5-RS");
  if (VAR_31 == VAR_14)
   return ("RAID5-LA");
  if (VAR_31 == VAR_15)
   return ("RAID5-LS");
  return ("RAID5");
 case 130:
  if (VAR_31 == VAR_24)
   return ("RAID6-RA");
  if (VAR_31 == VAR_25)
   return ("RAID6-RS");
  if (VAR_31 == VAR_22)
   return ("RAID6-LA");
  if (VAR_31 == VAR_23)
   return ("RAID6-LS");
  return ("RAID6");
 case 129:
  if (VAR_31 == VAR_28)
   return ("RAIDMDF-RA");
  if (VAR_31 == VAR_29)
   return ("RAIDMDF-RS");
  if (VAR_31 == VAR_26)
   return ("RAIDMDF-LA");
  if (VAR_31 == VAR_27)
   return ("RAIDMDF-LS");
  return ("RAIDMDF");
 case 137:
  if (VAR_31 == VAR_0)
   return ("RAID1E-A");
  if (VAR_31 == VAR_1)
   return ("RAID1E-O");
  return ("RAID1E");
 case 128:
  return ("SINGLE");
 case 140:
  return ("CONCAT");
 case 133:
  if (VAR_31 == VAR_12)
   return ("RAID5E-RA");
  if (VAR_31 == VAR_13)
   return ("RAID5E-RS");
  if (VAR_31 == VAR_10)
   return ("RAID5E-LA");
  if (VAR_31 == VAR_11)
   return ("RAID5E-LS");
  return ("RAID5E");
 case 132:
  if (VAR_31 == VAR_8)
   return ("RAID5EE-RA");
  if (VAR_31 == VAR_9)
   return ("RAID5EE-RS");
  if (VAR_31 == VAR_6)
   return ("RAID5EE-LA");
  if (VAR_31 == VAR_7)
   return ("RAID5EE-LS");
  return ("RAID5EE");
 case 131:
  if (VAR_31 == VAR_19)
   return ("RAID5R-RA");
  if (VAR_31 == VAR_20)
   return ("RAID5R-RS");
  if (VAR_31 == VAR_17)
   return ("RAID5R-LA");
  if (VAR_31 == VAR_18)
   return ("RAID5R-LS");
  return ("RAID5E");
 default:
  return ("UNKNOWN");
 }
}
