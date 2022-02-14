
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_15__ {int uf_control; } ;
struct TYPE_14__ {scalar_t__ fis_type; int status; } ;
struct TYPE_11__ {int signature_fis_buffer; } ;
struct TYPE_12__ {TYPE_1__ sata; } ;
struct TYPE_13__ {TYPE_2__ phy_type; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_3__ SCIC_SDS_PHY_T ;
typedef TYPE_4__ SATA_FIS_HEADER_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 TYPE_7__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,int ,void**) ;
 scalar_t__ FUNC_8 (int *,int ,void**) ;

__attribute__((used)) static
SCI_STATUS FUNC_9(
   SCIC_SDS_PHY_T *VAR_6,
   U32 VAR_7
)
{
   SCI_STATUS VAR_8;
   U32 * VAR_9;
   SATA_FIS_HEADER_T * VAR_10;
   U32 * VAR_11;

   VAR_8 = FUNC_8(
               &(FUNC_5(VAR_6)->uf_control),
               VAR_7,
               (void **)&VAR_9);

   if (VAR_8 != VAR_5)
   {
      return VAR_8;
   }

   VAR_10 = (SATA_FIS_HEADER_T *)VAR_9;

   if (
         (VAR_10->fis_type == VAR_1)
      && !(VAR_10->status & VAR_0)
      )
   {
      FUNC_7(
         &(FUNC_5(VAR_6)->uf_control),
         VAR_7,
         (void **)&VAR_11
      );

      FUNC_3(
         &VAR_6->phy_type.sata.signature_fis_buffer,
         VAR_9,
         VAR_11
      );


      FUNC_2(
         FUNC_6(VAR_6),
         VAR_4
         );

      VAR_8 = VAR_5;
   }
   else
   {
      FUNC_0((
         FUNC_1(VAR_6),
         VAR_2 | VAR_3,
         "PHY starting substate machine received unexpected frame id %x\n",
         VAR_7
      ));
   }


   FUNC_4(
      FUNC_5(VAR_6), VAR_7
      );

   return VAR_8;
}
