
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int params ;
typedef int int32_t ;
typedef int * VCHI_SERVICE_HANDLE_T ;
typedef int VCHI_INSTANCE_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_12__ {int version_min; int version; TYPE_3__* userdata; int callback; int fourcc; } ;
typedef TYPE_2__ VCHIQ_SERVICE_PARAMS_T ;
typedef int VCHIQ_INSTANCE_T ;
struct TYPE_11__ {int version_min; int version; } ;
struct TYPE_14__ {TYPE_1__ version; int service_id; } ;
struct TYPE_13__ {int handle; } ;
typedef TYPE_3__ SHIM_SERVICE_T ;
typedef TYPE_4__ SERVICE_CREATION_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 TYPE_3__* FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,int *) ;

int32_t FUNC_4(VCHI_INSTANCE_T VAR_2,
 SERVICE_CREATION_T *VAR_3,
 VCHI_SERVICE_HANDLE_T *VAR_4)
{
 VCHIQ_INSTANCE_T VAR_5 = (VCHIQ_INSTANCE_T)VAR_2;
 SHIM_SERVICE_T *VAR_6 = FUNC_1(VAR_5, VAR_3);

 *VAR_4 = (VCHI_SERVICE_HANDLE_T)VAR_6;

 if (VAR_6) {
  VCHIQ_SERVICE_PARAMS_T VAR_7;
  VCHIQ_STATUS_T VAR_8;

  FUNC_0(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.fourcc = VAR_3->service_id;
  VAR_7.callback = VAR_1;
  VAR_7.userdata = VAR_6;
  VAR_7.version = VAR_3->version.version;
  VAR_7.version_min = VAR_3->version.version_min;
  VAR_8 = FUNC_3(VAR_5, &VAR_7, &VAR_6->handle);

  if (VAR_8 != VAR_0) {
   FUNC_2(VAR_6);
   VAR_6 = ((void*)0);
   *VAR_4 = ((void*)0);
  }
 }

 return (VAR_6 != ((void*)0)) ? 0 : -1;
}
