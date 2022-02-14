
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ search_handle; } ;
typedef TYPE_1__ isc_dir_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

void
FUNC_3(isc_dir_t *VAR_1) {
       FUNC_1(FUNC_2(VAR_1) && VAR_1->search_handle != VAR_0);

       FUNC_0(VAR_1->search_handle);
       VAR_1->search_handle = VAR_0;
}
