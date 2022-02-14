
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U32 ;
typedef int SCU_TASK_CONTEXT_T ;
typedef int SCIC_SDS_REQUEST_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static
U32 FUNC_1(void)
{
   return sizeof(SCIC_SDS_REQUEST_T)
          + FUNC_0()
          + sizeof(SCU_TASK_CONTEXT_T)
          + VAR_0;
}
