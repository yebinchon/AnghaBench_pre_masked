
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static
BOOL FUNC_2(
   SCI_CONTROLLER_HANDLE_T VAR_0
)
{
   U32 VAR_1;
   BOOL VAR_2;
   SCIC_SDS_CONTROLLER_T *VAR_3 = (SCIC_SDS_CONTROLLER_T*)VAR_0;

   VAR_1 = FUNC_0(VAR_3);
   VAR_2 = FUNC_1(
                             VAR_3, VAR_1
                          );

   return VAR_2;
}
