
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum neon_type_mask { ____Placeholder_neon_type_mask } neon_type_mask ;
typedef enum neon_el_type { ____Placeholder_neon_el_type } neon_el_type ;
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

__attribute__((used)) static enum neon_type_mask
FUNC_0 (enum neon_el_type VAR_21, unsigned VAR_22)
{
  switch (VAR_21)
    {
    case 128:
      switch (VAR_22)
        {
        case 8: return VAR_3;
        case 16: return VAR_0;
        case 32: return VAR_1;
        case 64: return VAR_2;
        default: ;
        }
      break;

    case 132:
      switch (VAR_22)
        {
        case 8: return VAR_9;
        case 16: return VAR_6;
        case 32: return VAR_7;
        case 64: return VAR_8;
        default: ;
        }
      break;

    case 133:
      switch (VAR_22)
        {
        case 32: return VAR_4;
        case 64: return VAR_5;
        default: ;
        }
      break;

    case 131:
      switch (VAR_22)
        {
        case 8: return VAR_11;
        case 16: return VAR_10;
        default: ;
        }
      break;

    case 130:
      switch (VAR_22)
        {
        case 8: return VAR_15;
        case 16: return VAR_12;
        case 32: return VAR_13;
        case 64: return VAR_14;
        default: ;
        }
      break;

    case 129:
      switch (VAR_22)
        {
        case 8: return VAR_19;
        case 16: return VAR_16;
        case 32: return VAR_17;
        case 64: return VAR_18;
        default: ;
        }
      break;

    default: ;
    }

  return VAR_20;
}
