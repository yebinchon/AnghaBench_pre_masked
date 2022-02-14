
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cloudabi_rights_t ;
typedef int cloudabi_filetype_t ;
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

void
FUNC_0(cloudabi_filetype_t VAR_30,
    cloudabi_rights_t *VAR_31, cloudabi_rights_t *VAR_32)
{
 switch (VAR_30) {
 case 133:
  *VAR_31 &= VAR_3 |
      VAR_4 | VAR_7 |
      VAR_9 |
      VAR_10 |
      VAR_11 |
      VAR_12 |
      VAR_13 |
      VAR_14 |
      VAR_15 |
      VAR_16 |
      VAR_17 |
      VAR_18 |
      VAR_20 |
      VAR_21 |
      VAR_22 |
      VAR_23 |
      VAR_24 |
      VAR_27;
  *VAR_32 &= VAR_0 |
      VAR_1 |
      VAR_2 |
      VAR_3 |
      VAR_4 |
      VAR_5 |
      VAR_6 |
      VAR_7 |
      VAR_8 |
      VAR_9 |
      VAR_10 |
      VAR_11 |
      VAR_12 |
      VAR_13 |
      VAR_14 |
      VAR_15 |
      VAR_16 |
      VAR_17 |
      VAR_18 |
      VAR_19 |
      VAR_20 |
      VAR_21 |
      VAR_22 |
      VAR_23 |
      VAR_24 |
      VAR_25 |
      VAR_26 |
      VAR_27 |
      VAR_28;
  break;
 case 132:
  *VAR_31 &= ~(VAR_7 |
      VAR_27);
  *VAR_32 = 0;
  break;
 case 131:
  *VAR_31 &= VAR_0 |
      VAR_1 |
      VAR_2 |
      VAR_3 |
      VAR_4 |
      VAR_5 |
      VAR_6 |
      VAR_7 |
      VAR_8 |
      VAR_18 |
      VAR_19 |
      VAR_20 |
      VAR_25 |
      VAR_26 |
      VAR_27 |
      VAR_28;
  *VAR_32 = 0;
  break;
 case 130:
  *VAR_31 &= ~(VAR_2 |
      VAR_5 |
      VAR_7 |
      VAR_8 |
      VAR_14);
  *VAR_32 = 0;
  break;
 case 129:
 case 128:
  *VAR_31 &= VAR_1 |
      VAR_3 |
      VAR_6 |
      VAR_18 |
      VAR_27 |
      VAR_29;
  break;
 default:
  *VAR_32 = 0;
  break;
 }
}
