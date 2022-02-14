
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * connect_ev; } ;
typedef TYPE_1__ isc_socket_t ;
typedef int isc_socket_connev_t ;
typedef int isc_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static isc_boolean_t
FUNC_0(isc_socket_t *VAR_2, isc_socket_connev_t *VAR_3)
{
 return (VAR_2->connect_ev == VAR_3 ? VAR_1 : VAR_0);
}
