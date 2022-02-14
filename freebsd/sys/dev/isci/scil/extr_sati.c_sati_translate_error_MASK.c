
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_4__ {scalar_t__ data_direction; int state; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (TYPE_1__*,void*,int ,int ,int ,int ) ;

void FUNC_1(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_32,
   void * VAR_33,
   U8 VAR_34
)
{
   if (VAR_34 & VAR_4)
   {
      FUNC_0(
         VAR_32,
         VAR_33,
         VAR_31,
         VAR_29,
         VAR_19,
         VAR_11
      );
   }
   else if (VAR_34 & VAR_2)
   {
      FUNC_0(
         VAR_32,
         VAR_33,
         VAR_31,
         VAR_30,
         VAR_21,
         VAR_13
      );
   }
   else if (VAR_34 & VAR_3)
   {
      FUNC_0(
         VAR_32,
         VAR_33,
         VAR_31,
         VAR_30,
         VAR_20,
         VAR_12
      );
   }
   else if (VAR_34 & VAR_1)
   {
      FUNC_0(
         VAR_32,
         VAR_33,
         VAR_31,
         VAR_27,
         VAR_18,
         VAR_10
      );
   }
   else if (VAR_34 & VAR_5)
   {


      VAR_32->state = VAR_8;
      FUNC_0(
         VAR_32,
         VAR_33,
         VAR_31,
         VAR_28,
         VAR_23,
         VAR_15
      );
   }
   else if ( (VAR_32->data_direction == VAR_7)
           && (VAR_34 & VAR_6) )
   {
      FUNC_0(
         VAR_32,
         VAR_33,
         VAR_31,
         VAR_26,
         VAR_24,
         VAR_16
      );
   }
   else if (VAR_34 & VAR_0)
   {
      FUNC_0(
         VAR_32,
         VAR_33,
         VAR_31,
         VAR_25,
         VAR_17,
         VAR_9
      );
   }
   else
   {



      FUNC_0(
         VAR_32,
         VAR_33,
         VAR_31,
         VAR_25,
         VAR_22,
         VAR_14
      );
   }
}
