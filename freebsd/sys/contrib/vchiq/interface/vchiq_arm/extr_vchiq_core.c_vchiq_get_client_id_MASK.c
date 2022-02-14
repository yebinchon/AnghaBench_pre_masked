
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int client_id; } ;
typedef TYPE_1__ VCHIQ_SERVICE_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(VCHIQ_SERVICE_HANDLE_T VAR_0)
{
 VCHIQ_SERVICE_T *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = VAR_1 ? VAR_1->client_id : 0;
 if (VAR_1)
  FUNC_1(VAR_1);

 return VAR_2;
}
