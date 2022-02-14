
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef int u_int16_t ;
struct TYPE_11__ {scalar_t__** ctl_freqbin_2G; scalar_t__** ctl_freqbin_5G; TYPE_4__* ctl_power_data_5g; TYPE_2__* ctl_power_data_2g; } ;
typedef TYPE_5__ ar9300_eeprom_t ;
struct TYPE_10__ {TYPE_3__* ctl_edges; } ;
struct TYPE_9__ {int t_power; scalar_t__ flag; } ;
struct TYPE_8__ {TYPE_1__* ctl_edges; } ;
struct TYPE_7__ {int t_power; scalar_t__ flag; } ;
typedef int HAL_BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static inline u_int16_t
FUNC_2(ar9300_eeprom_t *VAR_4, u_int16_t VAR_5,
    int VAR_6, HAL_BOOL VAR_7)
{
    u_int16_t VAR_8 = VAR_1;
    u_int8_t *VAR_9 = VAR_7 ?
        &VAR_4->ctl_freqbin_2G[VAR_6][0] :
        &VAR_4->ctl_freqbin_5G[VAR_6][0];
    u_int16_t VAR_10 = VAR_7 ?
        VAR_2 : VAR_3;
    int VAR_11;


    for (VAR_11 = 0; (VAR_11 < VAR_10) && (VAR_9[VAR_11] != VAR_0); VAR_11++)
    {




        if (VAR_5 == FUNC_1(VAR_9[VAR_11], VAR_7)) {
            if (VAR_7) {
                VAR_8 =
                    VAR_4->ctl_power_data_2g[VAR_6].ctl_edges[VAR_11].t_power;
            } else {
                VAR_8 =
                    VAR_4->ctl_power_data_5g[VAR_6].ctl_edges[VAR_11].t_power;
            }
            break;
        } else if ((VAR_11 > 0) && (VAR_5 < FUNC_1(VAR_9[VAR_11], VAR_7))) {
            if (VAR_7) {
                if (FUNC_1(VAR_9[VAR_11 - 1], 1) < VAR_5 &&
                    VAR_4->ctl_power_data_2g[VAR_6].ctl_edges[VAR_11 - 1].flag)
                {
                    VAR_8 =
                        VAR_4->ctl_power_data_2g[VAR_6].
                            ctl_edges[VAR_11 - 1].t_power;
                }
            } else {
                if (FUNC_1(VAR_9[VAR_11 - 1], 0) < VAR_5 &&
                    VAR_4->ctl_power_data_5g[VAR_6].ctl_edges[VAR_11 - 1].flag)
                {
                    VAR_8 =
                        VAR_4->ctl_power_data_5g[VAR_6].
                            ctl_edges[VAR_11 - 1].t_power;
                }
            }




            break;
        }
    }




    if (VAR_7 && (VAR_8 == 0)) {
        VAR_8 = 60;
    }

    FUNC_0(VAR_8 > 0);
    return VAR_8;
}
