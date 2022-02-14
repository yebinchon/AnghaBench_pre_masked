
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int lzma_ret ;
struct TYPE_2__ {scalar_t__ start_offset; } ;
typedef TYPE_1__ lzma_options_bcj ;


 int VAR_0 ;

extern lzma_ret
FUNC_0(uint32_t *VAR_1, const void *VAR_2)
{
 const lzma_options_bcj *const VAR_3 = VAR_2;
 *VAR_1 = (VAR_3 == ((void*)0) || VAR_3->start_offset == 0) ? 0 : 4;
 return VAR_0;
}
