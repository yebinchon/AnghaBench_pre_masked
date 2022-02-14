
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_taskaction_t ;
typedef int isc_task_t ;
struct TYPE_7__ {TYPE_1__* methods; } ;
typedef TYPE_2__ isc_socket_t ;
typedef int isc_result_t ;
typedef int isc_region_t ;
struct TYPE_6__ {int (* recv ) (TYPE_2__*,int *,unsigned int,int *,int ,void const*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *,unsigned int,int *,int ,void const*) ;

isc_result_t
FUNC_3(isc_socket_t *VAR_0, isc_region_t *VAR_1, unsigned int VAR_2,
  isc_task_t *VAR_3, isc_taskaction_t VAR_4, const void *VAR_5)
{
 FUNC_1(FUNC_0(VAR_0));

 return (VAR_0->methods->recv(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));
}
