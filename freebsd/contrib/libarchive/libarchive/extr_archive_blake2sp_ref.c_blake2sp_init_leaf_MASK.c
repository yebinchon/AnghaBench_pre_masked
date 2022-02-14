
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef int blake2s_state ;
struct TYPE_3__ {int depth; int personal; int salt; int inner_length; scalar_t__ node_depth; int xof_length; int node_offset; int leaf_length; int fanout; void* key_length; void* digest_length; } ;
typedef TYPE_1__ blake2s_param ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4( blake2s_state *VAR_2, size_t VAR_3, size_t VAR_4, uint32_t VAR_5 )
{
  blake2s_param VAR_6[1];
  VAR_6->digest_length = (uint8_t)VAR_3;
  VAR_6->key_length = (uint8_t)VAR_4;
  VAR_6->fanout = VAR_1;
  VAR_6->depth = 2;
  FUNC_3( &VAR_6->leaf_length, 0 );
  FUNC_3( &VAR_6->node_offset, VAR_5 );
  FUNC_2( &VAR_6->xof_length, 0 );
  VAR_6->node_depth = 0;
  VAR_6->inner_length = VAR_0;
  FUNC_1( VAR_6->salt, 0, sizeof( VAR_6->salt ) );
  FUNC_1( VAR_6->personal, 0, sizeof( VAR_6->personal ) );
  return FUNC_0( VAR_2, VAR_6 );
}
