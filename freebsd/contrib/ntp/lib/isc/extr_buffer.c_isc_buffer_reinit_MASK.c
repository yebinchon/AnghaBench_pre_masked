
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int length; void* base; } ;
typedef TYPE_1__ isc_buffer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,void*,unsigned int) ;

void
FUNC_2(isc_buffer_t *VAR_0, void *VAR_1, unsigned int VAR_2) {
 FUNC_0(VAR_0->length <= VAR_2);
 FUNC_0(VAR_1 != ((void*)0));

 (void)FUNC_1(VAR_1, VAR_0->base, VAR_0->length);
 VAR_0->base = VAR_1;
 VAR_0->length = VAR_2;
}
