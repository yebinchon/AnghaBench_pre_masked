
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
typedef int U16 ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {int capabilities; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int ATA_IDENTIFY_DEVICE_DATA_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* FUNC_0 (void*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (TYPE_2__*,void*,int,int) ;

__attribute__((used)) static
U32 FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_8,
   void * VAR_9,
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_10,
   U16 VAR_11
)
{
   U8 * VAR_12 = FUNC_0(VAR_9);





   VAR_11 -= 2;
   FUNC_2(VAR_8, VAR_9, 0, (U8)(VAR_11 >> 8) & 0xFF);
   FUNC_2(VAR_8, VAR_9, 1, (U8)(VAR_11 & 0xFF));


   FUNC_2(VAR_8, VAR_9, 2, VAR_1);


   if (VAR_8->device->capabilities & VAR_0)
      FUNC_2(VAR_8,VAR_9,3,VAR_4);
   else
      FUNC_2(VAR_8, VAR_9, 3, 0);



   FUNC_2(VAR_8, VAR_9, 4, 0);
   FUNC_2(VAR_8, VAR_9, 5, 0);



   FUNC_2(VAR_8, VAR_9, 6, 0);


   if (FUNC_1(VAR_12, 1) & VAR_3)
      FUNC_2(VAR_8, VAR_9, 7, 0);
   else
   {


      if (FUNC_1(VAR_12, 1) & VAR_5)
      {
         FUNC_2(VAR_8, VAR_9, 4, 1);
         FUNC_2(
            VAR_8, VAR_9, 7, VAR_6
         );
      }
      else
      {
         FUNC_2(
            VAR_8, VAR_9, 7, VAR_7
         );
      }
   }

   return VAR_2;
}
