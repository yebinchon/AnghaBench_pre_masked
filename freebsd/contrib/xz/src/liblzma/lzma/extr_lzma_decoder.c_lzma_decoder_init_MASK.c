
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lzma_ret ;
typedef int lzma_lz_options ;
struct TYPE_4__ {int coder; } ;
typedef TYPE_1__ lzma_lz_decoder ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void const*) ;
 int FUNC_1 (int ,void const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int const*,void const*,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static lzma_ret
FUNC_5(lzma_lz_decoder *VAR_3, const lzma_allocator *VAR_4,
  const void *VAR_5, lzma_lz_options *VAR_6)
{
 if (!FUNC_0(VAR_5))
  return VAR_1;

 FUNC_4(FUNC_3(
   VAR_3, VAR_4, VAR_5, VAR_6));

 FUNC_1(VAR_3->coder, VAR_5);
 FUNC_2(VAR_3->coder, VAR_2);

 return VAR_0;
}
