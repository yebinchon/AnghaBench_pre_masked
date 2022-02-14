
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_25__ {int scratch; } ;
struct TYPE_26__ {int type; TYPE_2__ command_specific_data; int state; TYPE_1__* device; } ;
struct TYPE_24__ {int state; } ;
typedef TYPE_3__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 void* FUNC_0 (void*) ;
 int* FUNC_1 (void*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 (TYPE_3__*,void*,void*) ;
 int FUNC_6 (TYPE_3__*,void*,void*) ;
 int FUNC_7 (TYPE_3__*,void*,void*) ;
 int FUNC_8 (TYPE_3__*,void*,void*) ;
 int FUNC_9 (TYPE_3__*,void*,void*) ;
 int FUNC_10 (TYPE_3__*,void*,void*) ;
 int FUNC_11 (TYPE_3__*,void*,void*) ;
 int FUNC_12 (TYPE_3__*,void*,void*,int ,int ,int ,int ) ;
 int FUNC_13 (TYPE_3__*,void*,int ,int ,int ,int ) ;
 int FUNC_14 (TYPE_3__*,void*,void*) ;
 int FUNC_15 (TYPE_3__*,void*,void*) ;
 int FUNC_16 (TYPE_3__*,void*,void*) ;
 int FUNC_17 (TYPE_3__*,void*,void*) ;
 int FUNC_18 (TYPE_3__*,void*,int) ;
 int FUNC_19 (TYPE_3__*,void*,void*) ;
 int FUNC_20 (TYPE_3__*,void*,void*) ;
 int FUNC_21 (TYPE_3__*,void*,void*) ;
 int FUNC_22 (TYPE_3__*,void*,void*) ;

SATI_STATUS FUNC_23(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_17,
   void * VAR_18,
   void * VAR_19
)
{
   SATI_STATUS VAR_20 = VAR_2;
   U8 * VAR_21 = FUNC_1(VAR_19);
   U8 VAR_22;





   VAR_22 = (U8) FUNC_4(VAR_21);
   if (VAR_22 & VAR_0)
   {
      FUNC_13(
         VAR_17,
         VAR_18,
         VAR_16,
         VAR_14,
         VAR_12,
         VAR_10
      );

      VAR_17->device->state = VAR_3;



      FUNC_14(VAR_17,
                              VAR_18,
                              VAR_19);

      return VAR_5;
   }



   switch (VAR_17->type)
   {

      case 140:
         VAR_20 = FUNC_16(
                     VAR_17, VAR_18, VAR_19
                  );
      break;






      case 177:

         if (VAR_22 & VAR_1)
         {
            U8 VAR_23 = (U8) FUNC_3(VAR_21);
            VAR_20 = VAR_5;
            FUNC_18(VAR_17, VAR_18, VAR_23);
         }
         else
         {
            FUNC_5(
               VAR_17,
               VAR_18,
               VAR_19
            );
            VAR_20 = FUNC_2(VAR_17);
         }
      break;

      case 175:
      case 174:
      case 176:
      case 179:
      case 180:
      case 178:
      case 147:
      case 146:
      case 158:
      case 155:
      case 153:
      case 156:
      case 157:
      case 154:
      case 159:
      case 165:
      case 162:
      case 160:
      case 164:
      case 161:
      case 163:
      case 166:

         if (VAR_22 & VAR_1)
         {
            U8 VAR_24 = (U8) FUNC_3(VAR_21);
            VAR_20 = VAR_5;
            FUNC_18(VAR_17, VAR_18, VAR_24);
         }
         else
         {
            void * VAR_25 = FUNC_0(VAR_19);

            if(VAR_25 == ((void*)0))
            {
               VAR_20 = VAR_4;
            }
            else
            {
               FUNC_17(VAR_17, VAR_25, VAR_18);
               VAR_20 = FUNC_2(VAR_17);
            }
         }
      break;





      case 168:

         VAR_20 = FUNC_7(
            VAR_17, VAR_18, VAR_19
               );
         if(VAR_20 == VAR_2)
         {
            VAR_20 = FUNC_2(VAR_17);
         }
         break;

      case 167:
      case 169:

         if (VAR_22 & VAR_1)
         {
            U8 VAR_26 = (U8) FUNC_3(VAR_21);
            VAR_20 = VAR_5;
            FUNC_18(VAR_17, VAR_18, VAR_26);
         }
         else
         {
            VAR_20 = FUNC_2(VAR_17);
         }
      break;



      case 131:

         if (VAR_22 & VAR_1)
         {
            U8 VAR_27 = (U8) FUNC_3(VAR_21);
            FUNC_18(VAR_17, VAR_18, VAR_27);

            return VAR_5;
         }
         else
         {
            VAR_20 = FUNC_20(
                        VAR_17,
                        VAR_18,
                        VAR_19
                     );
         }
      break;


      case 149:
      case 152:
      case 151:
      case 150:
      case 132:
      case 135:
      case 134:
      case 133:
      case 138:
      case 137:
      case 136:
      case 141:
         if (VAR_22 & VAR_1)
         {
            U8 VAR_28 = (U8) FUNC_3(VAR_21);
            VAR_20 = VAR_5;
            FUNC_18(VAR_17, VAR_18, VAR_28);

            if(VAR_17->state == VAR_9 )
            {
               FUNC_12(
                  VAR_17,
                  VAR_18,
                  VAR_19,
                  VAR_16,
                  VAR_15,
                  VAR_13,
                  VAR_11
               );
               VAR_17->state = VAR_8;
            }
         }
         else
         {



            if (VAR_17->command_specific_data.scratch)
            {



               VAR_20 = VAR_7;
            }
         }
      break;


      case 148:
         VAR_20 = FUNC_9(
                     VAR_17, VAR_18, VAR_19
                  );

         if(VAR_20 == VAR_2)
         {
            VAR_20 = FUNC_2(VAR_17);
         }
      break;



      case 130:
      case 129:
         VAR_20 = FUNC_21(
                     VAR_17, VAR_18, VAR_19
                  );
      break;



      case 145:
         VAR_20 = FUNC_10(
                     VAR_17, VAR_18, VAR_19
                  );
         if(VAR_20 == VAR_2)
         {
            VAR_20 = FUNC_2(VAR_17);
         }
      break;



      case 142:
         VAR_20 = FUNC_15(
                     VAR_17, VAR_18, VAR_19
                  );
         if(VAR_20 == VAR_2)
         {
            VAR_20 = FUNC_2(VAR_17);
         }
      break;



      case 143:
      case 144:
         VAR_20 = FUNC_11(
                     VAR_17, VAR_18, VAR_19
                  );
         if(VAR_20 == VAR_2)
         {
            VAR_20 = FUNC_2(VAR_17);
         }
      break;



      case 128:
         VAR_20 = FUNC_22(
                     VAR_17, VAR_18, VAR_19
                  );
         if(VAR_20 == VAR_2)
         {
            VAR_20 = FUNC_2(VAR_17);
         }
      break;



      case 170:
      case 171:
      case 173:
      case 172:
         VAR_20 = FUNC_6(
                     VAR_17, VAR_18, VAR_19
                  );
         if(VAR_20 == VAR_2)
         {
            VAR_20 = FUNC_2(VAR_17);
         }
      break;



      case 139:
         VAR_20 = FUNC_19(
                     VAR_17, VAR_18, VAR_19
                  );
      break;



      case 182:
      case 181:
         VAR_20 = FUNC_8(
                     VAR_17, VAR_18, VAR_19
                  );
      break;


      default:
         VAR_20 = VAR_6;
      break;
   }

   return VAR_20;
}
