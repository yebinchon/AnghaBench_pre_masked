
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sbits32 ;
typedef int bits32 ;


 int FUNC_0 (int,int,int,int,int*,int*) ;
 int FUNC_1 (int,int,int*,int*) ;
 int FUNC_2 (int,int,int,int,int*,int*) ;

__attribute__((used)) static bits32 FUNC_3( bits32 VAR_0, bits32 VAR_1, bits32 VAR_2 )
{
    bits32 VAR_3, VAR_4;
    bits32 VAR_5, VAR_6, VAR_7, VAR_8;
    bits32 VAR_9;

    if ( VAR_2 <= VAR_0 ) return 0xFFFFFFFF;
    VAR_3 = VAR_2>>16;
    VAR_9 = ( VAR_3<<16 <= VAR_0 ) ? 0xFFFF0000 : ( VAR_0 / VAR_3 )<<16;
    FUNC_1( VAR_2, VAR_9, &VAR_7, &VAR_8 );
    FUNC_2( VAR_0, VAR_1, VAR_7, VAR_8, &VAR_5, &VAR_6 );
    while ( ( (sbits32) VAR_5 ) < 0 ) {
        VAR_9 -= 0x10000;
        VAR_4 = VAR_2<<16;
        FUNC_0( VAR_5, VAR_6, VAR_3, VAR_4, &VAR_5, &VAR_6 );
    }
    VAR_5 = ( VAR_5<<16 ) | ( VAR_6>>16 );
    VAR_9 |= ( VAR_3<<16 <= VAR_5 ) ? 0xFFFF : VAR_5 / VAR_3;
    return VAR_9;

}
