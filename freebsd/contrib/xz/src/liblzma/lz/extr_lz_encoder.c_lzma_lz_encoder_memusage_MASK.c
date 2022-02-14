
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int size; int sons_count; scalar_t__ hash_count; int * son; int * hash; int * buffer; } ;
typedef TYPE_1__ lzma_mf ;
typedef int lzma_lz_options ;
typedef int lzma_coder ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,int const*) ;

extern uint64_t
FUNC_1(const lzma_lz_options *VAR_1)
{

 lzma_mf VAR_2 = {
  .buffer = ((void*)0),
  .hash = ((void*)0),
  .son = ((void*)0),
  .hash_count = 0,
  .sons_count = 0,
 };


 if (FUNC_0(&VAR_2, ((void*)0), VAR_1))
  return VAR_0;


 return ((uint64_t)(VAR_2.hash_count) + VAR_2.sons_count) * sizeof(uint32_t)
   + VAR_2.size + sizeof(lzma_coder);
}
