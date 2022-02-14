
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_6__ {int get; } ;
struct TYPE_5__ {TYPE_2__ uf_control; } ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;

void FUNC_2(
   SCIC_SDS_CONTROLLER_T *VAR_1,
   U32 VAR_2
)
{
   if (FUNC_1(
          &VAR_1->uf_control, VAR_2) == VAR_0)
      FUNC_0(VAR_1, VAR_1->uf_control.get);
}
