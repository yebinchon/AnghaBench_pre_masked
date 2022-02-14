
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t buflen; unsigned char const* buf; int * S; } ;
typedef TYPE_1__ blake2sp_state ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,unsigned char const*,size_t) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,size_t) ;
 size_t FUNC_2 () ;

int FUNC_3( blake2sp_state *VAR_2, const void *VAR_3, size_t VAR_4 )
{
  const unsigned char * VAR_5 = (const unsigned char *)VAR_3;
  size_t VAR_6 = VAR_2->buflen;
  size_t VAR_7 = sizeof( VAR_2->buf ) - VAR_6;
  size_t VAR_8;

  if( VAR_6 && VAR_4 >= VAR_7 )
  {
    FUNC_1( VAR_2->buf + VAR_6, VAR_5, VAR_7 );

    for( VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8 )
      FUNC_0( VAR_2->S[VAR_8], VAR_2->buf + VAR_8 * VAR_0, VAR_0 );

    VAR_5 += VAR_7;
    VAR_4 -= VAR_7;
    VAR_6 = 0;
  }




  for( VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8 )

  {



    size_t VAR_9 = VAR_4;
    const unsigned char *VAR_10 = ( const unsigned char * )VAR_5;
    VAR_10 += VAR_8 * VAR_0;

    while( VAR_9 >= VAR_1 * VAR_0 )
    {
      FUNC_0( VAR_2->S[VAR_8], VAR_10, VAR_0 );
      VAR_10 += VAR_1 * VAR_0;
      VAR_9 -= VAR_1 * VAR_0;
    }
  }

  VAR_5 += VAR_4 - VAR_4 % ( VAR_1 * VAR_0 );
  VAR_4 %= VAR_1 * VAR_0;

  if( VAR_4 > 0 )
    FUNC_1( VAR_2->buf + VAR_6, VAR_5, VAR_4 );

  VAR_2->buflen = VAR_6 + VAR_4;
  return 0;
}
