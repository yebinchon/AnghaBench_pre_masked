
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* methods; } ;
typedef TYPE_2__ isc_socket_t ;
typedef int isc_result_t ;
struct TYPE_8__ {int (* dup ) (TYPE_2__*,TYPE_2__**) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__**) ;

isc_result_t
FUNC_3(isc_socket_t *VAR_0, isc_socket_t **VAR_1) {
 FUNC_1(FUNC_0(VAR_0));
 FUNC_1(VAR_1 != ((void*)0) && *VAR_1 == ((void*)0));

 return(VAR_0->methods->dup(VAR_0, VAR_1));
}
