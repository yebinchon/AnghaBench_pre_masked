
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* uncompressed_size; void* compressed_size; } ;
struct TYPE_5__ {TYPE_2__ block_options; int block_encoder; } ;
typedef TYPE_1__ lzma_stream_coder ;
typedef int lzma_ret ;
typedef int lzma_allocator ;


 void* VAR_0 ;
 int FUNC_0 (int *,int const*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static lzma_ret
FUNC_3(lzma_stream_coder *VAR_1, const lzma_allocator *VAR_2)
{





 VAR_1->block_options.compressed_size = VAR_0;
 VAR_1->block_options.uncompressed_size = VAR_0;

 FUNC_2(FUNC_1(&VAR_1->block_options));


 return FUNC_0(&VAR_1->block_encoder, VAR_2,
   &VAR_1->block_options);
}
