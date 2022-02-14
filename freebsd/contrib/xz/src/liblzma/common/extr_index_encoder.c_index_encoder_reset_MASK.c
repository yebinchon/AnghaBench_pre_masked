
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ crc32; scalar_t__ pos; int const* index; int sequence; int iter; } ;
typedef TYPE_1__ lzma_index_coder ;
typedef int lzma_index ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*) ;

__attribute__((used)) static void
FUNC_1(lzma_index_coder *VAR_1, const lzma_index *VAR_2)
{
 FUNC_0(&VAR_1->iter, VAR_2);

 VAR_1->sequence = VAR_0;
 VAR_1->index = VAR_2;
 VAR_1->pos = 0;
 VAR_1->crc32 = 0;

 return;
}
