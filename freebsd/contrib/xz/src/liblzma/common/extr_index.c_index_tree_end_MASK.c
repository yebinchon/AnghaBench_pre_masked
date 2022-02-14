
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lzma_allocator ;
struct TYPE_3__ {int * root; } ;
typedef TYPE_1__ index_tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int const*,void (*) (void*,int const*)) ;

__attribute__((used)) static void
FUNC_2(index_tree *VAR_0, const lzma_allocator *VAR_1,
  void (*VAR_2)(void *VAR_3, const lzma_allocator *VAR_4))
{
 FUNC_0(VAR_2 != ((void*)0));

 if (VAR_0->root != ((void*)0))
  FUNC_1(VAR_0->root, VAR_1, VAR_2);

 return;
}
