
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lzma_ret ;
struct TYPE_3__ {int dict_size; scalar_t__ preset_dict_size; int * preset_dict; } ;
typedef TYPE_1__ lzma_options_lzma ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int,int const*) ;

extern lzma_ret
FUNC_1(void **VAR_4, const lzma_allocator *VAR_5,
  const uint8_t *VAR_6, size_t VAR_7)
{
 if (VAR_7 != 1)
  return VAR_2;


 if (VAR_6[0] & 0xC0)
  return VAR_2;


 if (VAR_6[0] > 40)
  return VAR_2;

 lzma_options_lzma *VAR_8 = FUNC_0(
   sizeof(lzma_options_lzma), VAR_5);
 if (VAR_8 == ((void*)0))
  return VAR_0;

 if (VAR_6[0] == 40) {
  VAR_8->dict_size = VAR_3;
 } else {
  VAR_8->dict_size = 2 | (VAR_6[0] & 1);
  VAR_8->dict_size <<= VAR_6[0] / 2 + 11;
 }

 VAR_8->preset_dict = ((void*)0);
 VAR_8->preset_dict_size = 0;

 *VAR_4 = VAR_8;

 return VAR_1;
}
