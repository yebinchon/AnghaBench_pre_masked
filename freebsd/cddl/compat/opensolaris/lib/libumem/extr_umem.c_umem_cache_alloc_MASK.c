
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* constructor ) (void*,int ,int) ;int callback_data; int bufsize; } ;
typedef TYPE_1__ umem_cache_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (void*,int ,int) ;

void *FUNC_5(umem_cache_t *VAR_1, int VAR_2)
{
 void *VAR_3 = FUNC_2(VAR_1->bufsize);
 if(VAR_3 == ((void*)0)) {
  if(!(VAR_2 & VAR_0))
   return ((void*)0);

  if(&FUNC_3 != ((void*)0))
   FUNC_3();
  FUNC_0();
 }

 if(VAR_1->constructor != ((void*)0)) {
  if(VAR_1->constructor(VAR_3, VAR_1->callback_data, VAR_2) != 0) {
   FUNC_1(VAR_3);
   if(!(VAR_2 & VAR_0))
    return ((void*)0);

   if(&FUNC_3 != ((void*)0))
    FUNC_3();
   FUNC_0();
  }
 }

 return VAR_3;
}
