
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int flags; int ctor; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (void*,size_t) ;

void FUNC_2(struct kmem_cache *VAR_4, gfp_t VAR_5, void *VAR_6,
     size_t VAR_7)
{




 if (VAR_5 & VAR_2)
  return;


 if (VAR_4->flags & VAR_0)
  return;

 if (!VAR_3 || VAR_5 & VAR_1) {
  FUNC_0(VAR_6, VAR_7);
 } else if (!VAR_4->ctor) {




  FUNC_1(VAR_6, VAR_7);
 }
}
