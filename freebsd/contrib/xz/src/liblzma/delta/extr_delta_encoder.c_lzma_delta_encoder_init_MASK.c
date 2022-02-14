
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_4__ {int * update; int * code; } ;
typedef TYPE_1__ lzma_next_coder ;
typedef int lzma_filter_info ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int const*,int const*) ;

extern lzma_ret
FUNC_1(lzma_next_coder *VAR_2, const lzma_allocator *VAR_3,
  const lzma_filter_info *VAR_4)
{
 VAR_2->code = &VAR_0;
 VAR_2->update = &VAR_1;
 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
