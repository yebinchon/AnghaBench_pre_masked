
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cnt0sel; int cnt1sel; int cnt2sel; int cnt3sel; } ;
union cvmx_l2c_tadx_prf {void* u64; TYPE_2__ s; } ;
struct TYPE_3__ {int cnt0sel; int cnt0ena; int cnt0rdclr; int cnt1sel; int cnt1ena; int cnt1rdclr; int cnt2sel; int cnt2ena; int cnt2rdclr; int cnt3sel; int cnt3ena; int cnt3rdclr; } ;
union cvmx_l2c_pfctl {void* u64; TYPE_1__ s; } ;
typedef int uint32_t ;
typedef enum cvmx_l2c_event { ____Placeholder_cvmx_l2c_event } cvmx_l2c_event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ,void*) ;

void FUNC_6(uint32_t VAR_4, enum cvmx_l2c_event VAR_5,
              uint32_t VAR_6)
{
    if (FUNC_1(VAR_3) || FUNC_1(VAR_2)) {
        union cvmx_l2c_pfctl VAR_7;

        VAR_7.u64 = FUNC_2(VAR_0);

        switch (VAR_4) {
        case 0:
            VAR_7.s.cnt0sel = VAR_5;
            VAR_7.s.cnt0ena = 1;
            VAR_7.s.cnt0rdclr = VAR_6;
            break;
        case 1:
            VAR_7.s.cnt1sel = VAR_5;
            VAR_7.s.cnt1ena = 1;
            VAR_7.s.cnt1rdclr = VAR_6;
            break;
        case 2:
            VAR_7.s.cnt2sel = VAR_5;
            VAR_7.s.cnt2ena = 1;
            VAR_7.s.cnt2rdclr = VAR_6;
            break;
        case 3:
        default:
            VAR_7.s.cnt3sel = VAR_5;
            VAR_7.s.cnt3ena = 1;
            VAR_7.s.cnt3rdclr = VAR_6;
            break;
        }

        FUNC_5(VAR_0, VAR_7.u64);
    } else {
        union cvmx_l2c_tadx_prf VAR_8;
        int VAR_9;

        FUNC_3("L2C performance counter events are different for this chip, mapping 'event' to cvmx_l2c_tad_event_t\n");

        FUNC_4(VAR_6, "L2C counters don't support clear on read for this chip\n");

        VAR_8.u64 = FUNC_2(FUNC_0(0));

        switch (VAR_4) {
        case 0:
            VAR_8.s.cnt0sel = VAR_5;
            break;
        case 1:
            VAR_8.s.cnt1sel = VAR_5;
            break;
        case 2:
            VAR_8.s.cnt2sel = VAR_5;
            break;
        default:
        case 3:
            VAR_8.s.cnt3sel = VAR_5;
            break;
        }
        for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
            FUNC_5(FUNC_0(VAR_9),
                       VAR_8.u64);
    }
}
