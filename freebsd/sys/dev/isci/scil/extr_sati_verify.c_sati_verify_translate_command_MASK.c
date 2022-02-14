
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_6__ {TYPE_1__* device; int data_direction; int protocol; } ;
struct TYPE_5__ {int capabilities; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_0 (void*) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*,void*,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static
SATI_STATUS FUNC_6(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_13,
   void * VAR_14,
   void * VAR_15
)
{
   U8 * VAR_16 = FUNC_0(VAR_14);
   U8 * VAR_17 = FUNC_1(VAR_15);





   if ((FUNC_2(VAR_16, 1) & VAR_12))
   {
      FUNC_3(
         VAR_13,
         VAR_14,
         VAR_11,
         VAR_10,
         VAR_9,
         VAR_8
      );
      return VAR_5;
   }

   VAR_13->protocol = VAR_7;
   VAR_13->data_direction = VAR_3;

   FUNC_5(VAR_17, VAR_0);


   if (VAR_13->device->capabilities & VAR_4)
      FUNC_4(VAR_17, VAR_2);
   else
      FUNC_4(VAR_17, VAR_1);

   return VAR_6;
}
