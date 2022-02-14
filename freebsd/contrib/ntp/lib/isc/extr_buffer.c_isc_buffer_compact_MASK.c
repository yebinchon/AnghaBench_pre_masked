
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ active; scalar_t__ current; unsigned int used; int base; } ;
typedef TYPE_1__ isc_buffer_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (TYPE_1__*) ;
 unsigned int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,void*,size_t) ;

void
FUNC_5(isc_buffer_t *VAR_0) {
 unsigned int VAR_1;
 void *VAR_2;







 FUNC_1(FUNC_0(VAR_0));

 VAR_2 = FUNC_2(VAR_0);
 VAR_1 = FUNC_3(VAR_0);
 (void)FUNC_4(VAR_0->base, VAR_2, (size_t)VAR_1);

 if (VAR_0->active > VAR_0->current)
  VAR_0->active -= VAR_0->current;
 else
  VAR_0->active = 0;
 VAR_0->current = 0;
 VAR_0->used = VAR_1;
}
