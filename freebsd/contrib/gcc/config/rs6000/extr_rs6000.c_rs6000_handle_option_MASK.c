
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int aix_struct_ret; int isel; int spe; int abi; int ieee; int float_gprs; int long_double; int alignment; } ;
struct TYPE_3__ {char const* string; } ;


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
 int FUNC_0 (char*,char const*) ;
 char const* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 char const* VAR_24 ;
 TYPE_2__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (char*,char const*,int *) ;
 char const* VAR_30 ;
 char const* VAR_31 ;
 char const* VAR_32 ;
 TYPE_1__* VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 char const* VAR_36 ;
 char const* VAR_37 ;
 int FUNC_2 (char const*,char*) ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static bool
FUNC_4 (size_t VAR_40, const char *VAR_41, int VAR_42)
{
  switch (VAR_40)
    {
    case 144:
      VAR_38 &= ~(VAR_6 | VAR_7
   | VAR_5 | VAR_13);
      VAR_39 |= (VAR_6 | VAR_7
    | VAR_5 | VAR_13);
      break;
    case 143:
      VAR_38 &= ~(VAR_8 | VAR_11
   | VAR_10 | VAR_9);
      VAR_39 |= (VAR_8 | VAR_11
    | VAR_10 | VAR_9);
      break;
    case 149:
      VAR_38 &= ~VAR_4;
      VAR_17 = 0;
      VAR_18 = 0;
      VAR_39 |= VAR_4;






      break;
    case 159:

      VAR_38 |= VAR_9 | VAR_8;
      VAR_38 |= ~VAR_39 & VAR_10;
      VAR_39 |= VAR_9 | VAR_8;
      break;




    case 160:

      VAR_38 &= ~VAR_9;
      VAR_39 |= VAR_9;
      break;

    case 148:
      VAR_31 = VAR_41;
      break;

    case 145:
      if (VAR_42 == 1)
 {
   VAR_17 = 0;
   VAR_18 = 0;
 }
      break;

    case 142:
      if (VAR_42 == 1)
 {
   VAR_38 |= (VAR_5 | VAR_13);
   VAR_39 |= (VAR_5 | VAR_13);
 }
      break;

    case 141:
      if (VAR_42 == 1)
 {
   VAR_38 |= (VAR_6 | VAR_5 | VAR_13);
   VAR_39 |= (VAR_6 | VAR_5 | VAR_13);
 }
      break;

    case 139:
    case 140:
      if (VAR_42 == 1)
 {
   VAR_38 |= VAR_8;
   VAR_39 |= VAR_8;
 }
      break;

    case 155:
    case 133:
      VAR_25.aix_struct_ret = 1;
      break;

    case 128:
      FUNC_1 ("vrsave", VAR_41, &(VAR_16));
      break;

    case 147:
      VAR_25.isel = 1;
      FUNC_1 ("isel", VAR_41, &(VAR_28));
      break;

    case 134:
      VAR_25.spe = 1;
      FUNC_1 ("spe", VAR_41, &(VAR_34));

      if (!VAR_34)
 VAR_29 = 64;
      break;

    case 151:
      VAR_24 = VAR_41;
      break;
    case 158:
      if (!FUNC_2 (VAR_41, "altivec"))
 {
   VAR_25.abi = 1;
   VAR_22 = 1;
   VAR_35 = 0;
 }
      else if (! FUNC_2 (VAR_41, "no-altivec"))
 {


   VAR_22 = 0;
 }
      else if (! FUNC_2 (VAR_41, "spe"))
 {
   VAR_25.abi = 1;
   VAR_35 = 1;
   VAR_22 = 0;
   if (!VAR_19)
     FUNC_0 ("not configured for ABI: '%s'", VAR_41);
 }
      else if (! FUNC_2 (VAR_41, "no-spe"))
 {
   VAR_25.abi = 1;
   VAR_35 = 0;
 }



      else if (! FUNC_2 (VAR_41, "d64"))
 {
   VAR_23 = 1;
   FUNC_3 (0, "Using darwin64 ABI");
 }
      else if (! FUNC_2 (VAR_41, "d32"))
 {
   VAR_23 = 0;
   FUNC_3 (0, "Using old darwin ABI");
 }

      else if (! FUNC_2 (VAR_41, "ibmlongdouble"))
 {
   VAR_25.ieee = 1;
   VAR_27 = 0;
   FUNC_3 (0, "Using IBM extended precision long double");
 }
      else if (! FUNC_2 (VAR_41, "ieeelongdouble"))
 {
   VAR_25.ieee = 1;
   VAR_27 = 1;
   FUNC_3 (0, "Using IEEE extended precision long double");
 }

      else
 {
   FUNC_0 ("unknown ABI specified: '%s'", VAR_41);
   return 0;
 }
      break;

    case 152:
      VAR_33[1].string = VAR_41;
      break;

    case 129:
      VAR_33[2].string = VAR_41;
      break;

    case 130:
      VAR_37 = VAR_41;
      break;

    case 150:
      VAR_25.float_gprs = 1;
      if (! FUNC_2 (VAR_41, "yes") || ! FUNC_2 (VAR_41, "single"))
 VAR_26 = 1;
      else if (! FUNC_2 (VAR_41, "double"))
 VAR_26 = 2;
      else if (! FUNC_2 (VAR_41, "no"))
 VAR_26 = 0;
      else
 {
   FUNC_0 ("invalid option for -mfloat-gprs: '%s'", VAR_41);
   return 0;
 }
      break;

    case 146:
      VAR_25.long_double = 1;
      VAR_29 = VAR_14;
      if (VAR_42 != 64 && VAR_42 != 128)
 {
   FUNC_0 ("Unknown switch -mlong-double-%s", VAR_41);
   VAR_29 = VAR_14;
   return 0;
 }
      else
 VAR_29 = VAR_42;
      break;

    case 136:
      VAR_30 = VAR_41;
      break;

    case 154:
      VAR_25.alignment = 1;
      if (! FUNC_2 (VAR_41, "power"))
 {




   if (VAR_1 == VAR_0 && VAR_15)
     FUNC_3 (0, "-malign-power is not supported for 64-bit Darwin;"
       " it is incompatible with the installed C and C++ libraries");
   VAR_21 = VAR_3;
 }
      else if (! FUNC_2 (VAR_41, "natural"))
 VAR_21 = VAR_2;
      else
 {
   FUNC_0 ("unknown -malign-XXXXX option specified: '%s'", VAR_41);
   return 0;
 }
      break;
    }
  return 1;
}
