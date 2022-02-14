
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int* VAR_2 ;

int
FUNC_3()
{





    int VAR_3;

    while( (VAR_3=FUNC_0()) == ' ' ) { }



    if( FUNC_2( VAR_3 )) {
 *VAR_2 = VAR_3 - 'a';
 return ( VAR_1 );
    }
    if( FUNC_1( VAR_3 )) {
 *VAR_2 = VAR_3 - '0';
 return ( VAR_0 );
    }
    return( VAR_3 );
}
