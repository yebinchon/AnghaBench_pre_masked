
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int size; int flags; int (* ctor ) (void*) ;int align; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int,int,int ,int ) ;
 void* FUNC_3 (int,int ,int ,int) ;
 void* FUNC_4 (int ,int,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,void*,int,int,int ,int) ;

void *FUNC_7(struct kmem_cache *VAR_3, gfp_t VAR_4, int VAR_5)
{
 void *VAR_6;

 if (VAR_3->size < VAR_0) {
  VAR_6 = FUNC_3(VAR_3->size, VAR_4, VAR_3->align, VAR_5);
  FUNC_6(VAR_2, VAR_6, VAR_3->size,
         FUNC_0(VAR_3->size) * VAR_1,
         VAR_4, VAR_5);
 } else {
  VAR_6 = FUNC_4(VAR_4, FUNC_1(VAR_3->size), VAR_5);
  FUNC_6(VAR_2, VAR_6, VAR_3->size,
         VAR_0 << FUNC_1(VAR_3->size),
         VAR_4, VAR_5);
 }

 if (VAR_3->ctor)
  VAR_3->ctor(VAR_6);

 FUNC_2(VAR_6, VAR_3->size, 1, VAR_3->flags, VAR_4);
 return VAR_6;
}
