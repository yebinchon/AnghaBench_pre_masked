
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static
void FUNC_3(
   SCIC_SDS_PORT_T *VAR_3
)
{
   U32 VAR_4;

   VAR_4 = FUNC_1(VAR_3, VAR_2);

   VAR_4 |= FUNC_0(VAR_0) | FUNC_0(VAR_1);

   FUNC_2(VAR_3, VAR_2, VAR_4);
}
