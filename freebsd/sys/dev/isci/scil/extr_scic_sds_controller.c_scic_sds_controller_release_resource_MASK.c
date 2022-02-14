
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t U8 ;
struct TYPE_9__ {int * timer; } ;
struct TYPE_10__ {int * phy_table; int * port_table; int port_agent; int * timeout_timer; TYPE_1__ power_control; int * phy_startup_timer; } ;
typedef int SCI_STATUS ;
typedef int SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_6(
   SCIC_SDS_CONTROLLER_T * VAR_5
)
{
   SCIC_SDS_PORT_T * VAR_6;
   SCIC_SDS_PHY_T * VAR_7;
   U8 VAR_8;

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_0 | VAR_1,
      "scic_sds_controller_release_resource(0x%x) enter\n",
      VAR_5
   ));

   if(VAR_5->phy_startup_timer != ((void*)0))
   {
      FUNC_2(VAR_5, VAR_5->phy_startup_timer);
      VAR_5->phy_startup_timer = ((void*)0);
   }

   if(VAR_5->power_control.timer != ((void*)0))
   {
      FUNC_2(VAR_5, VAR_5->power_control.timer);
      VAR_5->power_control.timer = ((void*)0);
   }

   if(VAR_5->timeout_timer != ((void*)0))
   {
      FUNC_2(VAR_5, VAR_5->timeout_timer);
      VAR_5->timeout_timer = ((void*)0);
   }

   FUNC_4(
      VAR_5,
      &VAR_5->port_agent);

   for(VAR_8 = 0; VAR_8 < VAR_3+1; VAR_8++)
   {
      VAR_6 = &VAR_5->port_table[VAR_8];
      FUNC_5(VAR_5, VAR_6);
   }

   for(VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
   {
      VAR_7 = &VAR_5->phy_table[VAR_8];
      FUNC_3(VAR_5, VAR_7);
   }

   return VAR_4;
}
