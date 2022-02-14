
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {scalar_t__ state; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,void*,int ,int ,int ,int ) ;

BOOL FUNC_1(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_7,
   void * VAR_8
)
{
   if(VAR_7->device->state == VAR_1)
   {
      FUNC_0(
         VAR_7,
         VAR_8,
         VAR_5,
         VAR_4 ,
         VAR_3,
         VAR_2
      );
      return VAR_6;
   }
   return VAR_0;
}
