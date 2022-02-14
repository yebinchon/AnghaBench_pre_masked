
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_43__ {scalar_t__ state; } ;
struct TYPE_41__ {scalar_t__ scratch; } ;
struct TYPE_42__ {scalar_t__ state; void* is_sense_response_set; scalar_t__ number_data_bytes_set; TYPE_1__ command_specific_data; TYPE_3__* device; void* is_translate_response_required; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef scalar_t__ SATI_STATUS ;
typedef TYPE_3__ SATI_DEVICE_T ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int * FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int * FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_14 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_15 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_16 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_17 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_18 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_19 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_20 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_21 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_22 (TYPE_2__*,void*,void*) ;
 int FUNC_23 (TYPE_2__*,void*,int ,int ,int ,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int ) ;
 scalar_t__ FUNC_26 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_27 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_28 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_29 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_30 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_31 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_32 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_33 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_34 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_35 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_36 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_37 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_38 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_39 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_40 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_41 (TYPE_2__*,void*,void*) ;

SATI_STATUS FUNC_42(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_19,
   SATI_DEVICE_T * VAR_20,
   void * VAR_21,
   void * VAR_22
)
{
   SATI_STATUS VAR_23 = VAR_3;
   U8 * VAR_24 = FUNC_0(VAR_21);


   VAR_19->is_sense_response_set = VAR_0;

   VAR_19->is_translate_response_required = VAR_0;

   VAR_19->device = VAR_20;




   if (FUNC_3(VAR_21) != 0)
   {
      FUNC_23(
         VAR_19,
         VAR_21,
         VAR_18,
         VAR_15,
         VAR_12,
         0
      );
      return VAR_4;
   }





   if ( (FUNC_4(VAR_24, FUNC_1(VAR_21) - 1)
         & VAR_13))
   {
      FUNC_23(
         VAR_19,
         VAR_21,
         VAR_18,
         VAR_15,
         VAR_11,
         VAR_8
      );
      return VAR_4;
   }





   if (VAR_20->state == VAR_2)
   {
      FUNC_23(
         VAR_19,
         VAR_21,
         VAR_18,
         VAR_14,
         VAR_9,
         VAR_6
      );
      return VAR_4;
   }

   if(VAR_19->state == VAR_5)
   {
      VAR_19->command_specific_data.scratch = 0;
      VAR_19->number_data_bytes_set = 0;
   }
   switch (FUNC_4(VAR_24, 0))
   {

      case 148:
         VAR_23 = FUNC_21(
                     VAR_19, VAR_21, VAR_22
                  );
      break;



      case 163:
         VAR_23 = FUNC_5(
                     VAR_19, VAR_21, VAR_22
                  );
      break;



      case 158:
         VAR_23 = FUNC_10(
                     VAR_19, VAR_21, VAR_22
                  );
      break;

      case 159:
         VAR_23 = FUNC_9(
                     VAR_19, VAR_21, VAR_22
                  );
      break;



      case 160:
         VAR_23 = FUNC_8(
                     VAR_19, VAR_21, VAR_22
                  );
      break;

      case 161:
         VAR_23 = FUNC_7(
                     VAR_19, VAR_21, VAR_22
                  );
      break;



      case 142:
         VAR_23 = FUNC_28(
                     VAR_19, VAR_21, VAR_22
                  );
      break;



      case 150:
         VAR_23 = FUNC_18(
                     VAR_19, VAR_21, VAR_22
                  );
      break;

      case 146:
         if ( (FUNC_4(VAR_24, 1) & VAR_17)
              == VAR_16)
            VAR_23 = FUNC_19(
                        VAR_19, VAR_21, VAR_22
                     );
         else
            VAR_23 = VAR_4;
      break;



      case 147:
         VAR_23 = FUNC_22(
                     VAR_19, VAR_21, VAR_22
                  );
      break;


      case 152:
         VAR_23 = FUNC_16(VAR_19, VAR_21, VAR_22);
      break;

      case 155:
         VAR_23 = FUNC_13(VAR_19, VAR_21, VAR_22);
      break;

      case 154:
         VAR_23 = FUNC_14(VAR_19, VAR_21, VAR_22);
      break;

      case 153:
         VAR_23 = FUNC_15(VAR_19, VAR_21, VAR_22);
      break;

      case 134:
         VAR_23 = FUNC_36(VAR_19, VAR_21, VAR_22);
      break;

      case 137:
         VAR_23 = FUNC_33(VAR_19, VAR_21, VAR_22);
      break;

      case 136:
         VAR_23 = FUNC_34(VAR_19, VAR_21, VAR_22);
      break;

      case 135:
         VAR_23 = FUNC_35(VAR_19, VAR_21, VAR_22);
      break;


      case 140:
         VAR_23 = FUNC_30(VAR_19, VAR_21, VAR_22);
      break;

      case 139:
         VAR_23 = FUNC_31(VAR_19, VAR_21, VAR_22);
      break;

      case 138:
         VAR_23 = FUNC_32(VAR_19, VAR_21, VAR_22);
      break;






      case 133:
         VAR_23 = FUNC_37(VAR_19, VAR_21, VAR_22);
      break;

      case 132:
         VAR_23 = FUNC_38(VAR_19, VAR_21, VAR_22);
      break;

      case 131:
         VAR_23 = FUNC_39(VAR_19, VAR_21, VAR_22);
      break;





      case 149:
         VAR_23 = FUNC_20(VAR_19, VAR_21, VAR_22);
      break;



      case 144:
      case 143:
         VAR_23 = FUNC_27(VAR_19, VAR_21, VAR_22);
      break;



      case 145:
         VAR_23 = FUNC_26(
                     VAR_19, VAR_21, VAR_22
                  );
      break;



      case 129:
      case 128:
         VAR_23 = FUNC_41(VAR_19, VAR_21, VAR_22);
      break;



      case 162:
         VAR_23 = FUNC_6(VAR_19, VAR_21, VAR_22);
      break;


      case 157:
      case 156:

         FUNC_23(
            VAR_19,
            VAR_21,
            VAR_18,
            VAR_15,
            VAR_10,
            VAR_7
         );

         return VAR_4;
      break;


      case 141:
         VAR_23 = FUNC_29(VAR_19, VAR_21, VAR_22);
      break;



      case 165:
          VAR_23 = FUNC_11(VAR_19, VAR_21, VAR_22);
      break;

      case 164:
          VAR_23 = FUNC_12(VAR_19, VAR_21, VAR_22);
      break;




      case 151:
         VAR_23 = FUNC_17(VAR_19, VAR_21, VAR_22);
      break;



      case 130:
         VAR_23 = FUNC_40(VAR_19, VAR_21, VAR_22);
      break;

      default:
         VAR_23 = VAR_4;
      break;
   }

   if( (VAR_23 == VAR_4) &&
       !(VAR_19->is_sense_response_set) )
   {
      FUNC_23(
         VAR_19,
         VAR_21,
         VAR_18,
         VAR_15,
         VAR_11,
         VAR_8
      );
   }
   return VAR_23;
}
