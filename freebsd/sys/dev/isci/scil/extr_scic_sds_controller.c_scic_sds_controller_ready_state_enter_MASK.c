
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int SCI_BASE_OBJECT_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static
void FUNC_5(
   SCI_BASE_OBJECT_T *VAR_5
)
{
   U32 VAR_6;
   SCIC_SDS_CONTROLLER_T *VAR_7;
   VAR_7= (SCIC_SDS_CONTROLLER_T *)VAR_5;

   FUNC_4(
      VAR_7, VAR_2);




   VAR_6 = FUNC_1(VAR_7);

   VAR_6 &= ~( FUNC_0(VAR_1)
                               | FUNC_0(VAR_3)
                               | FUNC_0(VAR_4) );
   VAR_6 |= FUNC_0(VAR_0);

   FUNC_2(VAR_7, VAR_6);


   FUNC_3(
      VAR_7, 0x10, 250);
}
