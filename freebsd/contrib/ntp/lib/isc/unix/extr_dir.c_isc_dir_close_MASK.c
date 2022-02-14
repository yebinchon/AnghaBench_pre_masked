
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * handle; } ;
typedef TYPE_1__ isc_dir_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(isc_dir_t *VAR_0) {
       FUNC_0(FUNC_1(VAR_0) && VAR_0->handle != ((void*)0));

       (void)FUNC_2(VAR_0->handle);
       VAR_0->handle = ((void*)0);
}
