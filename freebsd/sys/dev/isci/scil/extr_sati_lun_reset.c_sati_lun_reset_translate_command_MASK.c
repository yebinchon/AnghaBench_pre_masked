
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_3__ {scalar_t__ ata_transfer_length; int protocol; int data_direction; int type; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;

SATI_STATUS FUNC_15(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_6,
   void * VAR_7,
   void * VAR_8
)
{
   U8* VAR_9 = FUNC_0(VAR_8);

   FUNC_2(VAR_9, VAR_1);
   FUNC_3(VAR_9, VAR_0);


   FUNC_1(VAR_9);
   FUNC_5(VAR_9, 0);
   FUNC_6(VAR_9, 0);
   FUNC_13(VAR_9, 0);
   FUNC_14(VAR_9, 0);
   FUNC_9(VAR_9, 0);
   FUNC_11(VAR_9, 0);
   FUNC_7(VAR_9, 0);
   FUNC_10(VAR_9, 0);
   FUNC_12(VAR_9, 0);
   FUNC_8(VAR_9, 0);
   FUNC_4(VAR_9, 0);

   VAR_6->type = VAR_3;
   VAR_6->data_direction = VAR_2;
   VAR_6->protocol = VAR_5;
   VAR_6->ata_transfer_length = 0;

   return VAR_4;
}
