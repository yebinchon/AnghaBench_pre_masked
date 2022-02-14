
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_5__ {short peer_version; } ;
typedef TYPE_1__ VCHIQ_SERVICE_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

VCHIQ_STATUS_T
FUNC_3(VCHIQ_SERVICE_HANDLE_T VAR_2, short *VAR_3)
{
   VCHIQ_STATUS_T VAR_4 = VAR_0;
   VCHIQ_SERVICE_T *VAR_5 = FUNC_0(VAR_2);

   if (!VAR_5 ||
      (FUNC_2(VAR_5) != VAR_1) ||
      !VAR_3)
      goto exit;
   *VAR_3 = VAR_5->peer_version;
   VAR_4 = VAR_1;

exit:
   if (VAR_5)
      FUNC_1(VAR_5);
   return VAR_4;
}
