
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_4__ {int * handle; } ;
typedef TYPE_1__ isc_dir_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

isc_result_t
FUNC_3(isc_dir_t *VAR_1) {
 FUNC_0(FUNC_1(VAR_1) && VAR_1->handle != ((void*)0));

 FUNC_2(VAR_1->handle);

 return (VAR_0);
}
