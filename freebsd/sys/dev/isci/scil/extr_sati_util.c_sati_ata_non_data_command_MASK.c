
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ata_transfer_length; int protocol; int data_direction; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(
   void * VAR_2,
   SATI_TRANSLATOR_SEQUENCE_T * VAR_3
)
{
   VAR_3->data_direction = VAR_0;
   VAR_3->protocol = VAR_1;
   VAR_3->ata_transfer_length = 0;
}
