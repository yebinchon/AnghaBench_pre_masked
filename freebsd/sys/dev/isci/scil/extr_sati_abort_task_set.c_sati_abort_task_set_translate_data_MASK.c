
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_7__ {int ncq_tag; scalar_t__ nq; int error; } ;
struct TYPE_6__ {scalar_t__ state; } ;
typedef int SCI_IO_STATUS ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;
typedef TYPE_2__ ATA_NCQ_COMMAND_ERROR_LOG_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (void*,int,void*) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (TYPE_1__*,void*,void*,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,void*,int ) ;

SATI_STATUS FUNC_4(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_10,
   void * VAR_11,
   void * VAR_12
)
{
   ATA_NCQ_COMMAND_ERROR_LOG_T * VAR_13 =
      (ATA_NCQ_COMMAND_ERROR_LOG_T *)VAR_11;
   U8 VAR_14;

   VAR_10->state = VAR_3;

   for (VAR_14 = 0; VAR_14 < 32; VAR_14++)
   {
      void * VAR_15;
      SCI_IO_STATUS VAR_16;
      FUNC_0(
         VAR_12,
         VAR_14,
         VAR_15
      );

      if (VAR_15 != ((void*)0))
      {
         if (
              (VAR_13->ncq_tag == VAR_14) &&
              (VAR_13->nq == 0)

            )
         {
            FUNC_3(VAR_10, VAR_15, VAR_13->error);
            VAR_16 = VAR_4;

            if(VAR_10->state == VAR_2)
            {

               FUNC_2(
                  VAR_10,
                  VAR_15,
                  VAR_11,
                  VAR_9,
                  VAR_8,
                  VAR_7,
                  VAR_6
               );
            }
         }
         else
         {
            VAR_16 = VAR_5;
         }

         FUNC_1(VAR_15, VAR_16);
      }
   }

   VAR_10->state = VAR_1;

   return VAR_0;
}
