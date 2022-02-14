
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * h; } ;
typedef TYPE_1__ blake2s_state ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static inline int FUNC_1( blake2s_state *VAR_1 )
{
  FUNC_0( VAR_1, 0, sizeof( blake2s_state ) );

  for( int VAR_2 = 0; VAR_2 < 8; ++VAR_2 ) VAR_1->h[VAR_2] = VAR_0[VAR_2];

  return 0;
}
