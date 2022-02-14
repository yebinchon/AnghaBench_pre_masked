
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_5__ {int * coder; int * end; int * code; } ;
typedef TYPE_1__ lzma_next_coder ;
typedef int lzma_index_coder ;
typedef int lzma_index ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int const*) ;
 int * FUNC_1 (int,int const*) ;
 int FUNC_2 (int (*) (TYPE_1__*,int const*,int const*),TYPE_1__*,int const*) ;

extern lzma_ret
FUNC_3(lzma_next_coder *VAR_5, const lzma_allocator *VAR_6,
  const lzma_index *VAR_7)
{
 FUNC_2(&FUNC_3, VAR_5, VAR_6);

 if (VAR_7 == ((void*)0))
  return VAR_2;

 if (VAR_5->coder == ((void*)0)) {
  VAR_5->coder = FUNC_1(sizeof(lzma_index_coder), VAR_6);
  if (VAR_5->coder == ((void*)0))
   return VAR_0;

  VAR_5->code = &VAR_3;
  VAR_5->end = &VAR_4;
 }

 FUNC_0(VAR_5->coder, VAR_7);

 return VAR_1;
}
