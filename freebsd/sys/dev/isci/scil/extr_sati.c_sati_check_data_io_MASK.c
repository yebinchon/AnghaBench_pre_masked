
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; scalar_t__ number_data_bytes_set; scalar_t__ allocation_length; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static
SATI_STATUS FUNC_0(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_4
)
{
   if(VAR_4->state == VAR_3)
   {
      return VAR_2;
   }
   else if(VAR_4->number_data_bytes_set < VAR_4->allocation_length)
   {
      return VAR_1;
   }
   else
   {
      return VAR_0;
   }
}
