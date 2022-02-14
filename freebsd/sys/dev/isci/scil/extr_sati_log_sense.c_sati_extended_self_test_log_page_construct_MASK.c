
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* self_test_descriptor_index; } ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef TYPE_1__ ATA_EXTENDED_SMART_SELF_TEST_LOG_T ;


 int FUNC_0 (int *,void*,TYPE_1__*) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,void*) ;

__attribute__((used)) static
void FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_0,
   void * VAR_1,
   void * VAR_2
)
{
   ATA_EXTENDED_SMART_SELF_TEST_LOG_T * VAR_3 =
                  (ATA_EXTENDED_SMART_SELF_TEST_LOG_T*) VAR_2;

   FUNC_1(VAR_0, VAR_1);


   if( (VAR_3->self_test_descriptor_index[0] == 0) &&
       (VAR_3->self_test_descriptor_index[1] == 0))
   {
      FUNC_2(VAR_0, VAR_1);
   }
   else
   {
      FUNC_0(VAR_0, VAR_1, VAR_3);
   }
}
