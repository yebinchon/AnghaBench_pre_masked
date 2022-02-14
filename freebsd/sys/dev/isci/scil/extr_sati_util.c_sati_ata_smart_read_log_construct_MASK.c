
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_3__ {int ata_transfer_length; int protocol; int data_direction; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;

void FUNC_6(
   void * VAR_4,
   SATI_TRANSLATOR_SEQUENCE_T * VAR_5,
   U8 VAR_6,
   U32 VAR_7
)
{
   U8 * VAR_8 = FUNC_0(VAR_4);

   FUNC_1(VAR_8, VAR_0);
   FUNC_2(VAR_8, VAR_1);

   FUNC_3(VAR_8, 0xC2);
   FUNC_5(VAR_8, 0x4F);
   FUNC_4(VAR_8, VAR_6);

   VAR_5->data_direction = VAR_2;
   VAR_5->protocol = VAR_3;
   VAR_5->ata_transfer_length = VAR_7;
}
