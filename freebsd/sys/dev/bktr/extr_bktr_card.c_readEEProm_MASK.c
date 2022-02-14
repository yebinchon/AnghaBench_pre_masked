
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_2__* bktr_ptr_t ;
struct TYPE_6__ {int eepromAddr; int eepromSize; } ;
struct TYPE_7__ {TYPE_1__ card; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int,int,int) ;

int
FUNC_2( bktr_ptr_t VAR_1, int VAR_2, int VAR_3, u_char *VAR_4 )
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;


 VAR_6 = (int)(VAR_1->card.eepromAddr & 0xff);
 if ( VAR_6 == 0 )
  return( -1 );

 VAR_7 = (int)(VAR_1->card.eepromSize * VAR_0);
 if ( (VAR_2 + VAR_3) > VAR_7 )
  return( -1 );


 if ( FUNC_1( VAR_1, VAR_6, VAR_2, -1 ) == -1 )
  return( -1 );


 for ( VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5 ) {
  if ( (VAR_8 = FUNC_0( VAR_1, (VAR_6 | 1) )) == -1 )
   return( -1 );
  VAR_4[ VAR_5 ] = VAR_8;
 }

 return( 0 );
}
