
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; int is_sense_response_set; } ;
typedef int SCI_SSP_RESPONSE_IU_T ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,void*) ;

void FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_4,
   void * VAR_5,
   void * VAR_6
)
{

   SCI_SSP_RESPONSE_IU_T * VAR_7 = (SCI_SSP_RESPONSE_IU_T*)
                                 FUNC_0(VAR_5);

   FUNC_1(
      VAR_7,
      VAR_2,
      FUNC_2(VAR_4, VAR_5),
      VAR_1
   );

   VAR_4->is_sense_response_set = VAR_3;

   VAR_4->state = VAR_0;
}
