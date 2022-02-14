
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int lzma_ret ;
struct TYPE_3__ {scalar_t__ crc32; scalar_t__ pos; scalar_t__ count; int memlimit; int sequence; int * index; int ** index_ptr; } ;
typedef TYPE_1__ lzma_index_coder ;
typedef int lzma_index ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int const*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static lzma_ret
FUNC_2(lzma_index_coder *VAR_3, const lzma_allocator *VAR_4,
  lzma_index **VAR_5, uint64_t VAR_6)
{




 VAR_3->index_ptr = VAR_5;
 *VAR_5 = ((void*)0);


 VAR_3->index = FUNC_0(VAR_4);
 if (VAR_3->index == ((void*)0))
  return VAR_0;


 VAR_3->sequence = VAR_2;
 VAR_3->memlimit = FUNC_1(1, VAR_6);
 VAR_3->count = 0;
 VAR_3->pos = 0;
 VAR_3->crc32 = 0;

 return VAR_1;
}
