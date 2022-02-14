
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint64_t ;
struct TYPE_6__ {int outlen; } ;
typedef TYPE_1__ blake2s_state ;
struct TYPE_7__ {int depth; int inner_length; int personal; int salt; scalar_t__ node_depth; int node_offset; scalar_t__ leaf_length; int fanout; void* key_length; void* digest_length; } ;
typedef TYPE_2__ blake2s_param ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3( blake2s_state *VAR_2, uint8_t VAR_3, uint8_t VAR_4, uint64_t VAR_5 )
{
  blake2s_param VAR_6[1];
  VAR_6->digest_length = VAR_3;
  VAR_6->key_length = VAR_4;
  VAR_6->fanout = VAR_1;
  VAR_6->depth = 2;
  VAR_6->leaf_length = 0;
  FUNC_2( VAR_6->node_offset, VAR_5 );
  VAR_6->node_depth = 0;
  VAR_6->inner_length = VAR_0;
  FUNC_1( VAR_6->salt, 0, sizeof( VAR_6->salt ) );
  FUNC_1( VAR_6->personal, 0, sizeof( VAR_6->personal ) );
  FUNC_0( VAR_2, VAR_6 );
  VAR_2->outlen = VAR_6->inner_length;
  return 0;
}
