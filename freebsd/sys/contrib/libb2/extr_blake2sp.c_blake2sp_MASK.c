
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_6__ {int last_node; } ;
typedef TYPE_1__ blake2s_state ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int const*,size_t) ;
 int FUNC_1 (TYPE_1__*,int const*,size_t const) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int const,int const,size_t) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int const,int const) ;
 int FUNC_4 (int const*,void const*,size_t) ;
 int FUNC_5 (int const*,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int const*,int) ;

int FUNC_9( uint8_t *VAR_4, const void *VAR_5, const void *VAR_6, size_t VAR_7, size_t VAR_8, size_t VAR_9 )
{
  uint8_t VAR_10[VAR_3][VAR_2];
  blake2s_state VAR_11[VAR_3][1];
  blake2s_state VAR_12[1];


  if ( ((void*)0) == VAR_5 && VAR_8 > 0 ) return -1;

  if ( ((void*)0) == VAR_4 ) return -1;

  if ( ((void*)0) == VAR_6 && VAR_9 > 0 ) return -1;

  if( !VAR_7 || VAR_7 > VAR_2 ) return -1;

  if( VAR_9 > VAR_1 ) return -1;

  for( size_t VAR_13 = 0; VAR_13 < VAR_3; ++VAR_13 )
    if( FUNC_2( VAR_11[VAR_13], ( uint8_t ) VAR_7, ( uint8_t ) VAR_9, VAR_13 ) < 0 )
      return -1;

  VAR_11[VAR_3 - 1]->last_node = 1;

  if( VAR_9 > 0 )
  {
    uint8_t VAR_14[VAR_0];
    FUNC_5( VAR_14, 0, VAR_0 );
    FUNC_4( VAR_14, VAR_6, VAR_9 );

    for( size_t VAR_15 = 0; VAR_15 < VAR_3; ++VAR_15 )
      FUNC_1( VAR_11[VAR_15], VAR_14, VAR_0 );

    FUNC_8( VAR_14, VAR_0 );
  }






  for( size_t VAR_16 = 0; VAR_16 < VAR_3; ++VAR_16 )

  {



    size_t VAR_17 = VAR_8;
    const uint8_t *VAR_18 = ( const uint8_t * )VAR_5;
    VAR_18 += VAR_16 * VAR_0;

    while( VAR_17 >= VAR_3 * VAR_0 )
    {
      FUNC_1( VAR_11[VAR_16], VAR_18, VAR_0 );
      VAR_18 += VAR_3 * VAR_0;
      VAR_17 -= VAR_3 * VAR_0;
    }

    if( VAR_17 > VAR_16 * VAR_0 )
    {
      const size_t VAR_19 = VAR_17 - VAR_16 * VAR_0;
      const size_t VAR_20 = VAR_19 <= VAR_0 ? VAR_19 : VAR_0;
      FUNC_1( VAR_11[VAR_16], VAR_18, VAR_20 );
    }

    FUNC_0( VAR_11[VAR_16], VAR_10[VAR_16], VAR_2 );
  }

  if( FUNC_3( VAR_12, ( uint8_t ) VAR_7, ( uint8_t ) VAR_9 ) < 0 )
    return -1;

  VAR_12->last_node = 1;

  for( size_t VAR_21 = 0; VAR_21 < VAR_3; ++VAR_21 )
    FUNC_1( VAR_12, VAR_10[VAR_21], VAR_2 );

  return FUNC_0( VAR_12, VAR_4, VAR_7 );
}
