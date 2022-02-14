
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_6__ {void* outlen; } ;
typedef TYPE_1__ blake2b_state ;
struct TYPE_7__ {int depth; int node_depth; void* digest_length; int personal; int salt; int reserved; int inner_length; int node_offset; int leaf_length; int fanout; void* key_length; } ;
typedef TYPE_2__ blake2b_param ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4( blake2b_state *VAR_2, uint8_t VAR_3, uint8_t VAR_4 )
{
  blake2b_param VAR_5[1];
  VAR_5->digest_length = VAR_3;
  VAR_5->key_length = VAR_4;
  VAR_5->fanout = VAR_1;
  VAR_5->depth = 2;
  FUNC_2(&VAR_5->leaf_length, 0);
  FUNC_3(&VAR_5->node_offset, 0);
  VAR_5->node_depth = 1;
  VAR_5->inner_length = VAR_0;
  FUNC_1( VAR_5->reserved, 0, sizeof( VAR_5->reserved ) );
  FUNC_1( VAR_5->salt, 0, sizeof( VAR_5->salt ) );
  FUNC_1( VAR_5->personal, 0, sizeof( VAR_5->personal ) );
  FUNC_0( VAR_2, VAR_5 );
  VAR_2->outlen = VAR_5->digest_length;
  return 0;
}
