
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_2__ {int lba_7_0; int lba_15_8; int lba_23_16; int lba_31_24; int lba_39_32; int lba_47_40; } ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef TYPE_1__ ATA_NCQ_COMMAND_ERROR_LOG_T ;


 int FUNC_0 (int *,void*,int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *,void*,int ,int **,int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static
void FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_0,
   void * VAR_1,
   void * VAR_2,
   U8 VAR_3,
   U8 VAR_4,
   U8 VAR_5,
   U8 VAR_6,
   U8 VAR_7
)
{
   U8 * VAR_8;
   U32 VAR_9;

   U8 VAR_10[8] = {0};

   ATA_NCQ_COMMAND_ERROR_LOG_T * VAR_11 = (ATA_NCQ_COMMAND_ERROR_LOG_T *) VAR_2;

   FUNC_1(VAR_0, VAR_1, VAR_3, &VAR_8, &VAR_9);

   FUNC_2(
      VAR_8,
      VAR_9,
      0,
      VAR_4
   );

   VAR_10[2] = VAR_11->lba_47_40;
   VAR_10[3] = VAR_11->lba_39_32;
   VAR_10[4] = VAR_11->lba_31_24;
   VAR_10[5] = VAR_11->lba_23_16;
   VAR_10[6] = VAR_11->lba_15_8;
   VAR_10[7] = VAR_11->lba_7_0;

   FUNC_0(
           VAR_0,
           VAR_1,
           VAR_8,
           VAR_9,
           VAR_5,
           VAR_6,
           VAR_7,
           VAR_10
   );
}
