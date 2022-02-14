
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_2__ {scalar_t__ lba_39_32; int lba_31_24; int lba_23_16; int lba_15_8; int lba_7_0; } ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef TYPE_1__ ATA_NCQ_COMMAND_ERROR_LOG_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int,int,int) ;
 int FUNC_1 (int *,void*,int,int**,int *) ;
 int FUNC_2 (int*,int ,int,int) ;

__attribute__((used)) static
void FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_2,
   void * VAR_3,
   void * VAR_4,
   U8 VAR_5,
   U8 VAR_6,
   U8 VAR_7,
   U8 VAR_8,
   U8 VAR_9
)
{
   U8 * VAR_10;
   U32 VAR_11;
   U8 VAR_12 = VAR_1;

   ATA_NCQ_COMMAND_ERROR_LOG_T * VAR_13 = (ATA_NCQ_COMMAND_ERROR_LOG_T *) VAR_4;

   FUNC_1(VAR_2, VAR_3, VAR_5, &VAR_10, &VAR_11);

   if(VAR_13->lba_39_32 > 0)
   {
      VAR_12 = VAR_0;
   }

   FUNC_2(
      VAR_10,
      VAR_11,
      0,
      (VAR_12 << 7) | VAR_6
   );

   FUNC_2(VAR_10, VAR_11, 3, VAR_13->lba_31_24);
   FUNC_2(VAR_10, VAR_11, 4, VAR_13->lba_23_16);
   FUNC_2(VAR_10, VAR_11, 5, VAR_13->lba_15_8);
   FUNC_2(VAR_10, VAR_11, 6, VAR_13->lba_7_0);

   FUNC_0(
      VAR_10,
      VAR_11,
      VAR_7,
      VAR_8,
      VAR_9
   );
}
