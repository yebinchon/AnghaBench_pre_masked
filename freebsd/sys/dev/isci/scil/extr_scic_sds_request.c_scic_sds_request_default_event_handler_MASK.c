
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {int state_machine; } ;
struct TYPE_6__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

SCI_STATUS FUNC_3(
   SCIC_SDS_REQUEST_T * VAR_4,
   U32 VAR_5
)
{
   FUNC_0((
      FUNC_1(VAR_4),
      (
          VAR_1
        | VAR_2
        | VAR_0
      ),
      "SCIC IO Request given event code notification %x while in wrong state %d\n",
      VAR_5,
      FUNC_2(&VAR_4->parent.state_machine)
   ));

   return VAR_3;
}
