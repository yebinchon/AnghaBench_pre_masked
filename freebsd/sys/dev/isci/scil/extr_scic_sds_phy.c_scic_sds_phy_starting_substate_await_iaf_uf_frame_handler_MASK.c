
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int U32 ;
struct TYPE_16__ {int identify_address_frame_buffer; } ;
struct TYPE_17__ {TYPE_1__ sas; } ;
struct TYPE_22__ {TYPE_2__ phy_type; } ;
struct TYPE_18__ {scalar_t__ smp_target; } ;
struct TYPE_19__ {TYPE_3__ bits; } ;
struct TYPE_20__ {TYPE_4__ u; } ;
struct TYPE_21__ {scalar_t__ address_frame_type; TYPE_5__ protocols; } ;
struct TYPE_15__ {int uf_control; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_6__ SCI_SAS_IDENTIFY_ADDRESS_FRAME_T ;
typedef TYPE_7__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,TYPE_6__*,int) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_10__*,int ) ;
 TYPE_10__* FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 scalar_t__ FUNC_8 (int *,int ,void**) ;

__attribute__((used)) static
SCI_STATUS FUNC_9(
   SCIC_SDS_PHY_T *VAR_5,
   U32 VAR_6
)
{
   SCI_STATUS VAR_7;
   U32 *VAR_8;
   SCI_SAS_IDENTIFY_ADDRESS_FRAME_T *VAR_9;

   VAR_7 = FUNC_8(
               &(FUNC_6(VAR_5)->uf_control),
               VAR_6,
               (void **)&VAR_8);

   if (VAR_7 != VAR_4)
   {
      return VAR_7;
   }

   VAR_8[0] = FUNC_1(VAR_8[0]);
   VAR_9 = (SCI_SAS_IDENTIFY_ADDRESS_FRAME_T *)VAR_8;

   if (VAR_9->address_frame_type == 0)
   {


      VAR_8[1] = FUNC_1(VAR_8[1]);
      VAR_8[2] = FUNC_1(VAR_8[2]);
      VAR_8[3] = FUNC_1(VAR_8[3]);
      VAR_8[4] = FUNC_1(VAR_8[4]);
      VAR_8[5] = FUNC_1(VAR_8[5]);

      FUNC_2(
         &VAR_5->phy_type.sas.identify_address_frame_buffer,
         VAR_9,
         sizeof(SCI_SAS_IDENTIFY_ADDRESS_FRAME_T)
      );

      if (VAR_9->protocols.u.bits.smp_target)
      {


         FUNC_4(
            FUNC_7(VAR_5),
            VAR_3
         );
      }
      else
      {

         FUNC_4(
            FUNC_7(VAR_5),
            VAR_2
         );
      }

      VAR_7 = VAR_4;
   }
   else
   {
      FUNC_0((
         FUNC_3(VAR_5),
         VAR_0 | VAR_1,
         "PHY starting substate machine received unexpected frame id %x\n",
         VAR_6
      ));
   }


   FUNC_5(
      FUNC_6(VAR_5), VAR_6
      );

   return VAR_7;
}
