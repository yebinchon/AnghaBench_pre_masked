
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ U8 ;
typedef int U32 ;
struct TYPE_5__ {int move_sector_count; } ;
struct TYPE_7__ {TYPE_1__ command_specific_data; TYPE_2__* device; } ;
struct TYPE_6__ {int capabilities; } ;
typedef TYPE_3__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,int) ;

SATI_STATUS FUNC_5(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_3,
   void * VAR_4,
   void * VAR_5,
   U32 VAR_6,
   U8 VAR_7
)
{
   U32 VAR_8;
   U8 * VAR_9 = FUNC_0(VAR_5);

   if (VAR_3->device->capabilities & VAR_1)
      VAR_8 = 65536;
   else
      VAR_8 = 256;



   if (0 == VAR_6)
   {


      return VAR_0;
   }
   else if (VAR_6 >= VAR_8)
   {


      VAR_3->command_specific_data.move_sector_count =
         VAR_6 - VAR_8;



      VAR_6 = 0;
   }

   if (VAR_7)
   {
      FUNC_1(VAR_9, VAR_6 & 0xFF);
      FUNC_2(VAR_9, (VAR_6 >> 8) & 0xFF);
   }
   else
   {
      FUNC_3(VAR_9, VAR_6 & 0xFF);
      FUNC_4(VAR_9, (VAR_6 >> 8) & 0xFF);
   }

   return VAR_2;
}
