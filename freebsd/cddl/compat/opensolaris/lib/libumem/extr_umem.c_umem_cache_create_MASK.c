
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int umem_reclaim_t ;
typedef int umem_destructor_t ;
typedef int umem_constructor_t ;
struct TYPE_4__ {size_t bufsize; void* callback_data; int * destructor; int * constructor; } ;
typedef TYPE_1__ umem_cache_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;

umem_cache_t *FUNC_2(char *VAR_0, size_t VAR_1, size_t VAR_2, umem_constructor_t *VAR_3, umem_destructor_t *VAR_4, umem_reclaim_t *VAR_5, void *VAR_6, void *VAR_7, int VAR_8)
{
 FUNC_0(VAR_7 == ((void*)0));

 umem_cache_t *VAR_9 = FUNC_1(sizeof(umem_cache_t));
 if(VAR_9 == ((void*)0))
  return ((void*)0);

 VAR_9->constructor = VAR_3;
 VAR_9->destructor = VAR_4;
 VAR_9->callback_data = VAR_6;
 VAR_9->bufsize = VAR_1;

 return VAR_9;
}
