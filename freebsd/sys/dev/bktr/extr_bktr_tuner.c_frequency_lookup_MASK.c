
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bktr_ptr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0( bktr_ptr_t VAR_3, int VAR_4 )
{
 int VAR_5;


 VAR_5 = 0;
 if ( VAR_4 > VAR_1 )
  return( -1 );


 for ( VAR_5 = 3; VAR_1; VAR_5 += 3 ) {
  if ( VAR_4 >= VAR_1 ) {
   return( VAR_0 +
     ((VAR_4 - VAR_1) * VAR_2) );
  }
 }


 return( -1 );
}
