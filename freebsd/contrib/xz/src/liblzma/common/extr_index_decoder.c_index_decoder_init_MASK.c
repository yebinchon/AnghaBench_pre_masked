
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int lzma_ret ;
struct TYPE_8__ {int * memconfig; int * end; int * code; TYPE_2__* coder; } ;
typedef TYPE_1__ lzma_next_coder ;
struct TYPE_9__ {int * index; } ;
typedef TYPE_2__ lzma_index_coder ;
typedef int lzma_index ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int const*,int **,int ) ;
 TYPE_2__* FUNC_1 (int,int const*) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int (*) (TYPE_1__*,int const*,int **,int ),TYPE_1__*,int const*) ;

__attribute__((used)) static lzma_ret
FUNC_4(lzma_next_coder *VAR_5, const lzma_allocator *VAR_6,
  lzma_index **VAR_7, uint64_t VAR_8)
{
 FUNC_3(&FUNC_4, VAR_5, VAR_6);

 if (VAR_7 == ((void*)0))
  return VAR_1;

 lzma_index_coder *VAR_9 = VAR_5->coder;
 if (VAR_9 == ((void*)0)) {
  VAR_9 = FUNC_1(sizeof(lzma_index_coder), VAR_6);
  if (VAR_9 == ((void*)0))
   return VAR_0;

  VAR_5->coder = VAR_9;
  VAR_5->code = &VAR_2;
  VAR_5->end = &VAR_3;
  VAR_5->memconfig = &VAR_4;
  VAR_9->index = ((void*)0);
 } else {
  FUNC_2(VAR_9->index, VAR_6);
 }

 return FUNC_0(VAR_9, VAR_6, VAR_7, VAR_8);
}
