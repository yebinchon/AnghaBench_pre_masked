
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ dist; } ;
typedef TYPE_1__ lzma_options_delta ;
typedef int lzma_delta_coder ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

extern uint64_t
FUNC_0(const void *VAR_4)
{
 const lzma_options_delta *VAR_5 = VAR_4;

 if (VAR_5 == ((void*)0) || VAR_5->type != VAR_2
   || VAR_5->dist < VAR_1
   || VAR_5->dist > VAR_0)
  return VAR_3;

 return sizeof(lzma_delta_coder);
}
