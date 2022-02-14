
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
typedef int U16 ;
struct TYPE_9__ {int physical_logical_sector_info; int logical_sector_alignment; } ;
struct TYPE_8__ {TYPE_1__* device; } ;
struct TYPE_7__ {int capabilities; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef TYPE_3__ ATA_IDENTIFY_DEVICE_DATA_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int*,int*,int*) ;
 int FUNC_1 (TYPE_2__*,void*,int,int) ;

void FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_5,
   void * VAR_6,
   void * VAR_7
)
{
   U32 VAR_8 = 0;
   U32 VAR_9 = 0;
   U32 VAR_10 = 0;
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_11;
   U16 VAR_12 = 0;
   U8 VAR_13 = 0;
   U16 VAR_14 = 0;
   U16 VAR_15 = 0;
   U16 VAR_16 = 0;
   U8 VAR_17 = 0;


   VAR_11 = (ATA_IDENTIFY_DEVICE_DATA_T*)VAR_6;



   FUNC_0(
      (ATA_IDENTIFY_DEVICE_DATA_T*)VAR_6,
      &VAR_9,
      &VAR_8,
      &VAR_10
   );





   if ((VAR_8 == 0) && (VAR_9 == 0))
      VAR_9 -= 1;
   VAR_8 -= 1;



   FUNC_1(VAR_5, VAR_7, 0, (U8)((VAR_9 >> 24) & 0xFF));
   FUNC_1(VAR_5, VAR_7, 1, (U8)((VAR_9 >> 16) & 0xFF));
   FUNC_1(VAR_5, VAR_7, 2, (U8)((VAR_9 >> 8) & 0xFF));
   FUNC_1(VAR_5, VAR_7, 3, (U8)(VAR_9 & 0xFF));

   FUNC_1(VAR_5, VAR_7, 4, (U8)((VAR_8 >> 24) & 0xFF));
   FUNC_1(VAR_5, VAR_7, 5, (U8)((VAR_8 >> 16) & 0xFF));
   FUNC_1(VAR_5, VAR_7, 6, (U8)((VAR_8 >> 8) & 0xFF));
   FUNC_1(VAR_5, VAR_7, 7, (U8)(VAR_8 & 0xFF));


   FUNC_1(VAR_5, VAR_7, 8, (U8)((VAR_10 >> 24) & 0xFF));
   FUNC_1(VAR_5, VAR_7, 9, (U8)((VAR_10 >> 16) & 0xFF));
   FUNC_1(VAR_5, VAR_7, 10, (U8)((VAR_10 >> 8) & 0xFF));
   FUNC_1(VAR_5, VAR_7, 11, (U8)(VAR_10 & 0xFF));



   FUNC_1(VAR_5, VAR_7, 12, 0);



   VAR_12 = (VAR_11->physical_logical_sector_info
      & VAR_0);



   VAR_13 = (U8) (VAR_11->physical_logical_sector_info
      & VAR_1);
   VAR_14 = 1 << (VAR_13);



   if (VAR_12 != 0)
      FUNC_1(
         VAR_5,
         VAR_7,
         13,
         (U8)(VAR_13 & 0xFF)
      );
   else
      FUNC_1(VAR_5, VAR_7, 13, 0);


   VAR_15 = VAR_11->logical_sector_alignment;
   if (VAR_15 == 0)
      VAR_16 = 0;
   else
      VAR_16 = (VAR_14 - VAR_15)
         % VAR_14;


   if ((VAR_5->device->capabilities & VAR_3) &&
       (VAR_5->device->capabilities & VAR_2))
   {

      VAR_17 |= 0x80;

      if (VAR_5->device->capabilities & VAR_4)
          VAR_17 |= 0x40;
   }
   FUNC_1(
       VAR_5,
       VAR_7,
       14,
       (U8)(((VAR_16 >>8) & 0x3F) | VAR_17));

   FUNC_1(
       VAR_5,
       VAR_7,
       15,
       (U8)(VAR_16 & 0xFF));
}
