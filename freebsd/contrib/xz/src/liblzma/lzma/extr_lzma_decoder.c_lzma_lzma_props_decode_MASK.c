
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lzma_ret ;
struct TYPE_5__ {scalar_t__ preset_dict_size; int * preset_dict; int dict_size; } ;
typedef TYPE_1__ lzma_options_lzma ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int const*) ;
 int FUNC_1 (TYPE_1__*,int const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int const) ;
 int FUNC_3 (int const*) ;

extern lzma_ret
FUNC_4(void **VAR_3, const lzma_allocator *VAR_4,
  const uint8_t *VAR_5, size_t VAR_6)
{
 if (VAR_6 != 5)
  return VAR_2;

 lzma_options_lzma *VAR_7
   = FUNC_0(sizeof(lzma_options_lzma), VAR_4);
 if (VAR_7 == ((void*)0))
  return VAR_0;

 if (FUNC_2(VAR_7, VAR_5[0]))
  goto error;




 VAR_7->dict_size = FUNC_3(VAR_5 + 1);

 VAR_7->preset_dict = ((void*)0);
 VAR_7->preset_dict_size = 0;

 *VAR_3 = VAR_7;

 return VAR_1;

error:
 FUNC_1(VAR_7, VAR_4);
 return VAR_2;
}
