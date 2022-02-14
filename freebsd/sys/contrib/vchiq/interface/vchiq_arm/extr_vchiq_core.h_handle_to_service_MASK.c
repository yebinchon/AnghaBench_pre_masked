
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** services; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
typedef int VCHIQ_SERVICE_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static inline VCHIQ_SERVICE_T *
FUNC_0(VCHIQ_SERVICE_HANDLE_T VAR_3)
{
 VCHIQ_STATE_T *VAR_4 = VAR_2[(VAR_3 / VAR_0) &
  (VAR_1 - 1)];
 if (!VAR_4)
  return ((void*)0);

 return VAR_4->services[VAR_3 & (VAR_0 - 1)];
}
