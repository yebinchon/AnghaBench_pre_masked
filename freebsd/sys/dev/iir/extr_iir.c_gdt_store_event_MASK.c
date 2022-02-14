
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct timeval {int tv_sec; } ;
struct TYPE_6__ {scalar_t__ size; int event_string; int eu; } ;
struct TYPE_5__ {scalar_t__ event_source; scalar_t__ event_idx; int same_count; scalar_t__ application; TYPE_2__ event_data; int last_stamp; int first_stamp; } ;
typedef TYPE_1__ gdt_evt_str ;
typedef TYPE_2__ gdt_evt_data ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (char*,char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;

void FUNC_6(u_int16_t VAR_6, u_int16_t VAR_7,
                             gdt_evt_data *VAR_8)
{
    gdt_evt_str *VAR_9;
    struct timeval VAR_10;

    FUNC_0(VAR_0, ("gdt_store_event(%d, %d)\n", VAR_6, VAR_7));
    if (VAR_6 == 0)
        return;

    FUNC_3(&VAR_4);
    if (VAR_2[VAR_3].event_source == VAR_6 &&
        VAR_2[VAR_3].event_idx == VAR_7 &&
        ((VAR_8->size != 0 && VAR_2[VAR_3].event_data.size != 0 &&
          !FUNC_2((char *)&VAR_2[VAR_3].event_data.eu,
                  (char *)&VAR_8->eu, VAR_8->size)) ||
         (VAR_8->size == 0 && VAR_2[VAR_3].event_data.size == 0 &&
          !FUNC_5((char *)&VAR_2[VAR_3].event_data.event_string,
                  (char *)&VAR_8->event_string)))) {
        VAR_9 = &VAR_2[VAR_3];
        FUNC_1(&VAR_10);
        VAR_9->last_stamp = VAR_10.tv_sec;
        ++VAR_9->same_count;
    } else {
        if (VAR_2[VAR_3].event_source != 0) {
            ++VAR_3;
            if (VAR_3 == VAR_1)
                VAR_3 = 0;
            if (VAR_3 == VAR_5) {
                ++VAR_5;
                if (VAR_5 == VAR_1)
                    VAR_5 = 0;
            }
        }
        VAR_9 = &VAR_2[VAR_3];
        VAR_9->event_source = VAR_6;
        VAR_9->event_idx = VAR_7;
        FUNC_1(&VAR_10);
        VAR_9->first_stamp = VAR_9->last_stamp = VAR_10.tv_sec;
        VAR_9->same_count = 1;
        VAR_9->event_data = *VAR_8;
        VAR_9->application = 0;
    }
    FUNC_4(&VAR_4);
}
