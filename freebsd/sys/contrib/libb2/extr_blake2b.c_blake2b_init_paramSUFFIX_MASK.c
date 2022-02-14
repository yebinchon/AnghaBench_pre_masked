
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int outlen; scalar_t__ h; } ;
typedef TYPE_1__ blake2b_state ;
struct TYPE_7__ {int digest_length; } ;
typedef TYPE_2__ blake2b_param ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

int FUNC_1( blake2b_state *VAR_2, const blake2b_param *VAR_3 )
{
  uint8_t *VAR_4, *VAR_5, *VAR_6;

  VAR_6 = ( uint8_t * )( VAR_1 );
  VAR_5 = ( uint8_t * )( VAR_2->h );
  VAR_4 = ( uint8_t * )( VAR_3 );

  FUNC_0( VAR_2, 0, sizeof( blake2b_state ) );

  for( int VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7 ) VAR_5[VAR_7] = VAR_6[VAR_7] ^ VAR_4[VAR_7];

  VAR_2->outlen = VAR_3->digest_length;
  return 0;
}
