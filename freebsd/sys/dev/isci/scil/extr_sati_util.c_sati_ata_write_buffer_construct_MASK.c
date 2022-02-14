
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_3__ {int ata_transfer_length; int protocol; int data_direction; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(
   void * VAR_3,
   SATI_TRANSLATOR_SEQUENCE_T * VAR_4
)
{
   U8 * VAR_5 = FUNC_0(VAR_3);

   FUNC_1(VAR_5, VAR_0);

   VAR_4->data_direction = VAR_1;
   VAR_4->protocol = VAR_2;
   VAR_4->ata_transfer_length = 512;
}
