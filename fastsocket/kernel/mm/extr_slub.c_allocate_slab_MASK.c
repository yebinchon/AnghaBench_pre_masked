
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int objects; } ;
struct kmem_cache_order_objects {int dummy; } ;
struct kmem_cache {int allocflags; int flags; scalar_t__ ctor; struct kmem_cache_order_objects min; struct kmem_cache_order_objects oo; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct page* FUNC_0 (int,int,struct kmem_cache_order_objects) ;
 int FUNC_1 (struct kmem_cache*,int ) ;
 int FUNC_2 (struct page*,int,int,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct page*,int) ;
 int FUNC_4 (struct page*,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct kmem_cache_order_objects) ;
 int FUNC_7 (struct kmem_cache_order_objects) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static struct page *FUNC_12(struct kmem_cache *VAR_10, gfp_t VAR_11, int VAR_12)
{
 struct page *VAR_13;
 struct kmem_cache_order_objects VAR_14 = VAR_10->oo;
 gfp_t VAR_15;

 VAR_11 |= VAR_10->allocflags;





 VAR_15 = (VAR_11 | VAR_8 | VAR_7) & ~VAR_6;

 VAR_13 = FUNC_0(VAR_15, VAR_12, VAR_14);
 if (FUNC_11(!VAR_13)) {
  VAR_14 = VAR_10->min;




  VAR_13 = FUNC_0(VAR_11, VAR_12, VAR_14);
  if (!VAR_13)
   return ((void*)0);

  FUNC_10(FUNC_1(VAR_10, FUNC_9()), VAR_3);
 }

 if (VAR_9
  && !(VAR_10->flags & (VAR_4 | VAR_0))) {
  int VAR_16 = 1 << FUNC_7(VAR_14);

  FUNC_2(VAR_13, FUNC_7(VAR_14), VAR_11, VAR_12);





  if (VAR_10->ctor)
   FUNC_4(VAR_13, VAR_16);
  else
   FUNC_3(VAR_13, VAR_16);
 }

 VAR_13->objects = FUNC_6(VAR_14);
 FUNC_5(FUNC_8(VAR_13),
  (VAR_10->flags & VAR_5) ?
  VAR_1 : VAR_2,
  1 << FUNC_7(VAR_14));

 return VAR_13;
}
