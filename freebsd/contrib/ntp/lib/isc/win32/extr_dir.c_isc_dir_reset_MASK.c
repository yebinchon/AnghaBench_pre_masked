
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_6__ {scalar_t__ search_handle; int * dirname; } ;
typedef TYPE_1__ isc_dir_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

isc_result_t
FUNC_4(isc_dir_t *VAR_1) {
 isc_result_t VAR_2;

 FUNC_0(FUNC_1(VAR_1) && VAR_1->search_handle != VAR_0);
 FUNC_0(VAR_1->dirname != ((void*)0));







 FUNC_2(VAR_1);

 VAR_2 = FUNC_3(VAR_1);

 return (VAR_2);
}
