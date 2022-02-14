
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_3__ {size_t buflen; int const* buf; int * S; } ;
typedef TYPE_1__ blake2sp_state ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int const*,size_t) ;
 int FUNC_1 (int const*,int const*,size_t) ;
 int FUNC_2 () ;
 int FUNC_3 (size_t) ;

int FUNC_4( blake2sp_state *VAR_2, const uint8_t *VAR_3, size_t VAR_4 )
{
  size_t VAR_5 = VAR_2->buflen;
  size_t VAR_6 = sizeof( VAR_2->buf ) - VAR_5;

  if( VAR_5 && VAR_4 >= VAR_6 )
  {
    FUNC_1( VAR_2->buf + VAR_5, VAR_3, VAR_6 );

    for( size_t VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7 )
      FUNC_0( VAR_2->S[VAR_7], VAR_2->buf + VAR_7 * VAR_0, VAR_0 );

    VAR_3 += VAR_6;
    VAR_4 -= VAR_6;
    VAR_5 = 0;
  }





  for( size_t VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8 )

  {



    size_t VAR_9 = VAR_4;
    const uint8_t *VAR_10 = ( const uint8_t * )VAR_3;
    VAR_10 += VAR_8 * VAR_0;

    while( VAR_9 >= VAR_1 * VAR_0 )
    {
      FUNC_0( VAR_2->S[VAR_8], VAR_10, VAR_0 );
      VAR_10 += VAR_1 * VAR_0;
      VAR_9 -= VAR_1 * VAR_0;
    }
  }

  VAR_3 += VAR_4 - VAR_4 % ( VAR_1 * VAR_0 );
  VAR_4 %= VAR_1 * VAR_0;

  if( VAR_4 > 0 )
    FUNC_1( VAR_2->buf + VAR_5, VAR_3, VAR_4 );

  VAR_2->buflen = ( uint32_t ) VAR_5 + ( uint32_t ) VAR_4;
  return 0;
}
