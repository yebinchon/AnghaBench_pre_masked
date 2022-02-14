
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int callback_data; int (* destructor ) (void*,int ) ;} ;
typedef TYPE_1__ umem_cache_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int ) ;

void FUNC_2(umem_cache_t *VAR_0, void *VAR_1)
{
 if(VAR_0->destructor != ((void*)0))
  VAR_0->destructor(VAR_1, VAR_0->callback_data);

 FUNC_0(VAR_1);
}
