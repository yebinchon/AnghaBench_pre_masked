
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_10__ {scalar_t__ preset_dict_size; int * preset_dict; } ;
typedef TYPE_1__ lzma_options_lzma ;
struct TYPE_11__ {int need_properties; int need_state_reset; int need_dictionary_reset; TYPE_1__ opt_cur; int * lzma; int sequence; } ;
typedef TYPE_2__ lzma_lzma2_coder ;
struct TYPE_12__ {scalar_t__ before_size; scalar_t__ dict_size; } ;
typedef TYPE_3__ lzma_lz_options ;
struct TYPE_13__ {int * options_update; int * end; int * code; TYPE_2__* coder; } ;
typedef TYPE_4__ lzma_lz_encoder ;
typedef int lzma_allocator ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 (int,int const*) ;
 int FUNC_1 (int **,int const*,TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static lzma_ret
FUNC_3(lzma_lz_encoder *VAR_8, const lzma_allocator *VAR_9,
  const void *VAR_10, lzma_lz_options *VAR_11)
{
 if (VAR_10 == ((void*)0))
  return VAR_3;

 lzma_lzma2_coder *VAR_12 = VAR_8->coder;
 if (VAR_12 == ((void*)0)) {
  VAR_12 = FUNC_0(sizeof(lzma_lzma2_coder), VAR_9);
  if (VAR_12 == ((void*)0))
   return VAR_1;

  VAR_8->coder = VAR_12;
  VAR_8->code = &VAR_5;
  VAR_8->end = &VAR_6;
  VAR_8->options_update = &VAR_7;

  VAR_12->lzma = ((void*)0);
 }

 VAR_12->opt_cur = *(const lzma_options_lzma *)(VAR_10);

 VAR_12->sequence = VAR_4;
 VAR_12->need_properties = 1;
 VAR_12->need_state_reset = 0;
 VAR_12->need_dictionary_reset
   = VAR_12->opt_cur.preset_dict == ((void*)0)
   || VAR_12->opt_cur.preset_dict_size == 0;


 FUNC_2(FUNC_1(&VAR_12->lzma, VAR_9,
   &VAR_12->opt_cur, VAR_11));






 if (VAR_11->before_size + VAR_11->dict_size < VAR_0)
  VAR_11->before_size
    = VAR_0 - VAR_11->dict_size;

 return VAR_2;
}
