
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int data_direction; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (TYPE_1__*,void*,void*) ;

SATI_STATUS FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_3,
   void * VAR_4,
   void * VAR_5
)
{
   if(FUNC_0(VAR_3, VAR_4))
   {
      return VAR_1;
   }
   else
   {
      VAR_3->data_direction = VAR_0;
      VAR_3->type = VAR_2;

      return FUNC_1(VAR_3, VAR_4, VAR_5);
   }
}
