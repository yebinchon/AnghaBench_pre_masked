
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ h_Profile; int h_DirectScheme; int action; } ;
typedef TYPE_1__ u_FmPcdPlcrNextEngineParams ;
struct TYPE_5__ {int absoluteProfileId; } ;
typedef TYPE_2__ t_FmPcdPlcrProfile ;
typedef int t_FmPcd ;
typedef int t_Error ;
typedef int e_FmPcdEngine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int FUNC_8 (int ,int ,char*) ;






__attribute__((used)) static t_Error FUNC_9(t_FmPcd *VAR_12, e_FmPcdEngine VAR_13, u_FmPcdPlcrNextEngineParams *VAR_14, uint32_t *VAR_15)
{
    uint32_t VAR_16;
    uint16_t VAR_17;
    uint8_t VAR_18, VAR_19;

    VAR_16 = VAR_5;

    switch (VAR_13)
    {
        case 132 :
            switch (VAR_14->action)
            {
                case 131 :
                    VAR_16 |= FUNC_4(VAR_12);
                    break;
                case 130:
                    VAR_16 |= FUNC_5(VAR_12);
                    break;
                default:
                    FUNC_8(VAR_6, VAR_0, VAR_11);
            }
            break;
        case 129:
            VAR_19 = FUNC_1(VAR_14->h_DirectScheme);
            VAR_18 = FUNC_0(VAR_12, VAR_19);
            if (VAR_18 >= VAR_4)
                FUNC_8(VAR_6, VAR_2, VAR_11);
            if (!FUNC_2(VAR_14->h_DirectScheme))
                FUNC_8(VAR_6, VAR_1, ("Invalid direct scheme."));
            if (!FUNC_7(VAR_12, VAR_18))
                FUNC_8(VAR_6, VAR_1, ("Policer Profile may point only to a scheme that is always direct."));
            VAR_16 |= VAR_7 | VAR_9 | VAR_19;
            break;
        case 128:
            VAR_17 = ((t_FmPcdPlcrProfile *)VAR_14->h_Profile)->absoluteProfileId;
            if (!FUNC_6(VAR_12, VAR_17))
                FUNC_8(VAR_6, VAR_1, ("Next profile must be a shared profile"));
            if (!FUNC_3(VAR_12, VAR_17))
                FUNC_8(VAR_6, VAR_1, ("Invalid profile "));
            VAR_16 |= VAR_8 | VAR_10 | VAR_17;
            break;
        default:
            FUNC_8(VAR_6, VAR_0, VAR_11);
    }

    *VAR_15 = VAR_16;

    return VAR_3;
}
