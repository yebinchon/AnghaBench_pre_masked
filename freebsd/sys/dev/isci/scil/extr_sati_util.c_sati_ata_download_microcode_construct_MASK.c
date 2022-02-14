
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_4__ {int ata_transfer_length; int protocol; int data_direction; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,TYPE_1__*) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(
   void * VAR_4,
   SATI_TRANSLATOR_SEQUENCE_T * VAR_5,
   U8 VAR_6,
   U32 VAR_7,
   U32 VAR_8
)
{
   U8 * VAR_9 = FUNC_1(VAR_4);
   U32 VAR_10 = VAR_7 >> 9;
   U32 VAR_11 = VAR_8 >> 9;

   FUNC_2(VAR_9, VAR_0);
   FUNC_3(VAR_9, VAR_6);

   if(VAR_6 == VAR_1)
   {
      FUNC_7(VAR_9, (U8) (VAR_7 >> 9));
      FUNC_5(VAR_9, (U8) (VAR_7 >> 17));
   }
   else
   {
      FUNC_7(VAR_9, (U8) (VAR_10 & 0xff));
      FUNC_5(VAR_9, (U8) ((VAR_10 >> 8) & 0xff));
      FUNC_6(VAR_9, (U8) (VAR_11 & 0xff));
      FUNC_4(VAR_9, (U8) ((VAR_11 >> 8) & 0xff));
   }

   if((VAR_7 == 0) && (VAR_8 == 0))
   {
      FUNC_0(VAR_4, VAR_5);
   }
   else
   {
      VAR_5->data_direction = VAR_2;
      VAR_5->protocol = VAR_3;
      VAR_5->ata_transfer_length = VAR_7;
   }
}
