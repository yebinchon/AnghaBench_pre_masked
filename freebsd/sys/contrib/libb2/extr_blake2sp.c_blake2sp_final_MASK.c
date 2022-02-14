
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t outlen; size_t buflen; int R; int * S; int * buf; } ;
typedef TYPE_1__ blake2sp_state ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,size_t) ;
 int FUNC_1 (int ,int *,int) ;

int FUNC_2( blake2sp_state *VAR_3, uint8_t *VAR_4, size_t VAR_5 )
{
  uint8_t VAR_6[VAR_2][VAR_1];

  if(VAR_3->outlen != VAR_5) return -1;

  for( size_t VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7 )
  {
    if( VAR_3->buflen > VAR_7 * VAR_0 )
    {
      size_t VAR_8 = VAR_3->buflen - VAR_7 * VAR_0;

      if( VAR_8 > VAR_0 ) VAR_8 = VAR_0;

      FUNC_1( VAR_3->S[VAR_7], VAR_3->buf + VAR_7 * VAR_0, VAR_8 );
    }

    FUNC_0( VAR_3->S[VAR_7], VAR_6[VAR_7], VAR_1 );
  }

  for( size_t VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9 )
    FUNC_1( VAR_3->R, VAR_6[VAR_9], VAR_1 );

  FUNC_0( VAR_3->R, VAR_4, VAR_5 );
  return 0;
}
