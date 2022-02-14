
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t buflen; int const* buf; } ;
typedef TYPE_1__ blake2s_state ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int const*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int const*,int const*,size_t) ;

int FUNC_3( blake2s_state *VAR_1, const uint8_t *VAR_2, size_t VAR_3 )
{
  while( VAR_3 > 0 )
  {
    size_t VAR_4 = VAR_1->buflen;
    size_t VAR_5 = 2 * VAR_0 - VAR_4;

    if( VAR_3 > VAR_5 )
    {
      FUNC_2( VAR_1->buf + VAR_4, VAR_2, VAR_5 );
      VAR_1->buflen += VAR_5;
      FUNC_1( VAR_1, VAR_0 );
      FUNC_0( VAR_1, VAR_1->buf );
      FUNC_2( VAR_1->buf, VAR_1->buf + VAR_0, VAR_0 );
      VAR_1->buflen -= VAR_0;
      VAR_2 += VAR_5;
      VAR_3 -= VAR_5;
    }
    else
    {
      FUNC_2( VAR_1->buf + VAR_4, VAR_2, VAR_3 );
      VAR_1->buflen += VAR_3;
      VAR_2 += VAR_3;
      VAR_3 -= VAR_3;
    }
  }

  return 0;
}
