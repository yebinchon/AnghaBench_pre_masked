
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_kmem_rcu {int dummy; } ;
struct linux_kmem_cache {unsigned int cache_flags; size_t cache_size; int * cache_ctor; void* cache_zone; } ;
typedef int linux_kmem_ctor_t ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 struct linux_kmem_cache* FUNC_1 (int,int ,int ) ;
 void* FUNC_2 (char const*,size_t,int *,int *,int *,int *,size_t,int ) ;

struct linux_kmem_cache *
FUNC_3(const char *VAR_7, size_t VAR_8, size_t VAR_9,
    unsigned VAR_10, linux_kmem_ctor_t *VAR_11)
{
 struct linux_kmem_cache *VAR_12;

 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_0, VAR_1);

 if (VAR_10 & VAR_2)
  VAR_9 = VAR_4;
 else if (VAR_9 != 0)
  VAR_9--;

 if (VAR_10 & VAR_3) {

  VAR_8 = FUNC_0(VAR_8, sizeof(void *));
  VAR_8 += sizeof(struct linux_kmem_rcu);


  VAR_12->cache_zone = FUNC_2(VAR_7, VAR_8,
      VAR_6, ((void*)0), ((void*)0), ((void*)0),
      VAR_9, VAR_5);
 } else {

  VAR_12->cache_zone = FUNC_2(VAR_7, VAR_8,
      VAR_11 ? VAR_6 : ((void*)0), ((void*)0),
      ((void*)0), ((void*)0), VAR_9, 0);
 }

 VAR_12->cache_flags = VAR_10;
 VAR_12->cache_ctor = VAR_11;
 VAR_12->cache_size = VAR_8;
 return (VAR_12);
}
