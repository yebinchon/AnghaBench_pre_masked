
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_7__ {scalar_t__ preset_dict_size; int * preset_dict; } ;
typedef TYPE_1__ lzma_options_lzma ;
struct TYPE_8__ {int need_properties; int need_dictionary_reset; int lzma; int sequence; } ;
typedef TYPE_2__ lzma_lzma2_coder ;
typedef int lzma_lz_options ;
struct TYPE_9__ {int * end; int * code; TYPE_2__* coder; } ;
typedef TYPE_3__ lzma_lz_decoder ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (int,int const*) ;
 int FUNC_1 (int *,int const*,TYPE_1__ const*,int *) ;

__attribute__((used)) static lzma_ret
FUNC_2(lzma_lz_decoder *VAR_5, const lzma_allocator *VAR_6,
  const void *VAR_7, lzma_lz_options *VAR_8)
{
 lzma_lzma2_coder *VAR_9 = VAR_5->coder;
 if (VAR_9 == ((void*)0)) {
  VAR_9 = FUNC_0(sizeof(lzma_lzma2_coder), VAR_6);
  if (VAR_9 == ((void*)0))
   return VAR_1;

  VAR_5->coder = VAR_9;
  VAR_5->code = &VAR_3;
  VAR_5->end = &VAR_4;

  VAR_9->lzma = VAR_0;
 }

 const lzma_options_lzma *VAR_10 = VAR_7;

 VAR_9->sequence = VAR_2;
 VAR_9->need_properties = 1;
 VAR_9->need_dictionary_reset = VAR_10->preset_dict == ((void*)0)
   || VAR_10->preset_dict_size == 0;

 return FUNC_1(&VAR_9->lzma,
   VAR_6, VAR_10, VAR_8);
}
