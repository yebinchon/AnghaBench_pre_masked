
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_socketevent_t ;
struct TYPE_3__ {int send_list; } ;
typedef TYPE_1__ isc_socket_t ;
typedef int isc_boolean_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static isc_boolean_t
FUNC_2(isc_socket_t *VAR_3, isc_socketevent_t *VAR_4)
{
 isc_socketevent_t *VAR_5;

 VAR_5 = FUNC_0(VAR_3->send_list);
 while (VAR_5 != ((void*)0) && VAR_5 != VAR_4)
  VAR_5 = FUNC_1(VAR_5, VAR_2);

 return (VAR_5 == ((void*)0) ? VAR_0 : VAR_1);
}
