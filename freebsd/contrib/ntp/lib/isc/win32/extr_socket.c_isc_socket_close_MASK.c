
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ isc_socket_t ;
typedef int isc_result_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;

isc_result_t
FUNC_2(isc_socket_t *VAR_2) {
 FUNC_0(FUNC_1(VAR_2));
 FUNC_0(VAR_2->type != VAR_1);

 return (VAR_0);
}
