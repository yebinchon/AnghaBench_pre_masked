
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* lzma_vli ;
typedef int lzma_allocator ;
struct TYPE_7__ {int version; } ;
struct TYPE_6__ {int * right; int * left; int * parent; void* compressed_base; void* uncompressed_base; } ;
struct TYPE_8__ {scalar_t__ stream_padding; TYPE_2__ stream_flags; scalar_t__ index_list_size; scalar_t__ record_count; int groups; void* block_number_base; int number; TYPE_1__ node; } ;
typedef TYPE_3__ index_stream ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int,int const*) ;

__attribute__((used)) static index_stream *
FUNC_2(lzma_vli VAR_1, lzma_vli VAR_2,
  uint32_t VAR_3, lzma_vli VAR_4,
  const lzma_allocator *VAR_5)
{
 index_stream *VAR_6 = FUNC_1(sizeof(index_stream), VAR_5);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->node.uncompressed_base = VAR_2;
 VAR_6->node.compressed_base = VAR_1;
 VAR_6->node.parent = ((void*)0);
 VAR_6->node.left = ((void*)0);
 VAR_6->node.right = ((void*)0);

 VAR_6->number = VAR_3;
 VAR_6->block_number_base = VAR_4;

 FUNC_0(&VAR_6->groups);

 VAR_6->record_count = 0;
 VAR_6->index_list_size = 0;
 VAR_6->stream_flags.version = VAR_0;
 VAR_6->stream_padding = 0;

 return VAR_6;
}
