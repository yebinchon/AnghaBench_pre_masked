
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef enum SCIC_PORT_CONFIGURATION_MODE { ____Placeholder_SCIC_PORT_CONFIGURATION_MODE } SCIC_PORT_CONFIGURATION_MODE ;
struct TYPE_15__ {int mode_type; } ;
struct TYPE_16__ {TYPE_1__ controller; } ;
struct TYPE_17__ {TYPE_2__ sds1; } ;
struct TYPE_19__ {TYPE_3__ oem_parameters; } ;
struct TYPE_18__ {int * timer; int link_down_handler; int link_up_handler; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_4__ SCIC_SDS_PORT_CONFIGURATION_AGENT_T ;
typedef TYPE_5__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_5__*) ;
 void* FUNC_3 (TYPE_5__*,int ,TYPE_5__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_4__*) ;

SCI_STATUS FUNC_6(
   SCIC_SDS_CONTROLLER_T * VAR_11,
   SCIC_SDS_PORT_CONFIGURATION_AGENT_T * VAR_12
)
{
   SCI_STATUS VAR_13 = VAR_4;
   enum SCIC_PORT_CONFIGURATION_MODE VAR_14;

   FUNC_1((
      FUNC_2(VAR_11),
      VAR_0 | VAR_1,
      "scic_sds_port_configuration_agent_initialize(0x%08x, 0x%08x) enter\n",
      VAR_11, VAR_12
   ));

   VAR_14 = VAR_11->oem_parameters.sds1.controller.mode_type;

   if (VAR_14 == VAR_2)
   {
      VAR_13 = FUNC_5(VAR_11, VAR_12);

      VAR_12->link_up_handler = VAR_9;
      VAR_12->link_down_handler = VAR_8;

      VAR_12->timer = FUNC_3(
                              VAR_11,
                              VAR_10,
                              VAR_11
                          );
   }
   else
   {
      VAR_13 = FUNC_4(VAR_11, VAR_12);

      VAR_12->link_up_handler = VAR_6;
      VAR_12->link_down_handler = VAR_5;

      VAR_12->timer = FUNC_3(
                              VAR_11,
                              VAR_7,
                              VAR_11
                          );
   }


   if (VAR_13 == VAR_4 && VAR_12->timer == ((void*)0))
   {
      FUNC_0((
         FUNC_2(VAR_11),
         VAR_0,
         "Controller 0x%x automatic port configuration agent could not get timer.\n",
         VAR_11
     ));

     VAR_13 = VAR_3;
   }

   return VAR_13;
}
