
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U32 ;
typedef int SMP_RESPONSE_T ;
typedef int SMP_REQUEST_T ;
typedef int SCU_TASK_CONTEXT_T ;
typedef int SCIC_SDS_REQUEST_T ;


 scalar_t__ VAR_0 ;

U32 FUNC_0(void)
{
   return sizeof(SCIC_SDS_REQUEST_T)
          + sizeof(SMP_REQUEST_T)
          + sizeof(U32)
          + sizeof(SMP_RESPONSE_T)
          + sizeof(U32)
          + sizeof(SCU_TASK_CONTEXT_T)
          + VAR_0;
}
