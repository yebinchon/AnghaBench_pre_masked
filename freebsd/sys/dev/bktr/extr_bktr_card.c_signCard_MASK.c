
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int bktr_ptr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;

int
FUNC_1( bktr_ptr_t VAR_1, int VAR_2, int VAR_3, u_char* VAR_4 )
{
 int VAR_5;

 for ( VAR_5 = 0; VAR_5 < 16; ++VAR_5 )
  VAR_4[ VAR_5 ] = 0;

 for ( VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5 ) {
  if ( FUNC_0( VAR_1, (2 * VAR_5) + 1 ) != VAR_0 ) {
   VAR_4[ VAR_5 / 8 ] |= (1 << (VAR_5 % 8) );
  }
 }

 return( 0 );
}
