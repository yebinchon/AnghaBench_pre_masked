
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ memusage; scalar_t__ memlimit; } ;
typedef TYPE_1__ lzma_stream_coder ;
typedef int lzma_ret ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static lzma_ret
FUNC_0(void *VAR_2, uint64_t *VAR_3,
  uint64_t *VAR_4, uint64_t VAR_5)
{
 lzma_stream_coder *VAR_6 = VAR_2;

 *VAR_3 = VAR_6->memusage;
 *VAR_4 = VAR_6->memlimit;

 if (VAR_5 != 0) {
  if (VAR_5 < VAR_6->memusage)
   return VAR_0;

  VAR_6->memlimit = VAR_5;
 }

 return VAR_1;
}
