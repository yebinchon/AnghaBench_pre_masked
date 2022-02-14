
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ival; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* VAR_3 ;

int
FUNC_3()
{





    int VAR_4;

    while( (VAR_4=FUNC_0()) == ' ' ) { }



    if( FUNC_2( VAR_4 )) {
 VAR_3->ival = (VAR_4 - 'a');
 return ( VAR_1 );
    }
    if( FUNC_1( VAR_4 )) {
 VAR_3->ival = (VAR_4 - '0') % (*VAR_2);
 return ( VAR_0 );
    }
    return( VAR_4 );
}
