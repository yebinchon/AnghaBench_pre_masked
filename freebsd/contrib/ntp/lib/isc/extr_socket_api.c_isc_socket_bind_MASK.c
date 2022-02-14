
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* methods; } ;
typedef TYPE_2__ isc_socket_t ;
typedef int isc_sockaddr_t ;
typedef int isc_result_t ;
struct TYPE_6__ {int (* bind ) (TYPE_2__*,int *,unsigned int) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *,unsigned int) ;

isc_result_t
FUNC_3(isc_socket_t *VAR_0, isc_sockaddr_t *VAR_1,
  unsigned int VAR_2)
{
 FUNC_1(FUNC_0(VAR_0));

 return (VAR_0->methods->bind(VAR_0, VAR_1, VAR_2));
}
