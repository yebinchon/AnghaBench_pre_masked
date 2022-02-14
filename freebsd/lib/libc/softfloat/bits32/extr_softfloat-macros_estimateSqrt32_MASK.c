
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbits32 ;
typedef size_t int8 ;
typedef int int16 ;
typedef int bits32 ;
typedef int bits16 ;


 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static bits32 FUNC_1( int16 VAR_0, bits32 VAR_1 )
{
    static const bits16 VAR_2[] = {
        0x0004, 0x0022, 0x005D, 0x00B1, 0x011D, 0x019F, 0x0236, 0x02E0,
        0x039C, 0x0468, 0x0545, 0x0631, 0x072B, 0x0832, 0x0946, 0x0A67
    };
    static const bits16 VAR_3[] = {
        0x0A2D, 0x08AF, 0x075A, 0x0629, 0x051A, 0x0429, 0x0356, 0x029E,
        0x0200, 0x0179, 0x0109, 0x00AF, 0x0068, 0x0034, 0x0012, 0x0002
    };
    int8 VAR_4;
    bits32 VAR_5;

    VAR_4 = ( VAR_1>>27 ) & 15;
    if ( VAR_0 & 1 ) {
        VAR_5 = 0x4000 + ( VAR_1>>17 ) - VAR_2[ VAR_4 ];
        VAR_5 = ( ( VAR_1 / VAR_5 )<<14 ) + ( VAR_5<<15 );
        VAR_1 >>= 1;
    }
    else {
        VAR_5 = 0x8000 + ( VAR_1>>17 ) - VAR_3[ VAR_4 ];
        VAR_5 = VAR_1 / VAR_5 + VAR_5;
        VAR_5 = ( 0x20000 <= VAR_5 ) ? 0xFFFF8000 : ( VAR_5<<15 );
        if ( VAR_5 <= VAR_1 ) return (bits32) ( ( (sbits32) VAR_1 )>>1 );
    }
    return ( ( FUNC_0( VAR_1, 0, VAR_5 ) )>>1 ) + ( VAR_5>>1 );

}
