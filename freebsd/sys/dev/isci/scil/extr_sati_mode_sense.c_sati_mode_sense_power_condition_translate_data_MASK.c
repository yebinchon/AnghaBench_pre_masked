
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ U8 ;
typedef int U32 ;
struct TYPE_9__ {int capabilities1; } ;
struct TYPE_8__ {TYPE_1__* device; } ;
struct TYPE_7__ {scalar_t__ ata_standby_timer; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef TYPE_3__ ATA_IDENTIFY_DEVICE_DATA_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (TYPE_2__*,void*,int,scalar_t__) ;

U32 FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_7,
   void * VAR_8,
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_9,
   U32 VAR_10
)
{
   U8 * VAR_11 = FUNC_0(VAR_8);
   U8 VAR_12 = FUNC_1(VAR_11, 2) >> VAR_3;

   U8 VAR_13;


   U32 VAR_14 = 0x00000000;

   U8 VAR_15 = VAR_4;

   if ((VAR_12 == VAR_2) &&
       (VAR_9->capabilities1 & VAR_6))
   {
      VAR_15 = VAR_5;

      VAR_13 = VAR_7->device->ata_standby_timer;


      if(VAR_13 <= 0xF0)
      {
         VAR_14 = VAR_13 * 50;
      }
      else if(VAR_13 <= 0xFB)
      {
         VAR_14 = ((VAR_13 - 240) * 18000);
      }
      else if(VAR_13 == 0xFC)
      {
         VAR_14 = 12600;
      }
      else if(VAR_13 == 0xFD)
      {
         VAR_14 = 432000;
      }
      else if(VAR_13 == 0xFF)
      {
         VAR_14 = 12750;
      }
      else
      {
         VAR_14 = 0xFFFFFFFF;
      }
   }

   FUNC_2(VAR_7, VAR_8, VAR_10, VAR_1);
   FUNC_2(VAR_7, VAR_8, VAR_10 + 1, (VAR_0 - 2));
   FUNC_2(VAR_7, VAR_8, VAR_10 + 2, 0x00);
   FUNC_2(VAR_7, VAR_8, VAR_10 + 3, VAR_15);
   FUNC_2(VAR_7, VAR_8, VAR_10 + 4, 0x00);
   FUNC_2(VAR_7, VAR_8, VAR_10 + 5, 0x00);
   FUNC_2(VAR_7, VAR_8, VAR_10 + 6, 0x00);
   FUNC_2(VAR_7, VAR_8, VAR_10 + 7, 0x00);
   FUNC_2(VAR_7, VAR_8, VAR_10 + 8, (U8) (VAR_14 >> 24));
   FUNC_2(VAR_7, VAR_8, VAR_10 + 9, (U8) (VAR_14 >> 16));
   FUNC_2(VAR_7, VAR_8, VAR_10 + 10, (U8) (VAR_14 >> 8));
   FUNC_2(VAR_7, VAR_8, VAR_10 + 11, (U8) VAR_14);

   return VAR_0;
}
