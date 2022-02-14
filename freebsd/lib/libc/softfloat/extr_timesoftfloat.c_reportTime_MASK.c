
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float int32 ;


 float VAR_0 ;
 int FUNC_0 (char,int ) ;
 int FUNC_1 (char*,int ) ;
 char* VAR_1 ;
 int FUNC_2 (char*,float,char*) ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;

__attribute__((used)) static void FUNC_3( int32 VAR_6, long VAR_7 )
{

    FUNC_2(
        "%8.1f kops/s: %s",
        ( VAR_6 / ( ( (float) VAR_7 ) / VAR_0 ) ) / 1000,
        VAR_1
    );
    if ( VAR_2 ) {
        if ( VAR_3 ) {
            FUNC_1( ", precision ", VAR_4 );
            FUNC_1( VAR_3, VAR_4 );
        }
        FUNC_1( ", rounding ", VAR_4 );
        FUNC_1( VAR_2, VAR_4 );
        if ( VAR_5 ) {
            FUNC_1( ", tininess ", VAR_4 );
            FUNC_1( VAR_5, VAR_4 );
            FUNC_1( " rounding", VAR_4 );
        }
    }
    FUNC_0( '\n', VAR_4 );

}
