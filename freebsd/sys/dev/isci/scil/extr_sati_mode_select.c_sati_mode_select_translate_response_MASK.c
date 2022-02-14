
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_4__ {scalar_t__ state; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_3(
SATI_TRANSLATOR_SEQUENCE_T * VAR_10,
void * VAR_11,
void * VAR_12
)
{
   U8 * VAR_13 = FUNC_0(VAR_12);
   SATI_STATUS VAR_14 = VAR_2;

   if(FUNC_1(VAR_13) & VAR_0)
   {
      FUNC_2(
         VAR_10,
         VAR_11,
         VAR_9,
         VAR_8,
         VAR_7,
         VAR_6
      );
      VAR_14 = VAR_3;
   }
   else
   {
      if (VAR_10->state == VAR_5)
      {
         VAR_14 = VAR_4;
      }
      else
      {
         VAR_14 = VAR_1;
      }
   }
   return VAR_14;
}
