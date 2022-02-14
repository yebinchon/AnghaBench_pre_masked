
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* controller; int remote_device_list; } ;
struct TYPE_14__ {int parent; TYPE_3__* state_handlers; } ;
struct TYPE_12__ {int (* stop_handler ) (int *) ;} ;
struct TYPE_13__ {TYPE_2__ parent; } ;
struct TYPE_11__ {int hprq; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef int SCI_ABSTRACT_ELEMENT_T ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_5__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int *,TYPE_5__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static
void FUNC_10(
   SCI_BASE_OBJECT_T * VAR_4
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5;
   SCIF_SAS_DOMAIN_T * VAR_6 = (SCIF_SAS_DOMAIN_T *)VAR_4;
   SCI_ABSTRACT_ELEMENT_T * VAR_7 = FUNC_2(
                                             &VAR_6->remote_device_list
                                          );

   FUNC_1(
      VAR_6,
      VAR_3,
      VAR_2
   );




   FUNC_6(VAR_6);

   FUNC_0((
      FUNC_5(VAR_6),
      VAR_0 | VAR_1,
      "scif_sas_domain_stopping_state_enter(0x%x) enter\n",
      VAR_6
   ));

   FUNC_8(
      &VAR_6->controller->hprq, VAR_6
   );



   while (VAR_7 != ((void*)0))
   {
      VAR_5 = (SCIF_SAS_REMOTE_DEVICE_T*)
                  FUNC_4(VAR_7);



      VAR_5->state_handlers->parent.stop_handler(&VAR_5->parent);

      VAR_7 = FUNC_3(VAR_7);
   }


   FUNC_7(VAR_6);
}
