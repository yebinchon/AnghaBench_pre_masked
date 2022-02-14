
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lzma_ret ;
struct TYPE_2__ {scalar_t__ start_offset; } ;
typedef TYPE_1__ lzma_options_bcj ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;

extern lzma_ret
FUNC_1(const void *VAR_1, uint8_t *VAR_2)
{
 const lzma_options_bcj *const VAR_3 = VAR_1;



 if (VAR_3 == ((void*)0) || VAR_3->start_offset == 0)
  return VAR_0;

 FUNC_0(VAR_2, VAR_3->start_offset);

 return VAR_0;
}
