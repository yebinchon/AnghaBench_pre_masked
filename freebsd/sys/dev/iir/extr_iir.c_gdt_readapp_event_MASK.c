
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_6__ {scalar_t__ event_source; int application; } ;
typedef TYPE_1__ gdt_evt_str ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(u_int8_t VAR_8, gdt_evt_str *VAR_9)
{
    gdt_evt_str *VAR_10;
    int VAR_11 = VAR_0;
    int VAR_12;

    FUNC_0(VAR_1, ("gdt_readapp_event(%d)\n", VAR_8));
    FUNC_2(&VAR_6);
    VAR_12 = VAR_7;
    for (;;) {
        VAR_10 = &VAR_4[VAR_12];
        if (VAR_10->event_source == 0)
            break;
        if ((VAR_10->application & VAR_8) == 0) {
            VAR_10->application |= VAR_8;
            VAR_11 = VAR_3;
            break;
        }
        if (VAR_12 == VAR_5)
            break;
        if (++VAR_12 == VAR_2)
            VAR_12 = 0;
    }
    if (VAR_11)
        FUNC_1(VAR_9, VAR_10, sizeof(gdt_evt_str));
    else
        VAR_9->event_source = 0;
    FUNC_3(&VAR_6);
}
