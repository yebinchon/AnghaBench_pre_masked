
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {scalar_t__ outlen; TYPE_3__** S; TYPE_2__* R; scalar_t__ buflen; int buf; } ;
typedef TYPE_1__ blake2bp_state ;
struct TYPE_7__ {int last_node; } ;
struct TYPE_6__ {int last_node; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,scalar_t__,int ,size_t) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3( blake2bp_state *VAR_2, size_t VAR_3 )
{
  if( !VAR_3 || VAR_3 > VAR_0 ) return -1;

  FUNC_2( VAR_2->buf, 0, sizeof( VAR_2->buf ) );
  VAR_2->buflen = 0;

  if( FUNC_1( VAR_2->R, ( uint8_t ) VAR_3, 0 ) < 0 )
    return -1;

  for( size_t VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4 )
    if( FUNC_0( VAR_2->S[VAR_4], ( uint8_t ) VAR_3, 0, VAR_4 ) < 0 ) return -1;

  VAR_2->R->last_node = 1;
  VAR_2->S[VAR_1 - 1]->last_node = 1;
  VAR_2->outlen = ( uint8_t ) VAR_3;
  return 0;
}
