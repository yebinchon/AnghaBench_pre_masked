
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_8__ {int count; } ;
struct TYPE_9__ {TYPE_1__ address_table; } ;
struct TYPE_10__ {TYPE_2__ uf_control; } ;
typedef TYPE_3__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*,int) ;

void FUNC_7(
   SCIC_SDS_CONTROLLER_T *VAR_3
)
{
   U32 VAR_4;
   U32 VAR_5;
   U32 VAR_6;


   VAR_4 =
      FUNC_0(VAR_2, VAR_3->uf_control.address_table.count);

   FUNC_1(VAR_3, VAR_4);


   VAR_5 = (
         FUNC_3(VAR_1, 0)
      | FUNC_2(VAR_0)
      );

   FUNC_4(VAR_3, VAR_5);


   VAR_6 = FUNC_5(VAR_1, 0);

   FUNC_6(VAR_3, VAR_6);
}
