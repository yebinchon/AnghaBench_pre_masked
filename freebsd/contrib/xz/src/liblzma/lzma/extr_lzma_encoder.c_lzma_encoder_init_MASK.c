
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lzma_ret ;
typedef int lzma_lz_options ;
struct TYPE_3__ {int coder; int * code; } ;
typedef TYPE_1__ lzma_lz_encoder ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,void const*,int *) ;

__attribute__((used)) static lzma_ret
FUNC_1(lzma_lz_encoder *VAR_1, const lzma_allocator *VAR_2,
  const void *VAR_3, lzma_lz_options *VAR_4)
{
 VAR_1->code = &VAR_0;
 return FUNC_0(
   &VAR_1->coder, VAR_2, VAR_3, VAR_4);
}
