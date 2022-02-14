
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {TYPE_3__** S; scalar_t__ outlen; TYPE_2__* R; scalar_t__ buflen; scalar_t__* buf; } ;
typedef TYPE_1__ blake2sp_state ;
struct TYPE_8__ {int last_node; } ;
struct TYPE_7__ {int last_node; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_3__*,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__,scalar_t__,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__*,void const*,size_t) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 int FUNC_5 (scalar_t__*,int) ;

int FUNC_6( blake2sp_state *VAR_4, size_t VAR_5, const void *VAR_6, size_t VAR_7 )
{
  if( !VAR_5 || VAR_5 > VAR_2 ) return -1;

  if( !VAR_6 || !VAR_7 || VAR_7 > VAR_1 ) return -1;

  FUNC_4( VAR_4->buf, 0, sizeof( VAR_4->buf ) );
  VAR_4->buflen = 0;

  if( FUNC_2( VAR_4->R, ( uint8_t ) VAR_5, ( uint8_t ) VAR_7 ) < 0 )
    return -1;

  for( size_t VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8 )
    if( FUNC_1( VAR_4->S[VAR_8], ( uint8_t ) VAR_5, ( uint8_t ) VAR_7, VAR_8 ) < 0 )
      return -1;

  VAR_4->R->last_node = 1;
  VAR_4->S[VAR_3 - 1]->last_node = 1;
  VAR_4->outlen = ( uint8_t ) VAR_5;
  {
    uint8_t VAR_9[VAR_0];
    FUNC_4( VAR_9, 0, VAR_0 );
    FUNC_3( VAR_9, VAR_6, VAR_7 );

    for( size_t VAR_10 = 0; VAR_10 < VAR_3; ++VAR_10 )
      FUNC_0( VAR_4->S[VAR_10], VAR_9, VAR_0 );

    FUNC_5( VAR_9, VAR_0 );
  }
  return 0;
}
