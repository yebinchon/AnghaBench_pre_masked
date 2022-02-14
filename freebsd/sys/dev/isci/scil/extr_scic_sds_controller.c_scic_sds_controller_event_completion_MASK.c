
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_6__ {int error; } ;
struct TYPE_7__ {size_t remote_node_entries; int ** device_table; int * phy_table; int ** io_request_table; TYPE_1__ parent; } ;
typedef int SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_PHY_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,size_t) ;
 int FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *,size_t) ;
 int FUNC_10 (size_t) ;
 int FUNC_11 (size_t) ;

__attribute__((used)) static
void FUNC_12(
   SCIC_SDS_CONTROLLER_T *VAR_10,
   U32 VAR_11
)
{
   U32 VAR_12;
   SCIC_SDS_REQUEST_T *VAR_13;
   SCIC_SDS_REMOTE_DEVICE_T *VAR_14;
   SCIC_SDS_PHY_T *VAR_15;

   VAR_12 = FUNC_2(VAR_11);

   switch (FUNC_11(VAR_11))
   {
   case 131:

      FUNC_0((
         FUNC_4(VAR_10),
         VAR_0,
         "SCIC Controller 0x%x received SMU command error 0x%x\n",
         VAR_10, VAR_11
      ));
      break;

   case 137:

       VAR_10->parent.error = VAR_8;

       FUNC_5(
          FUNC_6(VAR_10),
          VAR_7
       );


   case 129:
   case 130:
      FUNC_0((
         FUNC_4(VAR_10),
         VAR_0,
         "SCIC Controller 0x%x received fatal controller event 0x%x\n",
         VAR_10, VAR_11
      ));
      break;

   case 128:
      VAR_13 = VAR_10->io_request_table[VAR_12];
      FUNC_7(VAR_13, VAR_11);
      break;

   case 135:
      switch (FUNC_10(VAR_11))
      {
      case 141:
      case 140:
         VAR_13 = VAR_10->io_request_table[VAR_12];
         if (VAR_13 != VAR_9)
         {
            FUNC_7(VAR_13, VAR_11);
         }
         else
         {
            FUNC_1((
               FUNC_4(VAR_10),
               VAR_0 |
               VAR_1 |
               VAR_3 |
               VAR_5,
               "SCIC Controller 0x%x received event 0x%x for io request object that doesnt exist.\n",
               VAR_10, VAR_11
            ));
         }
         break;

      case 142:
         VAR_14 = VAR_10->device_table[VAR_12];
         if (VAR_14 != VAR_9)
         {
            FUNC_9(VAR_14, VAR_11);
         }
         else
         {
            FUNC_1((
               FUNC_4(VAR_10),
               VAR_0 |
               VAR_2 |
               VAR_4 |
               VAR_6,
               "SCIC Controller 0x%x received event 0x%x for remote device object that doesnt exist.\n",
               VAR_10, VAR_11
            ));
         }
         break;
      }
      break;

   case 139:


   case 138:


   case 136:
      VAR_12 = FUNC_3(VAR_11);
      VAR_15 = &VAR_10->phy_table[VAR_12];
      FUNC_8(VAR_15, VAR_11);
      break;

   case 133:
   case 132:
   case 134:
      if (VAR_12 < VAR_10->remote_node_entries)
      {
         VAR_14 = VAR_10->device_table[VAR_12];

         if (VAR_14 != ((void*)0))
         {
            FUNC_9(VAR_14, VAR_11);
         }
      }
      else
      {
         FUNC_0((
            FUNC_4(VAR_10),
            VAR_0 |
            VAR_2 |
            VAR_4 |
            VAR_6,
            "SCIC Controller 0x%x received event 0x%x for remote device object 0x%0x that doesnt exist.\n",
            VAR_10, VAR_11, VAR_12
         ));
      }
      break;

   default:
      FUNC_1((
         FUNC_4(VAR_10),
         VAR_0,
         "SCIC Controller received unknown event code %x\n",
         VAR_11
      ));
      break;
   }
}
