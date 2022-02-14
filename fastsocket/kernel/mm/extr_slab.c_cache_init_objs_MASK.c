
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slab {int dummy; } ;
struct kmem_cache {int num; int flags; int buffer_size; int (* ctor ) (void*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kmem_cache*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__* FUNC_1 (struct kmem_cache*,void*) ;
 scalar_t__* FUNC_2 (struct kmem_cache*,void*) ;
 int ** FUNC_3 (struct kmem_cache*,void*) ;
 void* FUNC_4 (struct kmem_cache*,struct slab*,int) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct kmem_cache*) ;
 int FUNC_7 (struct kmem_cache*,void*,int ) ;
 int* FUNC_8 (struct slab*) ;
 int FUNC_9 (struct kmem_cache*,char*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;

__attribute__((used)) static void FUNC_13(struct kmem_cache *VAR_7,
       struct slab *VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_7->num; VAR_9++) {
  void *VAR_10 = FUNC_4(VAR_7, VAR_8, VAR_9);
  if (VAR_7->ctor)
   VAR_7->ctor(VAR_10);

  FUNC_8(VAR_8)[VAR_9] = VAR_9 + 1;
 }
 FUNC_8(VAR_8)[VAR_9 - 1] = VAR_0;
}
