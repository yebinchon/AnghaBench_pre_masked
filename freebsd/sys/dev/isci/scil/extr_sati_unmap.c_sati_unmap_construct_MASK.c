
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_3__ {int is_translate_response_required; int protocol; int data_direction; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (void*) ;
 int * FUNC_2 (void*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;

SATI_STATUS FUNC_8(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_6,
   void * VAR_7,
   void * VAR_8,
   U32 VAR_9
)
{
   U8 * VAR_10 = FUNC_2(VAR_8);
   U8 * VAR_11 = FUNC_1(VAR_8);

   FUNC_3(VAR_10, VAR_0);
   FUNC_5(VAR_10, 0x01);
   FUNC_6(VAR_10, (U8)VAR_9);
   FUNC_4(VAR_10, VAR_1);



   FUNC_7(VAR_11, 0x00);


   VAR_6->data_direction = VAR_2;
   VAR_6->protocol = VAR_4;



   VAR_6->is_translate_response_required = VAR_5;

   FUNC_0(VAR_9 < 0x100);

   return VAR_3;
}
