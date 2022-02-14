
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slab {int list; } ;
struct kmem_list3 {size_t colour_next; int list_lock; int free_objects; int slabs_free; } ;
struct kmem_cache {size_t colour; size_t colour_off; scalar_t__ num; struct kmem_list3** nodelists; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct kmem_cache*) ;
 int VAR_3 ;
 struct slab* FUNC_2 (struct kmem_cache*,void*,size_t,int,int) ;
 int FUNC_3 (struct kmem_cache*,struct slab*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct kmem_cache*,int) ;
 int FUNC_6 (struct kmem_cache*,void*) ;
 void* FUNC_7 (struct kmem_cache*,int,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct kmem_cache*,struct slab*,void*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct kmem_cache *VAR_4,
  gfp_t VAR_5, int VAR_6, void *VAR_7)
{
 struct slab *VAR_8;
 size_t VAR_9;
 gfp_t VAR_10;
 struct kmem_list3 *VAR_11;





 FUNC_0(VAR_5 & VAR_2);
 VAR_10 = VAR_5 & (VAR_0|VAR_1);


 FUNC_4();
 VAR_11 = VAR_4->nodelists[VAR_6];
 FUNC_12(&VAR_11->list_lock);


 VAR_9 = VAR_11->colour_next;
 VAR_11->colour_next++;
 if (VAR_11->colour_next >= VAR_4->colour)
  VAR_11->colour_next = 0;
 FUNC_13(&VAR_11->list_lock);

 VAR_9 *= VAR_4->colour_off;

 if (VAR_10 & VAR_3)
  FUNC_10();







 FUNC_5(VAR_4, VAR_5);





 if (!VAR_7)
  VAR_7 = FUNC_7(VAR_4, VAR_10, VAR_6);
 if (!VAR_7)
  goto failed;


 VAR_8 = FUNC_2(VAR_4, VAR_7, VAR_9,
   VAR_10 & ~VAR_0, VAR_6);
 if (!VAR_8)
  goto opps1;

 FUNC_11(VAR_4, VAR_8, VAR_7);

 FUNC_3(VAR_4, VAR_8);

 if (VAR_10 & VAR_3)
  FUNC_9();
 FUNC_4();
 FUNC_12(&VAR_11->list_lock);


 FUNC_8(&VAR_8->list, &(VAR_11->slabs_free));
 FUNC_1(VAR_4);
 VAR_11->free_objects += VAR_4->num;
 FUNC_13(&VAR_11->list_lock);
 return 1;
opps1:
 FUNC_6(VAR_4, VAR_7);
failed:
 if (VAR_10 & VAR_3)
  FUNC_9();
 return 0;
}
