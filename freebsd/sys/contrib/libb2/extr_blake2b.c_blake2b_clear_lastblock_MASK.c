
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long long* f; scalar_t__ last_node; } ;
typedef TYPE_1__ blake2b_state ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline int FUNC_1( blake2b_state *VAR_0 )
{
  if( VAR_0->last_node ) FUNC_0( VAR_0 );

  VAR_0->f[0] = 0ULL;
  return 0;
}
