
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__* f; scalar_t__ last_node; } ;
typedef TYPE_1__ blake2s_state ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( blake2s_state *VAR_0 )
{
  if( VAR_0->last_node ) FUNC_0( VAR_0 );

  VAR_0->f[0] = (uint32_t)-1;
}
