
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; int type; int is_translate_response_required; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,void*,void*) ;
 int FUNC_1 (TYPE_1__*,void*,void*) ;

SATI_STATUS FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_6,
   void * VAR_7,
   void * VAR_8
)
{
   SATI_STATUS VAR_9;

   if(VAR_6->state == VAR_3)
   {
      VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_8);
      VAR_6->state = VAR_2;
      VAR_6->is_translate_response_required = VAR_5;
   }
   else if(VAR_6->state == VAR_2)
   {
      VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_8);
      VAR_6->state = VAR_1;
   }
   else
   {

      return VAR_0;
   }

   VAR_6->type = VAR_4;
   return VAR_9;
}
