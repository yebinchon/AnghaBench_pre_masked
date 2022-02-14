
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {int capabilities; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,TYPE_2__*) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static
SATI_STATUS FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_4,
   void * VAR_5,
   void * VAR_6
)
{
   U8 * VAR_7 = FUNC_1(VAR_6);

   FUNC_0(VAR_6, VAR_4);


   if (VAR_4->device->capabilities & VAR_2)
      FUNC_2(VAR_7, VAR_1);
   else
      FUNC_2(VAR_7, VAR_0);

   return VAR_3;
}
