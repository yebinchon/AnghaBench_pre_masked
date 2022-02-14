
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int bitlength; int immediate; } ;
struct TYPE_5__ {TYPE_1__ dntti; } ;
typedef TYPE_2__ dnttpointer ;


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
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2 (dnttpointer VAR_21)
{
  if (!VAR_21.dntti.immediate)
    {
      FUNC_0 ("error in hpread_type_translate\n.");
      return VAR_20;
    }

  switch (VAR_21.dntti.type)
    {
    case 155:
    case 154:
    case 153:
      return VAR_0;
    case 152:

    case 128:
      return VAR_1;
    case 143:
      if (VAR_21.dntti.bitlength <= 8)
 return VAR_12;
      if (VAR_21.dntti.bitlength <= 16)
 return VAR_11;
      if (VAR_21.dntti.bitlength <= 32)
 return VAR_8;
      return VAR_10;
    case 141:
      if (VAR_21.dntti.bitlength <= 8)
 return VAR_12;
      return VAR_9;
    case 130:
      if (VAR_21.dntti.bitlength <= 8)
 return VAR_15;
      if (VAR_21.dntti.bitlength <= 16)
 return VAR_19;
      if (VAR_21.dntti.bitlength <= 32)
 return VAR_17;
      return VAR_18;
    case 131:
      if (VAR_21.dntti.bitlength <= 8)
 return VAR_15;
      if (VAR_21.dntti.bitlength <= 16)
 return VAR_19;
      if (VAR_21.dntti.bitlength <= 32)
 return VAR_16;
      return VAR_18;
    case 136:
    case 135:
    case 149:
      if (VAR_21.dntti.bitlength == 64)
 return VAR_4;
      if (VAR_21.dntti.bitlength == 128)
 return VAR_6;
      return VAR_7;
    case 151:
    case 150:
      if (VAR_21.dntti.bitlength == 128)
 return VAR_3;
      if (VAR_21.dntti.bitlength == 192)
 return VAR_5;
      return VAR_2;
    case 129:
      return VAR_20;
    case 134:
    case 140:
    case 146:
    case 138:
    case 139:
    case 147:
    case 145:
      return VAR_13;
    case 133:
      return VAR_14;
    case 132:
    case 148:
    case 137:
    case 156:
    case 144:
    case 142:
    default:
      FUNC_1 ("hpread_type_translate: unhandled type code.\n");
      return VAR_20;
    }
}
