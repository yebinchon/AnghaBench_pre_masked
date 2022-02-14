
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_7__ {int is_sense_response_set; } ;
struct TYPE_6__ {scalar_t__ data; } ;
typedef TYPE_1__ SCI_SSP_RESPONSE_IU_T ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 int* FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (int*) ;
 int FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (int*) ;
 int FUNC_9 (int*) ;
 scalar_t__ FUNC_10 (int*) ;
 int FUNC_11 (int*) ;
 scalar_t__ FUNC_12 (int*) ;
 int FUNC_13 (int*) ;
 scalar_t__ FUNC_14 (int*) ;
 scalar_t__ FUNC_15 (int*) ;
 int FUNC_16 (TYPE_1__*,int,int ,int ) ;
 int FUNC_17 (TYPE_2__*,void*,int,int,int,int) ;
 int FUNC_18 (int*,int,int,int) ;

__attribute__((used)) static
void FUNC_19(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_4,
   U8 * VAR_5,
   void * VAR_6,
   U8 VAR_7,
   U8 VAR_8,
   U8 VAR_9,
   U8 VAR_10
)
{
   U8 * VAR_11;
   U32 VAR_12;
   U8 * VAR_13;
   unsigned char VAR_14;
   unsigned char VAR_15;
   VAR_11 = FUNC_3(VAR_6);
   VAR_12 = FUNC_4(VAR_6);


   FUNC_17(
      VAR_4,
      VAR_6,
      VAR_7,
      VAR_8,
      VAR_9,
      VAR_10
   );

   VAR_13 = FUNC_1(VAR_6);

   if (FUNC_14(VAR_5) != 0) {
      VAR_14 = 1;
   } else {
       VAR_14 = 0;
   }

   if (FUNC_8(VAR_5) != 0 ||
       FUNC_12(VAR_5) != 0 ||
       FUNC_10(VAR_5) != 0) {
      VAR_15 = 1;
   } else {
       VAR_15 = 0;
   }


   FUNC_18(VAR_11, VAR_12, 3, (U8)FUNC_6(VAR_5));
   FUNC_18(VAR_11, VAR_12, 4, (U8)FUNC_15(VAR_5));
   FUNC_18(VAR_11, VAR_12, 5, FUNC_5(VAR_5));
   FUNC_18(VAR_11, VAR_12, 6, FUNC_13(VAR_5));


   FUNC_18(VAR_11, VAR_12, 8, (FUNC_0(VAR_13) << 7) | (VAR_14 << 6) | (VAR_15 << 5));
   FUNC_18(VAR_11, VAR_12, 9, FUNC_9(VAR_5));
   FUNC_18(VAR_11, VAR_12, 10, FUNC_11(VAR_5));
   FUNC_18(VAR_11, VAR_12, 11, FUNC_7(VAR_5));

   VAR_4->is_sense_response_set = VAR_3;
}
