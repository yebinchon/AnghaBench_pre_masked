
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* bktr_ptr_t ;
struct TYPE_6__ {int channel; } ;
struct TYPE_7__ {TYPE_1__ tuner; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,int ) ;

int
FUNC_2( bktr_ptr_t VAR_1, int VAR_2 )
{
 int VAR_3;


 if ( (VAR_3 = FUNC_0( VAR_1, VAR_2 )) < 0 )
  return( -1 );


 if ( FUNC_1( VAR_1, VAR_3, VAR_0 ) < 0 )
  return( -1 );


 return( (VAR_1->tuner.channel = VAR_2) );
}
