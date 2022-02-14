
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ event_source; } ;
typedef TYPE_1__ gdt_evt_str ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(int VAR_6, gdt_evt_str *VAR_7)
{
    gdt_evt_str *VAR_8;
    int VAR_9;

    FUNC_0(VAR_0, ("gdt_read_event(%d)\n", VAR_6));
    FUNC_2(&VAR_4);
    if (VAR_6 == -1)
        VAR_9 = VAR_5;
    else
        VAR_9 = VAR_6;
    VAR_7->event_source = 0;

    if (VAR_9 >= VAR_1) {
 FUNC_3(&VAR_4);
        return VAR_9;
    }
    VAR_8 = &VAR_2[VAR_9];
    if (VAR_8->event_source != 0) {
        if (VAR_9 != VAR_3) {
            if (++VAR_9 == VAR_1)
                VAR_9 = 0;
        } else {
            VAR_9 = -1;
        }
        FUNC_1(VAR_7, VAR_8, sizeof(gdt_evt_str));
    }
    FUNC_3(&VAR_4);
    return VAR_9;
}
