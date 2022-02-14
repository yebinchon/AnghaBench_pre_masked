
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_mem_t ;
struct TYPE_6__ {int length; int * mctx; } ;
typedef TYPE_1__ isc_buffer_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,unsigned int) ;

void
FUNC_4(isc_buffer_t **VAR_0) {
 unsigned int VAR_1;
 isc_buffer_t *VAR_2;
 isc_mem_t *VAR_3;

 FUNC_1(VAR_0 != ((void*)0));
 FUNC_1(FUNC_0(*VAR_0));
 FUNC_1((*VAR_0)->mctx != ((void*)0));

 VAR_2 = *VAR_0;
 *VAR_0 = ((void*)0);

 VAR_1 = VAR_2->length + sizeof(isc_buffer_t);
 VAR_3 = VAR_2->mctx;
 VAR_2->mctx = ((void*)0);
 FUNC_2(VAR_2);

 FUNC_3(VAR_3, VAR_2, VAR_1);
}
