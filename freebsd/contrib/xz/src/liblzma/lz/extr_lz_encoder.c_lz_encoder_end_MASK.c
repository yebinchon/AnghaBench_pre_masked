
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* coder; int (* end ) (TYPE_3__*,int const*) ;} ;
struct TYPE_7__ {TYPE_3__* buffer; TYPE_3__* hash; TYPE_3__* son; } ;
struct TYPE_8__ {TYPE_1__ lz; TYPE_2__ mf; int next; } ;
typedef TYPE_3__ lzma_coder ;
typedef int lzma_allocator ;


 int FUNC_0 (TYPE_3__*,int const*) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (TYPE_3__*,int const*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, const lzma_allocator *VAR_1)
{
 lzma_coder *VAR_2 = VAR_0;

 FUNC_1(&VAR_2->next, VAR_1);

 FUNC_0(VAR_2->mf.son, VAR_1);
 FUNC_0(VAR_2->mf.hash, VAR_1);
 FUNC_0(VAR_2->mf.buffer, VAR_1);

 if (VAR_2->lz.end != ((void*)0))
  VAR_2->lz.end(VAR_2->lz.coder, VAR_1);
 else
  FUNC_0(VAR_2->lz.coder, VAR_1);

 FUNC_0(VAR_2, VAR_1);
 return;
}
