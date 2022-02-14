
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_4__ {int state; int type; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;
typedef int ATA_NCQ_COMMAND_ERROR_LOG_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,TYPE_1__*,int ,int) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (int *) ;

SATI_STATUS FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_4,
   void * VAR_5,
   void * VAR_6
)
{
   U8 * VAR_7;


   FUNC_0(
      VAR_6,
      VAR_4,
      VAR_0,
      sizeof(ATA_NCQ_COMMAND_ERROR_LOG_T)
   );

   VAR_7 = FUNC_1(VAR_6);
   FUNC_2(VAR_7);

   VAR_4->type = VAR_1;
   VAR_4->state = VAR_2;

   return VAR_3;
}
