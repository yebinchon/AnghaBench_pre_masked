
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_6__ {TYPE_1__* device; int data_direction; } ;
struct TYPE_5__ {int capabilities; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,TYPE_2__*) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static
SATI_STATUS FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_5,
   void * VAR_6,
   void * VAR_7
)
{
   U8 * VAR_8 = FUNC_1(VAR_7);

   FUNC_0(VAR_7, VAR_5);
   VAR_5->data_direction = VAR_2;





   if (VAR_5->device->capabilities & VAR_3)
      FUNC_2(VAR_8, VAR_1);
   else
      FUNC_2(VAR_8, VAR_0);

   return VAR_4;
}
