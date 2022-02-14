
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_13__ {int state_machine; int parent; } ;
struct TYPE_14__ {int sat_protocol; TYPE_1__ parent; int started_substate_machine; int protocol; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_IO_REQUEST_DATA_DIRECTION ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;
typedef int BOOL ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;

SCI_STATUS FUNC_12(
   SCIC_SDS_REQUEST_T * VAR_10,
   U8 VAR_11,
   U32 VAR_12,
   SCI_IO_REQUEST_DATA_DIRECTION VAR_13,
   BOOL VAR_14,
   BOOL VAR_15
)
{
   SCI_STATUS VAR_16 = VAR_5;

   VAR_10->protocol = VAR_2;

   VAR_10->sat_protocol = VAR_11;

   switch (VAR_11)
   {
   case 140:
      FUNC_8(
         VAR_10,
         VAR_7,
         VAR_12,
         VAR_13
      );


      if (VAR_15 == VAR_8)
         FUNC_4(VAR_10);
   break;

   case 129:
   case 128:
      FUNC_7(VAR_10);

      FUNC_8(
         VAR_10, VAR_6, VAR_12, VAR_13
      );


      if (VAR_15 == VAR_8)
         FUNC_4(VAR_10);

      FUNC_3(
         &VAR_10->started_substate_machine,
         &VAR_10->parent.parent,
         VAR_9,
         VAR_1
      );
   break;

   case 133:
   case 132:
      VAR_16 = FUNC_10(
                  VAR_10, VAR_11, VAR_14);
   break;

   case 145:
   case 130:
      VAR_16 = FUNC_11(VAR_10);
   break;

   case 139:
      VAR_16 = FUNC_6(VAR_10);
   break;


   case 136:
   case 138:
   case 137:
   case 135:
   case 134:
      VAR_16 = FUNC_9(VAR_10);
      if (VAR_15 == VAR_8)
         FUNC_4(VAR_10);
   break;


   case 141:
   case 142:
   case 144:
   case 143:
   case 131:
   default:
      FUNC_0((
         FUNC_1(VAR_10),
         VAR_0,
         "SCIC IO Request 0x%x received un-handled SAT Protocol %d.\n",
         VAR_10, VAR_11
      ));

      VAR_16 = VAR_4;
   break;
   }

   if (VAR_16 == VAR_5)
   {
      FUNC_5(VAR_10);

      FUNC_2(
         &VAR_10->parent.state_machine,
         VAR_3
      );
   }

   return VAR_16;
}
