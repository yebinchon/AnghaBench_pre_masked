
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slob_rcu {int dummy; } ;
struct kmem_cache {char const* name; size_t size; unsigned long flags; void (* ctor ) (void*) ;size_t align; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct kmem_cache*,int,int,int ) ;
 int FUNC_1 (char*,char const*) ;
 struct kmem_cache* FUNC_2 (int,int ,int ,int) ;

struct kmem_cache *FUNC_3(const char *VAR_7, size_t VAR_8,
 size_t VAR_9, unsigned long VAR_10, void (*VAR_11)(void *))
{
 struct kmem_cache *VAR_12;

 VAR_12 = FUNC_2(sizeof(struct kmem_cache),
  VAR_2, VAR_0, -1);

 if (VAR_12) {
  VAR_12->name = VAR_7;
  VAR_12->size = VAR_8;
  if (VAR_10 & VAR_3) {

   VAR_12->size += sizeof(struct slob_rcu);
  }
  VAR_12->flags = VAR_10;
  VAR_12->ctor = VAR_11;

  VAR_12->align = (VAR_10 & VAR_4) ? VAR_6 : 0;
  if (VAR_12->align < VAR_1)
   VAR_12->align = VAR_1;
  if (VAR_12->align < VAR_9)
   VAR_12->align = VAR_9;
 } else if (VAR_10 & VAR_5)
  FUNC_1("Cannot create slab cache %s\n", VAR_7);

 FUNC_0(VAR_12, sizeof(struct kmem_cache), 1, VAR_2);
 return VAR_12;
}
