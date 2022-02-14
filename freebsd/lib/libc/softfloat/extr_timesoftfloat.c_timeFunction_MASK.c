
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8 ;
typedef int int8 ;
struct TYPE_2__ {int tininessMode; int tininessModeAtReducedPrecision; int roundingMode; int roundingPrecision; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (size_t,int,int,int) ;

__attribute__((used)) static void
 FUNC_1(
     uint8 VAR_3,
     int8 VAR_4,
     int8 VAR_5,
     int8 VAR_6
 )
{
    int8 VAR_7, VAR_8, VAR_9;

    VAR_7 = 32;
    for (;;) {
        if ( ! VAR_2[ VAR_3 ].roundingPrecision ) {
            VAR_7 = 0;
        }
        else if ( VAR_4 ) {
            VAR_7 = VAR_4;
        }
        for ( VAR_8 = 1;
              VAR_8 < VAR_0;
              ++VAR_8
            ) {
            if ( ! VAR_2[ VAR_3 ].roundingMode ) {
                VAR_8 = 0;
            }
            else if ( VAR_5 ) {
                VAR_8 = VAR_5;
            }
            for ( VAR_9 = 1;
                  VAR_9 < VAR_1;
                  ++VAR_9
                ) {
                if ( ( VAR_7 == 32 )
                     || ( VAR_7 == 64 ) ) {
                    if ( ! VAR_2[ VAR_3 ]
                               .tininessModeAtReducedPrecision
                       ) {
                        VAR_9 = 0;
                    }
                    else if ( VAR_6 ) {
                        VAR_9 = VAR_6;
                    }
                }
                else {
                    if ( ! VAR_2[ VAR_3 ].tininessMode ) {
                        VAR_9 = 0;
                    }
                    else if ( VAR_6 ) {
                        VAR_9 = VAR_6;
                    }
                }
                FUNC_0(
                    VAR_3, VAR_7, VAR_8, VAR_9
                );
                if ( VAR_6 || ! VAR_9 ) break;
            }
            if ( VAR_5 || ! VAR_8 ) break;
        }
        if ( VAR_4 || ! VAR_7 ) break;
        if ( VAR_7 == 80 ) {
            break;
        }
        else if ( VAR_7 == 64 ) {
            VAR_7 = 80;
        }
        else if ( VAR_7 == 32 ) {
            VAR_7 = 64;
        }
    }

}
