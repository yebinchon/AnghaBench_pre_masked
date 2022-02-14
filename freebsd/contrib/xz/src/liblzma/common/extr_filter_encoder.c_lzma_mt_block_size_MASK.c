
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__ (* block_size ) (int ) ;} ;
typedef TYPE_1__ lzma_filter_encoder ;
struct TYPE_6__ {scalar_t__ id; int options; } ;
typedef TYPE_2__ lzma_filter ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

extern uint64_t
FUNC_2(const lzma_filter *VAR_1)
{
 uint64_t VAR_2 = 0;

 for (size_t VAR_3 = 0; VAR_1[VAR_3].id != VAR_0; ++VAR_3) {
  const lzma_filter_encoder *const VAR_4
    = FUNC_0(VAR_1[VAR_3].id);
  if (VAR_4->block_size != ((void*)0)) {
   const uint64_t VAR_5
     = VAR_4->block_size(VAR_1[VAR_3].options);
   if (VAR_5 == 0)
    return 0;

   if (VAR_5 > VAR_2)
    VAR_2 = VAR_5;
  }
 }

 return VAR_2;
}
