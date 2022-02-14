
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_5__ {TYPE_1__* device; int data_direction; int protocol; int type; } ;
struct TYPE_4__ {int capabilities; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (void*) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;

SATI_STATUS FUNC_4(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_8,
   void * VAR_9,
   void * VAR_10
)
{
   U8 * VAR_11 = FUNC_0(VAR_9);
   U8 * VAR_12 = FUNC_1(VAR_10);

   VAR_8->type = VAR_4;
   VAR_8->protocol = VAR_6;
   VAR_8->data_direction = VAR_2;

   if (FUNC_2(VAR_11, 1) & VAR_7)
   {

      ;
   }


   if (VAR_8->device->capabilities & VAR_3)
      FUNC_3(VAR_12, VAR_1);
   else
      FUNC_3(VAR_12, VAR_0);

   return VAR_5;
}
