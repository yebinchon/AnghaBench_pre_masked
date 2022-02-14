
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_6__ {int state; TYPE_1__* device; } ;
struct TYPE_5__ {int state; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;
typedef int SATA_FIS_REG_D2H_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int*,int ,int) ;
 int* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (TYPE_2__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_4(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_11,
   void * VAR_12,
   void * VAR_13
)
{
   SATI_STATUS VAR_14 = VAR_2;
   U8 * VAR_15 = FUNC_1(VAR_13);
   U8 VAR_16;





   VAR_16 = (U8) FUNC_2(VAR_15);
   if (VAR_16 & VAR_0)
   {
      FUNC_3(
         VAR_11,
         VAR_12,
         VAR_10,
         VAR_9,
         VAR_8,
         VAR_7
      );

      VAR_11->device->state = VAR_3;

      return VAR_4;
   }
   else if (VAR_16 & VAR_1)
   {

       FUNC_0(VAR_15, 0, sizeof(SATA_FIS_REG_D2H_T));


       VAR_11->state = VAR_6;
       return VAR_5;
   }

   return VAR_14;
}
