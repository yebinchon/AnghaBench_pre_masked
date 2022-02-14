
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int VCHIQ_STATUS_T ;
struct TYPE_12__ {int srvstate; int remoteport; int localport; int state; } ;
typedef TYPE_1__ VCHIQ_SERVICE_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
struct TYPE_13__ {scalar_t__ size; int * data; } ;
typedef TYPE_2__ VCHIQ_ELEMENT_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;


 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ,TYPE_2__ const*,unsigned int,unsigned int,int) ;
 int FUNC_4 (int ,TYPE_1__*,int ,TYPE_2__ const*,unsigned int,unsigned int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

VCHIQ_STATUS_T
FUNC_7(VCHIQ_SERVICE_HANDLE_T VAR_5,
 const VCHIQ_ELEMENT_T *VAR_6, unsigned int VAR_7)
{
 VCHIQ_SERVICE_T *VAR_8 = FUNC_2(VAR_5);
 VCHIQ_STATUS_T VAR_9 = VAR_0;

 unsigned int VAR_10 = 0;
 unsigned int VAR_11;

 if (!VAR_8 ||
  (FUNC_6(VAR_8) != VAR_3))
  goto error_exit;

 for (VAR_11 = 0; VAR_11 < (unsigned int)VAR_7; VAR_11++) {
  if (VAR_6[VAR_11].size) {
   if (VAR_6[VAR_11].data == ((void*)0)) {
    FUNC_1(VAR_8, VAR_4);
    goto error_exit;
   }
   VAR_10 += VAR_6[VAR_11].size;
  }
 }

 if (VAR_10 > VAR_1) {
  FUNC_1(VAR_8, VAR_4);
  goto error_exit;
 }

 switch (VAR_8->srvstate) {
 case 129:
  VAR_9 = FUNC_3(VAR_8->state, VAR_8,
    FUNC_0(VAR_2,
     VAR_8->localport,
     VAR_8->remoteport),
    VAR_6, VAR_7, VAR_10, 1);
  break;
 case 128:
  VAR_9 = FUNC_4(VAR_8->state, VAR_8,
    FUNC_0(VAR_2,
     VAR_8->localport,
     VAR_8->remoteport),
    VAR_6, VAR_7, VAR_10, 1);
  break;
 default:
  VAR_9 = VAR_0;
  break;
 }

error_exit:
 if (VAR_8)
  FUNC_5(VAR_8);

 return VAR_9;
}
