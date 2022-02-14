
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int backward_size; } ;
typedef TYPE_1__ lzma_stream_flags ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(const lzma_stream_flags *VAR_2)
{
 return VAR_2->backward_size >= VAR_1
   && VAR_2->backward_size <= VAR_0
   && (VAR_2->backward_size & 3) == 0;
}
