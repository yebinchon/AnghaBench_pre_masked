
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_val_fmt ;
typedef int bhnd_nvram_type ;
 int FUNC_0 (char*,int) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int const VAR_15 ;
 int const VAR_16 ;
 int const VAR_17 ;
 int const VAR_18 ;
 int const VAR_19 ;
 int const VAR_20 ;
 int const VAR_21 ;
 int const VAR_22 ;
 int const VAR_23 ;

const bhnd_nvram_val_fmt *
FUNC_1(bhnd_nvram_type VAR_24)
{
 switch (VAR_24) {
 case 129:
  return (&VAR_23);
 case 135:
  return (&VAR_17);
 case 133:
  return (&VAR_19);
 case 131:
  return (&VAR_21);
 case 140:
  return (&VAR_12);
 case 146:
  return (&VAR_6);
 case 144:
  return (&VAR_8);
 case 142:
  return (&VAR_10);
 case 149:
  return (&VAR_3);
 case 137:
  return (&VAR_15);
 case 151:
  return (&VAR_1);
 case 138:
  return (&VAR_13);
 case 147:
  return (&VAR_4);
 case 128:
  return (&VAR_22);
 case 134:
  return (&VAR_16);
 case 132:
  return (&VAR_18);
 case 130:
  return (&VAR_20);
 case 139:
  return (&VAR_11);
 case 145:
  return (&VAR_5);
 case 143:
  return (&VAR_7);
 case 141:
  return (&VAR_9);
 case 148:
  return (&VAR_2);
 case 136:
  return (&VAR_14);
 case 150:
  return (&VAR_0);
 }


 FUNC_0("bhnd nvram type %u unknown", VAR_24);
}
