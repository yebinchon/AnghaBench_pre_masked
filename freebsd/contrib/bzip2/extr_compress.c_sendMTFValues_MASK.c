
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
typedef size_t UInt16 ;
typedef int UChar ;
struct TYPE_4__ {size_t* mtfv; int verbosity; int nMTF; int nInUse; int** len; int** len_pack; int* selector; int* selectorMtf; int** code; int numZ; scalar_t__* inUse; scalar_t__** rfreq; scalar_t__* mtfFreq; int nblock; } ;
typedef int Int32 ;
typedef TYPE_1__ EState ;
typedef scalar_t__ Bool ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int*,int,int,int) ;
 int FUNC_2 (int*,scalar_t__*,int,int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (char*,int ,int,int) ;
 int FUNC_10 (char*,int,int,int,int,double) ;
 int FUNC_11 (TYPE_1__*,int,int) ;

__attribute__((used)) static
void FUNC_12 ( EState* VAR_8 )
{
   Int32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
   Int32 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
   Int32 VAR_24, VAR_25;
   UInt16 VAR_26[VAR_4];
   Int32 VAR_27[VAR_4];

   UInt16* VAR_28 = VAR_8->mtfv;

   if (VAR_8->verbosity >= 3)
      FUNC_9( "      %d in block, %d after MTF & 1-2 coding, "
                "%d+2 syms in use\n",
                VAR_8->nblock, VAR_8->nMTF, VAR_8->nInUse );

   VAR_20 = VAR_8->nInUse+2;
   for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
      for (VAR_9 = 0; VAR_9 < VAR_20; VAR_9++)
         VAR_8->len[VAR_10][VAR_9] = VAR_0;


   FUNC_0 ( VAR_8->nMTF > 0, 3001 );
   if (VAR_8->nMTF < 200) VAR_24 = 2; else
   if (VAR_8->nMTF < 600) VAR_24 = 3; else
   if (VAR_8->nMTF < 1200) VAR_24 = 4; else
   if (VAR_8->nMTF < 2400) VAR_24 = 5; else
                       VAR_24 = 6;


   {
      Int32 VAR_29, VAR_30, VAR_31, VAR_32;

      VAR_29 = VAR_24;
      VAR_30 = VAR_8->nMTF;
      VAR_13 = 0;
      while (VAR_29 > 0) {
         VAR_31 = VAR_30 / VAR_29;
         VAR_14 = VAR_13-1;
         VAR_32 = 0;
         while (VAR_32 < VAR_31 && VAR_14 < VAR_20-1) {
            VAR_14++;
            VAR_32 += VAR_8->mtfFreq[VAR_14];
         }

         if (VAR_14 > VAR_13
             && VAR_29 != VAR_24 && VAR_29 != 1
             && ((VAR_24-VAR_29) % 2 == 1)) {
            VAR_32 -= VAR_8->mtfFreq[VAR_14];
            VAR_14--;
         }

         if (VAR_8->verbosity >= 3)
            FUNC_10( "      initial group %d, [%d .. %d], "
                      "has %d syms (%4.1f%%)\n",
                      VAR_29, VAR_13, VAR_14, VAR_32,
                      (100.0 * (float)VAR_32) / (float)(VAR_8->nMTF) );

         for (VAR_9 = 0; VAR_9 < VAR_20; VAR_9++)
            if (VAR_9 >= VAR_13 && VAR_9 <= VAR_14)
               VAR_8->len[VAR_29-1][VAR_9] = VAR_2; else
               VAR_8->len[VAR_29-1][VAR_9] = VAR_0;

         VAR_29--;
         VAR_13 = VAR_14+1;
         VAR_30 -= VAR_32;
      }
   }




   for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {

      for (VAR_10 = 0; VAR_10 < VAR_24; VAR_10++) VAR_27[VAR_10] = 0;

      for (VAR_10 = 0; VAR_10 < VAR_24; VAR_10++)
         for (VAR_9 = 0; VAR_9 < VAR_20; VAR_9++)
            VAR_8->rfreq[VAR_10][VAR_9] = 0;





      if (VAR_24 == 6) {
         for (VAR_9 = 0; VAR_9 < VAR_20; VAR_9++) {
            VAR_8->len_pack[VAR_9][0] = (VAR_8->len[1][VAR_9] << 16) | VAR_8->len[0][VAR_9];
            VAR_8->len_pack[VAR_9][1] = (VAR_8->len[3][VAR_9] << 16) | VAR_8->len[2][VAR_9];
            VAR_8->len_pack[VAR_9][2] = (VAR_8->len[5][VAR_9] << 16) | VAR_8->len[4][VAR_9];
  }
      }

      VAR_19 = 0;
      VAR_15 = 0;
      VAR_13 = 0;
      while (VAR_7) {


         if (VAR_13 >= VAR_8->nMTF) break;
         VAR_14 = VAR_13 + VAR_1 - 1;
         if (VAR_14 >= VAR_8->nMTF) VAR_14 = VAR_8->nMTF-1;





         for (VAR_10 = 0; VAR_10 < VAR_24; VAR_10++) VAR_26[VAR_10] = 0;

         if (VAR_24 == 6 && 50 == VAR_14-VAR_13+1) {

            register UInt32 VAR_33, VAR_34, VAR_35;
            register UInt16 VAR_36;
            VAR_33 = VAR_34 = VAR_35 = 0;







            VAR_36 = VAR_28[VAR_13+(0)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(1)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(2)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(3)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(4)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];;
            VAR_36 = VAR_28[VAR_13+(5)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(6)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(7)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(8)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(9)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];;
            VAR_36 = VAR_28[VAR_13+(10)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(11)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(12)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(13)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(14)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];;
            VAR_36 = VAR_28[VAR_13+(15)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(16)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(17)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(18)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(19)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];;
            VAR_36 = VAR_28[VAR_13+(20)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(21)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(22)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(23)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(24)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];;
            VAR_36 = VAR_28[VAR_13+(25)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(26)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(27)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(28)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(29)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];;
            VAR_36 = VAR_28[VAR_13+(30)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(31)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(32)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(33)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(34)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];;
            VAR_36 = VAR_28[VAR_13+(35)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(36)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(37)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(38)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(39)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];;
            VAR_36 = VAR_28[VAR_13+(40)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(41)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(42)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(43)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(44)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];;
            VAR_36 = VAR_28[VAR_13+(45)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(46)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(47)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(48)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];; VAR_36 = VAR_28[VAR_13+(49)]; VAR_33 += VAR_8->len_pack[VAR_36][0]; VAR_34 += VAR_8->len_pack[VAR_36][1]; VAR_35 += VAR_8->len_pack[VAR_36][2];;



            VAR_26[0] = VAR_33 & 0xffff; VAR_26[1] = VAR_33 >> 16;
            VAR_26[2] = VAR_34 & 0xffff; VAR_26[3] = VAR_34 >> 16;
            VAR_26[4] = VAR_35 & 0xffff; VAR_26[5] = VAR_35 >> 16;

         } else {

            for (VAR_11 = VAR_13; VAR_11 <= VAR_14; VAR_11++) {
               UInt16 VAR_37 = VAR_28[VAR_11];
               for (VAR_10 = 0; VAR_10 < VAR_24; VAR_10++) VAR_26[VAR_10] += VAR_8->len[VAR_10][VAR_37];
            }
         }





         VAR_17 = 999999999; VAR_16 = -1;
         for (VAR_10 = 0; VAR_10 < VAR_24; VAR_10++)
            if (VAR_26[VAR_10] < VAR_17) { VAR_17 = VAR_26[VAR_10]; VAR_16 = VAR_10; };
         VAR_15 += VAR_17;
         VAR_27[VAR_16]++;
         VAR_8->selector[VAR_19] = VAR_16;
         VAR_19++;




         if (VAR_24 == 6 && 50 == VAR_14-VAR_13+1) {




            VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(0)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(1)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(2)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(3)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(4)] ]++;
            VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(5)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(6)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(7)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(8)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(9)] ]++;
            VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(10)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(11)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(12)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(13)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(14)] ]++;
            VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(15)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(16)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(17)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(18)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(19)] ]++;
            VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(20)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(21)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(22)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(23)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(24)] ]++;
            VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(25)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(26)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(27)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(28)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(29)] ]++;
            VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(30)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(31)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(32)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(33)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(34)] ]++;
            VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(35)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(36)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(37)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(38)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(39)] ]++;
            VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(40)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(41)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(42)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(43)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(44)] ]++;
            VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(45)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(46)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(47)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(48)] ]++; VAR_8->rfreq[VAR_16][ VAR_28[VAR_13+(49)] ]++;



         } else {

            for (VAR_11 = VAR_13; VAR_11 <= VAR_14; VAR_11++)
               VAR_8->rfreq[VAR_16][ VAR_28[VAR_11] ]++;
         }

         VAR_13 = VAR_14+1;
      }
      if (VAR_8->verbosity >= 3) {
         FUNC_8 ( "      pass %d: size is %d, grp uses are ",
                   VAR_18+1, VAR_15/8 );
         for (VAR_10 = 0; VAR_10 < VAR_24; VAR_10++)
            FUNC_7 ( "%d ", VAR_27[VAR_10] );
         FUNC_6 ( "\n" );
      }






      for (VAR_10 = 0; VAR_10 < VAR_24; VAR_10++)
         FUNC_2 ( &(VAR_8->len[VAR_10][0]), &(VAR_8->rfreq[VAR_10][0]),
                                 VAR_20, 17 );
   }


   FUNC_0( VAR_24 < 8, 3002 );
   FUNC_0( VAR_19 < 32768 &&
            VAR_19 <= VAR_3,
            3003 );



   {
      UChar VAR_38[VAR_4], VAR_39, VAR_40, VAR_41;
      for (VAR_11 = 0; VAR_11 < VAR_24; VAR_11++) VAR_38[VAR_11] = VAR_11;
      for (VAR_11 = 0; VAR_11 < VAR_19; VAR_11++) {
         VAR_39 = VAR_8->selector[VAR_11];
         VAR_12 = 0;
         VAR_41 = VAR_38[VAR_12];
         while ( VAR_39 != VAR_41 ) {
            VAR_12++;
            VAR_40 = VAR_41;
            VAR_41 = VAR_38[VAR_12];
            VAR_38[VAR_12] = VAR_40;
         };
         VAR_38[0] = VAR_41;
         VAR_8->selectorMtf[VAR_11] = VAR_12;
      }
   };


   for (VAR_10 = 0; VAR_10 < VAR_24; VAR_10++) {
      VAR_21 = 32;
      VAR_22 = 0;
      for (VAR_11 = 0; VAR_11 < VAR_20; VAR_11++) {
         if (VAR_8->len[VAR_10][VAR_11] > VAR_22) VAR_22 = VAR_8->len[VAR_10][VAR_11];
         if (VAR_8->len[VAR_10][VAR_11] < VAR_21) VAR_21 = VAR_8->len[VAR_10][VAR_11];
      }
      FUNC_0 ( !(VAR_22 > 17 ), 3004 );
      FUNC_0 ( !(VAR_21 < 1), 3005 );
      FUNC_1 ( &(VAR_8->code[VAR_10][0]), &(VAR_8->len[VAR_10][0]),
                          VAR_21, VAR_22, VAR_20 );
   }


   {
      Bool VAR_42[16];
      for (VAR_11 = 0; VAR_11 < 16; VAR_11++) {
          VAR_42[VAR_11] = VAR_6;
          for (VAR_12 = 0; VAR_12 < 16; VAR_12++)
             if (VAR_8->inUse[VAR_11 * 16 + VAR_12]) VAR_42[VAR_11] = VAR_7;
      }

      VAR_25 = VAR_8->numZ;
      for (VAR_11 = 0; VAR_11 < 16; VAR_11++)
         if (VAR_42[VAR_11]) FUNC_11(VAR_8,1,1); else FUNC_11(VAR_8,1,0);

      for (VAR_11 = 0; VAR_11 < 16; VAR_11++)
         if (VAR_42[VAR_11])
            for (VAR_12 = 0; VAR_12 < 16; VAR_12++) {
               if (VAR_8->inUse[VAR_11 * 16 + VAR_12]) FUNC_11(VAR_8,1,1); else FUNC_11(VAR_8,1,0);
            }

      if (VAR_8->verbosity >= 3)
         FUNC_7( "      bytes: mapping %d, ", VAR_8->numZ-VAR_25 );
   }


   VAR_25 = VAR_8->numZ;
   FUNC_11 ( VAR_8, 3, VAR_24 );
   FUNC_11 ( VAR_8, 15, VAR_19 );
   for (VAR_11 = 0; VAR_11 < VAR_19; VAR_11++) {
      for (VAR_12 = 0; VAR_12 < VAR_8->selectorMtf[VAR_11]; VAR_12++) FUNC_11(VAR_8,1,1);
      FUNC_11(VAR_8,1,0);
   }
   if (VAR_8->verbosity >= 3)
      FUNC_7( "selectors %d, ", VAR_8->numZ-VAR_25 );


   VAR_25 = VAR_8->numZ;

   for (VAR_10 = 0; VAR_10 < VAR_24; VAR_10++) {
      Int32 VAR_43 = VAR_8->len[VAR_10][0];
      FUNC_11 ( VAR_8, 5, VAR_43 );
      for (VAR_11 = 0; VAR_11 < VAR_20; VAR_11++) {
         while (VAR_43 < VAR_8->len[VAR_10][VAR_11]) { FUNC_11(VAR_8,2,2); VAR_43++; };
         while (VAR_43 > VAR_8->len[VAR_10][VAR_11]) { FUNC_11(VAR_8,2,3); VAR_43--; };
         FUNC_11 ( VAR_8, 1, 0 );
      }
   }

   if (VAR_8->verbosity >= 3)
      FUNC_7 ( "code lengths %d, ", VAR_8->numZ-VAR_25 );


   VAR_25 = VAR_8->numZ;
   VAR_23 = 0;
   VAR_13 = 0;
   while (VAR_7) {
      if (VAR_13 >= VAR_8->nMTF) break;
      VAR_14 = VAR_13 + VAR_1 - 1;
      if (VAR_14 >= VAR_8->nMTF) VAR_14 = VAR_8->nMTF-1;
      FUNC_0 ( VAR_8->selector[VAR_23] < VAR_24, 3006 );

      if (VAR_24 == 6 && 50 == VAR_14-VAR_13+1) {

            UInt16 VAR_44;
            UChar* VAR_45
               = &(VAR_8->len[VAR_8->selector[VAR_23]][0]);
            Int32* VAR_46
               = &(VAR_8->code[VAR_8->selector[VAR_23]][0]);







            VAR_44 = VAR_28[VAR_13+(0)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(1)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(2)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(3)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(4)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] );
            VAR_44 = VAR_28[VAR_13+(5)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(6)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(7)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(8)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(9)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] );
            VAR_44 = VAR_28[VAR_13+(10)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(11)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(12)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(13)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(14)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] );
            VAR_44 = VAR_28[VAR_13+(15)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(16)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(17)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(18)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(19)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] );
            VAR_44 = VAR_28[VAR_13+(20)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(21)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(22)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(23)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(24)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] );
            VAR_44 = VAR_28[VAR_13+(25)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(26)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(27)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(28)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(29)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] );
            VAR_44 = VAR_28[VAR_13+(30)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(31)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(32)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(33)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(34)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] );
            VAR_44 = VAR_28[VAR_13+(35)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(36)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(37)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(38)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(39)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] );
            VAR_44 = VAR_28[VAR_13+(40)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(41)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(42)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(43)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(44)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] );
            VAR_44 = VAR_28[VAR_13+(45)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(46)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(47)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(48)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] ); VAR_44 = VAR_28[VAR_13+(49)]; FUNC_11 ( VAR_8, VAR_45[VAR_44], VAR_46[VAR_44] );



      } else {

         for (VAR_11 = VAR_13; VAR_11 <= VAR_14; VAR_11++) {
            FUNC_11 ( VAR_8,
                  VAR_8->len [VAR_8->selector[VAR_23]] [VAR_28[VAR_11]],
                  VAR_8->code [VAR_8->selector[VAR_23]] [VAR_28[VAR_11]] );
         }
      }


      VAR_13 = VAR_14+1;
      VAR_23++;
   }
   FUNC_0( VAR_23 == VAR_19, 3007 );

   if (VAR_8->verbosity >= 3)
      FUNC_7( "codes %d\n", VAR_8->numZ-VAR_25 );
}
