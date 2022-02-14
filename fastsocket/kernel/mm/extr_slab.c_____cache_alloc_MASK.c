
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;
struct array_cache {size_t avail; int touched; void** entry; } ;
typedef int gfp_t ;


 int FUNC_0 (struct kmem_cache*) ;
 int FUNC_1 (struct kmem_cache*) ;
 void* FUNC_2 (struct kmem_cache*,int ) ;
 int FUNC_3 () ;
 struct array_cache* FUNC_4 (struct kmem_cache*) ;
 int FUNC_5 (void**) ;
 scalar_t__ FUNC_6 (size_t) ;

__attribute__((used)) static inline void *FUNC_7(struct kmem_cache *VAR_0, gfp_t VAR_1)
{
 void *VAR_2;
 struct array_cache *VAR_3;

 FUNC_3();

 VAR_3 = FUNC_4(VAR_0);
 if (FUNC_6(VAR_3->avail)) {
  FUNC_0(VAR_0);
  VAR_3->touched = 1;
  VAR_2 = VAR_3->entry[--VAR_3->avail];
 } else {
  FUNC_1(VAR_0);
  VAR_2 = FUNC_2(VAR_0, VAR_1);




  VAR_3 = FUNC_4(VAR_0);
 }





 FUNC_5(&VAR_3->entry[VAR_3->avail]);
 return VAR_2;
}
