
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ U8 ;
typedef int U32 ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {int capabilities; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int ATA_IDENTIFY_DEVICE_DATA_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__* FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (TYPE_2__*,void*,int,scalar_t__) ;

__attribute__((used)) static
U32 FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_6,
   void * VAR_7,
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_8,
   U8 VAR_9
)
{
   U8 * VAR_10 = FUNC_0(VAR_7);



   FUNC_2(VAR_6, VAR_7, 0, (U8)VAR_9-1);


   FUNC_2(VAR_6, VAR_7, 1, VAR_1);


   if (VAR_6->device->capabilities & VAR_0)
      FUNC_2(VAR_6,VAR_7,2,VAR_4);
   else
      FUNC_2(VAR_6, VAR_7, 2, 0);


   if (FUNC_1(VAR_10, 1) & VAR_3)
      FUNC_2(VAR_6, VAR_7, 3, 0);
   else
      FUNC_2(
         VAR_6, VAR_7, 3, VAR_5
      );

   return VAR_2;
}
