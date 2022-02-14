
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int preset_dict_size; int preset_dict; int depth; int mf; int nice_len; int dict_size; } ;
typedef TYPE_1__ lzma_options_lzma ;
struct TYPE_6__ {int preset_dict_size; int preset_dict; int depth; int match_finder; int nice_len; int match_len_max; int after_size; int dict_size; int before_size; } ;
typedef TYPE_2__ lzma_lz_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(lzma_lz_options *VAR_3, const lzma_options_lzma *VAR_4)
{


 VAR_3->before_size = VAR_2;
 VAR_3->dict_size = VAR_4->dict_size;
 VAR_3->after_size = VAR_0;
 VAR_3->match_len_max = VAR_1;
 VAR_3->nice_len = VAR_4->nice_len;
 VAR_3->match_finder = VAR_4->mf;
 VAR_3->depth = VAR_4->depth;
 VAR_3->preset_dict = VAR_4->preset_dict;
 VAR_3->preset_dict_size = VAR_4->preset_dict_size;
 return;
}
