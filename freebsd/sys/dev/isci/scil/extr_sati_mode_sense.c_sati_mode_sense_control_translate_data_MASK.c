
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int U8 ;
typedef scalar_t__ U32 ;
struct TYPE_8__ {TYPE_1__* device; } ;
struct TYPE_7__ {scalar_t__ descriptor_sense_enable; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int ATA_IDENTIFY_DEVICE_DATA_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (void*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (TYPE_2__*,void*,scalar_t__,int*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,void*,scalar_t__,int,int ) ;
 int FUNC_4 (TYPE_2__*,void*,scalar_t__,int) ;

U32 FUNC_5(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_3,
   void * VAR_4,
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_5,
   U32 VAR_6
)
{
   U8 * VAR_7 = FUNC_0(VAR_4);
   U8 VAR_8 = FUNC_1(VAR_7, 2) >> VAR_2;
   U32 VAR_9;
   U8 VAR_10;

   VAR_9 = FUNC_3(
                    VAR_3,
                    VAR_4,
                    VAR_6,
                    VAR_8,
                    VAR_0
                 );

   if (VAR_3->device->descriptor_sense_enable)
   {
       FUNC_2(VAR_3, VAR_4, VAR_6+2,
               &VAR_10);

       FUNC_4(VAR_3, VAR_4, VAR_6+2,
               VAR_10 | VAR_1);
   }

   return VAR_9;
}
