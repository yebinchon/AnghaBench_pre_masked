
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {char const* name; void (* ctor ) (void*) ;size_t objsize; size_t align; size_t size; int refcount; int remote_node_defrag_ratio; scalar_t__ offset; int oo; int flags; } ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct kmem_cache*,int) ;
 int FUNC_1 (struct kmem_cache*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct kmem_cache*) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (struct kmem_cache*,int) ;
 int FUNC_6 (size_t,unsigned long,char const*,void (*) (void*)) ;
 int VAR_4 ;
 int FUNC_7 (struct kmem_cache*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char const*,unsigned long,size_t,int ,scalar_t__,unsigned long) ;
 int FUNC_10 (struct kmem_cache*,int ) ;

__attribute__((used)) static int FUNC_11(struct kmem_cache *VAR_5, gfp_t VAR_6,
  const char *VAR_7, size_t VAR_8,
  size_t VAR_9, unsigned long VAR_10,
  void (*VAR_11)(void *))
{
 FUNC_7(VAR_5, 0, VAR_4);
 VAR_5->name = VAR_7;
 VAR_5->ctor = VAR_11;
 VAR_5->objsize = VAR_8;
 VAR_5->align = VAR_9;
 VAR_5->flags = FUNC_6(VAR_8, VAR_10, VAR_7, VAR_11);

 if (!FUNC_1(VAR_5, -1))
  goto error;
 if (VAR_3) {




  if (FUNC_3(VAR_5->size) > FUNC_3(VAR_5->objsize)) {
   VAR_5->flags &= ~VAR_0;
   VAR_5->offset = 0;
   if (!FUNC_1(VAR_5, -1))
    goto error;
  }
 }





 FUNC_10(VAR_5, FUNC_4(VAR_5->size));
 VAR_5->refcount = 1;



 if (!FUNC_5(VAR_5, VAR_6 & ~VAR_2))
  goto error;

 if (FUNC_0(VAR_5, VAR_6 & ~VAR_2))
  return 1;
 FUNC_2(VAR_5);
error:
 if (VAR_10 & VAR_1)
  FUNC_9("Cannot create slab %s size=%lu realsize=%u "
   "order=%u offset=%u flags=%lx\n",
   VAR_5->name, (unsigned long)VAR_8, VAR_5->size, FUNC_8(VAR_5->oo),
   VAR_5->offset, VAR_10);
 return 0;
}
