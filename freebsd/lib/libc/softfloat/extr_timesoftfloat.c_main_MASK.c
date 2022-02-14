
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8 ;
typedef int int8 ;
typedef int flag ;
struct TYPE_2__ {char* name; int numInputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (size_t,int,int,int) ;

FUNC_4( int VAR_12, char **VAR_13 )
{
    char *VAR_14;
    flag VAR_15;
    uint8 VAR_16;
    int8 VAR_17, VAR_18, VAR_19, VAR_20;

    if ( VAR_12 <= 1 ) goto writeHelpMessage;
    VAR_15 = VAR_1;
    VAR_16 = 0;
    VAR_17 = 0;
    VAR_18 = 0;
    VAR_19 = 0;
    VAR_20 = 0;
    --VAR_12;
    ++VAR_13;
    while ( VAR_12 && ( VAR_14 = VAR_13[ 0 ] ) ) {
        if ( VAR_14[ 0 ] == '-' ) ++VAR_14;
        if ( FUNC_2( VAR_14, "help" ) == 0 ) {
 writeHelpMessage:
            FUNC_1(
"timesoftfloat [<option>...] <function>\n"
"  <option>:  (* is default)\n"
"    -help            --Write this message and exit.\n"





"    -nearesteven     --Only time rounding to nearest/even.\n"
"    -tozero          --Only time rounding to zero.\n"
"    -down            --Only time rounding down.\n"
"    -up              --Only time rounding up.\n"
"    -tininessbefore  --Only time underflow tininess before rounding.\n"
"    -tininessafter   --Only time underflow tininess after rounding.\n"
"  <function>:\n"
"    int32_to_<float>                 <float>_add   <float>_eq\n"
"    <float>_to_int32                 <float>_sub   <float>_le\n"
"    <float>_to_int32_round_to_zero   <float>_mul   <float>_lt\n"
"    int64_to_<float>                 <float>_div   <float>_eq_signaling\n"
"    <float>_to_int64                 <float>_rem   <float>_le_quiet\n"
"    <float>_to_int64_round_to_zero                 <float>_lt_quiet\n"
"    <float>_to_<float>\n"
"    <float>_round_to_int\n"
"    <float>_sqrt\n"
"    -all1            --All 1-operand functions.\n"
"    -all2            --All 2-operand functions.\n"
"    -all             --All functions.\n"
"  <float>:\n"
"    float32          --Single precision.\n"
"    float64          --Double precision.\n"






                ,
                VAR_11
            );
            return VAR_0;
        }
        else if ( ( FUNC_2( VAR_14, "nearesteven" ) == 0 )
                  || ( FUNC_2( VAR_14, "nearest_even" ) == 0 ) ) {
            VAR_19 = VAR_4;
        }
        else if ( ( FUNC_2( VAR_14, "tozero" ) == 0 )
                  || ( FUNC_2( VAR_14, "to_zero" ) == 0 ) ) {
            VAR_19 = VAR_5;
        }
        else if ( FUNC_2( VAR_14, "down" ) == 0 ) {
            VAR_19 = VAR_3;
        }
        else if ( FUNC_2( VAR_14, "up" ) == 0 ) {
            VAR_19 = VAR_6;
        }
        else if ( FUNC_2( VAR_14, "tininessbefore" ) == 0 ) {
            VAR_20 = VAR_8;
        }
        else if ( FUNC_2( VAR_14, "tininessafter" ) == 0 ) {
            VAR_20 = VAR_7;
        }
        else if ( FUNC_2( VAR_14, "all1" ) == 0 ) {
            VAR_15 = VAR_9;
            VAR_16 = 0;
            VAR_17 = 1;
        }
        else if ( FUNC_2( VAR_14, "all2" ) == 0 ) {
            VAR_15 = VAR_9;
            VAR_16 = 0;
            VAR_17 = 2;
        }
        else if ( FUNC_2( VAR_14, "all" ) == 0 ) {
            VAR_15 = VAR_9;
            VAR_16 = 0;
            VAR_17 = 0;
        }
        else {
            for ( VAR_16 = 1;
                  VAR_16 < VAR_2;
                  ++VAR_16
                ) {
                if ( FUNC_2( VAR_14, VAR_10[ VAR_16 ].name ) == 0 ) {
                    break;
                }
            }
            if ( VAR_16 == VAR_2 ) {
                FUNC_0( "Invalid option or function `%s'", VAR_13[ 0 ] );
            }
            VAR_15 = VAR_9;
        }
        --VAR_12;
        ++VAR_13;
    }
    if ( ! VAR_15 ) FUNC_0( "Function argument required" );
    if ( VAR_16 ) {
        FUNC_3(
            VAR_16, VAR_18, VAR_19, VAR_20 );
    }
    else if ( VAR_17 == 1 ) {
        for ( VAR_16 = 1; VAR_16 < VAR_2; ++VAR_16
            ) {
            if ( VAR_10[ VAR_16 ].numInputs == 1 ) {
                FUNC_3(
                    VAR_16, VAR_18, VAR_19, VAR_20
                );
            }
        }
    }
    else if ( VAR_17 == 2 ) {
        for ( VAR_16 = 1; VAR_16 < VAR_2; ++VAR_16
            ) {
            if ( VAR_10[ VAR_16 ].numInputs == 2 ) {
                FUNC_3(
                    VAR_16, VAR_18, VAR_19, VAR_20
                );
            }
        }
    }
    else {
        for ( VAR_16 = 1; VAR_16 < VAR_2; ++VAR_16
            ) {
            FUNC_3(
                VAR_16, VAR_18, VAR_19, VAR_20 );
        }
    }
    return VAR_0;

}
