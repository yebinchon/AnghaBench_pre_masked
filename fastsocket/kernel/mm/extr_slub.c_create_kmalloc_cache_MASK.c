
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int list; } ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kmem_cache*,int,char const*,int,int ,unsigned int,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,char const*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct kmem_cache*) ;

__attribute__((used)) static struct kmem_cache *FUNC_4(struct kmem_cache *VAR_4,
  const char *VAR_5, int VAR_6, gfp_t VAR_7)
{
 unsigned int VAR_8 = 0;

 if (VAR_7 & VAR_2)
  VAR_8 = VAR_1;





 if (!FUNC_0(VAR_4, VAR_7, VAR_5, VAR_6, VAR_0,
        VAR_8, ((void*)0)))
  goto panic;

 FUNC_1(&VAR_4->list, &VAR_3);

 if (FUNC_3(VAR_4))
  goto panic;
 return VAR_4;

panic:
 FUNC_2("Creation of kmalloc slab %s size=%d failed.\n", VAR_5, VAR_6);
}
