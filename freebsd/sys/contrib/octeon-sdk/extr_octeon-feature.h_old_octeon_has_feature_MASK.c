
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int octeon_feature_t ;
struct TYPE_5__ {int eer_val; } ;
struct TYPE_7__ {TYPE_1__ s; void* u64; } ;
typedef TYPE_3__ cvmx_rnm_ctl_status_t ;
struct TYPE_6__ {int dorm_crypto; int nomul; int nocrypto; } ;
struct TYPE_8__ {TYPE_2__ s; void* u64; } ;
typedef TYPE_4__ cvmx_mio_fus_dat2_t ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(octeon_feature_t VAR_21)
{
    switch (VAR_21)
    {
        case 132:
            return !FUNC_0(VAR_6);

        case 128:
            if (FUNC_0(VAR_3) || FUNC_0(VAR_7) || FUNC_0(VAR_8))
                return 0;
            else
                return !FUNC_1(121);

        case 150:
     if (FUNC_0(VAR_18) || FUNC_0(VAR_20)) {
                cvmx_mio_fus_dat2_t VAR_22;
                VAR_22 = FUNC_2(VAR_0);
                if (VAR_22 || VAR_22) {
                    return 0;
                } else if (!VAR_22) {
                    return 1;
                } else {
                    cvmx_rnm_ctl_status_t VAR_23;
                    VAR_23.u64 = FUNC_2(VAR_1);
                    return VAR_23.s.eer_val;
                }
            } else {
                return !FUNC_1(90);
            }

        case 146:
            if (FUNC_0(VAR_18) || FUNC_0(VAR_20)) {
                cvmx_mio_fus_dat2_t VAR_24;
                VAR_24 = FUNC_2(VAR_0);
                return !VAR_24 && !VAR_24 && VAR_24;
            } else {
                return 0;
            }

        case 135:
            return (FUNC_0(VAR_10)
                    || FUNC_0(VAR_8)
                    || FUNC_0(VAR_18)
                    || FUNC_0(VAR_20));

 case 131:
     return (FUNC_0(VAR_14) || FUNC_0(VAR_15));

 case 144:
     return (FUNC_0(VAR_16));

        case 143:
            return (FUNC_0(VAR_5)
                    || FUNC_0(VAR_12)
                    || FUNC_0(VAR_10)
                    || FUNC_0(VAR_18)
                    || FUNC_0(VAR_20));

        case 142:
            return FUNC_0(VAR_5) || FUNC_0(VAR_12) || FUNC_0(VAR_10);

        case 130:
            return !(FUNC_0(VAR_3) || FUNC_0(VAR_7));
        case 140:
            return (FUNC_0(VAR_10)
                    || FUNC_0(VAR_8)
                    || FUNC_0(VAR_18));

        case 133:
            return FUNC_0(VAR_10) || FUNC_0(VAR_8) || FUNC_0(VAR_18);

        case 129:
            return !(FUNC_0(VAR_5) || FUNC_0(VAR_12));

        case 137:
            return ((FUNC_0(VAR_10)
                     || FUNC_0(VAR_8)
                     || FUNC_0(VAR_18)
                     || FUNC_0(VAR_20))
                    && !FUNC_0(VAR_11)
                    && !FUNC_0(VAR_9));

        case 149:
            if (!FUNC_0(VAR_5) && !FUNC_0(VAR_4) && !FUNC_0(VAR_12))
                return 0;
            else if (FUNC_0(VAR_2))
                return 0;
            else
                return !FUNC_1(120);

        case 145:
            if (!FUNC_0(VAR_18))
                return 0;
            else
                return !FUNC_1(90);

        case 148:
            if (!(FUNC_0(VAR_14) || FUNC_0(VAR_15)))
                return 0;
            else
                return !FUNC_1(90);

        case 141:
            return !(FUNC_0(VAR_6) || FUNC_0(VAR_12) || FUNC_0(VAR_7));

        case 136:
            return (FUNC_0(VAR_10) || FUNC_0(VAR_8));

        case 134:
            return (FUNC_0(VAR_16));

        case 151:
            return (FUNC_0(VAR_16));

        case 152:
            return (FUNC_0(VAR_16));

        case 138:
            return (FUNC_0(VAR_8)
                    || FUNC_0(VAR_14)
                    || FUNC_0(VAR_15)
                    || FUNC_0(VAR_16));

        case 147:
            return (FUNC_0(VAR_17)
                    || FUNC_0(VAR_13)
                    || FUNC_0(VAR_19));

        case 153:
            return (FUNC_0(VAR_17)
                    || FUNC_0(VAR_13)
                    || FUNC_0(VAR_19));

        case 139:
            return (FUNC_0(VAR_13)
      || FUNC_0(VAR_19));
        default:
     break;
    }
    return 0;
}
