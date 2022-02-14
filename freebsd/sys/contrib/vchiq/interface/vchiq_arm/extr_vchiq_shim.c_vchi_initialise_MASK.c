
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef scalar_t__ VCHI_INSTANCE_T ;
typedef int VCHIQ_STATUS_T ;
typedef scalar_t__ VCHIQ_INSTANCE_T ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ) ;

int32_t FUNC_2(VCHI_INSTANCE_T *VAR_0)
{
 VCHIQ_INSTANCE_T VAR_1;
 VCHIQ_STATUS_T VAR_2;

 VAR_2 = FUNC_0(&VAR_1);

 *VAR_0 = (VCHI_INSTANCE_T)VAR_1;

 return FUNC_1(VAR_2);
}
