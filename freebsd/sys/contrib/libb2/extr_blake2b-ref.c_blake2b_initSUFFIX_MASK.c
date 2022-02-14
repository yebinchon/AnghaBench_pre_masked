
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int blake2b_state ;
struct TYPE_3__ {int fanout; int depth; int personal; int salt; int reserved; scalar_t__ inner_length; scalar_t__ node_depth; int node_offset; int leaf_length; scalar_t__ key_length; scalar_t__ digest_length; } ;
typedef TYPE_1__ blake2b_param ;


 size_t VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4( blake2b_state *VAR_1, size_t VAR_2 )
{
  blake2b_param VAR_3[1];

  if ( ( !VAR_2 ) || ( VAR_2 > VAR_0 ) ) return -1;

  VAR_3->digest_length = ( uint8_t ) VAR_2;
  VAR_3->key_length = 0;
  VAR_3->fanout = 1;
  VAR_3->depth = 1;
  FUNC_2( &VAR_3->leaf_length, 0 );
  FUNC_3( &VAR_3->node_offset, 0 );
  VAR_3->node_depth = 0;
  VAR_3->inner_length = 0;
  FUNC_1( VAR_3->reserved, 0, sizeof( VAR_3->reserved ) );
  FUNC_1( VAR_3->salt, 0, sizeof( VAR_3->salt ) );
  FUNC_1( VAR_3->personal, 0, sizeof( VAR_3->personal ) );
  return FUNC_0( VAR_1, VAR_3 );
}
