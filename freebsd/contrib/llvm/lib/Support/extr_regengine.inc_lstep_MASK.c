
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_guts {int * strip; int * sets; } ;
typedef int states ;
typedef size_t sopno ;
typedef int sop ;
typedef int onestate ;
typedef int cset ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int const FUNC_8 (int ) ;

 int FUNC_9 (int ) ;






 int FUNC_10 (int) ;
 int VAR_5 ;

__attribute__((used)) static states
FUNC_11(struct re_guts *VAR_6,
    sopno VAR_7,
    sopno VAR_8,
    states VAR_9,
    int VAR_10,
    states VAR_11)
{
 cset *VAR_12;
 sop VAR_13;
 sopno VAR_14;
 onestate VAR_15;
 sopno VAR_16;
 int VAR_17;

 for (VAR_14 = VAR_7, FUNC_4(VAR_15, VAR_14); VAR_14 != VAR_8; VAR_14++, FUNC_3(VAR_15)) {
  VAR_13 = VAR_6->strip[VAR_14];
  switch (FUNC_8(VAR_13)) {
  case 140:
   FUNC_10(VAR_14 == VAR_8-1);
   break;
  case 142:

   FUNC_10(!FUNC_7(VAR_10) || VAR_10 != (char)FUNC_9(VAR_13));
   if (VAR_10 == (char)FUNC_9(VAR_13))
    FUNC_2(VAR_11, VAR_9, 1);
   break;
  case 144:
   if (VAR_10 == VAR_0 || VAR_10 == VAR_1)
    FUNC_2(VAR_11, VAR_9, 1);
   break;
  case 139:
   if (VAR_10 == VAR_3 || VAR_10 == VAR_1)
    FUNC_2(VAR_11, VAR_9, 1);
   break;
  case 143:
   if (VAR_10 == VAR_2)
    FUNC_2(VAR_11, VAR_9, 1);
   break;
  case 138:
   if (VAR_10 == VAR_4)
    FUNC_2(VAR_11, VAR_9, 1);
   break;
  case 147:
   if (!FUNC_7(VAR_10))
    FUNC_2(VAR_11, VAR_9, 1);
   break;
  case 146:
   VAR_12 = &VAR_6->sets[FUNC_9(VAR_13)];
   if (!FUNC_7(VAR_10) && FUNC_1(VAR_12, VAR_10))
    FUNC_2(VAR_11, VAR_9, 1);
   break;
  case 145:
  case 131:
   FUNC_2(VAR_11, VAR_11, 1);
   break;
  case 134:
   FUNC_2(VAR_11, VAR_11, 1);
   break;
  case 129:
   FUNC_2(VAR_11, VAR_11, 1);
   VAR_17 = FUNC_5(VAR_11, FUNC_9(VAR_13));
   FUNC_0(VAR_11, VAR_11, FUNC_9(VAR_13));
   if (!VAR_17 && FUNC_5(VAR_11, FUNC_9(VAR_13))) {

    VAR_14 -= FUNC_9(VAR_13) + 1;
    FUNC_4(VAR_15, VAR_14);
   }
   break;
  case 133:
   FUNC_2(VAR_11, VAR_11, 1);
   FUNC_2(VAR_11, VAR_11, FUNC_9(VAR_13));
   break;
  case 128:
   FUNC_2(VAR_11, VAR_11, 1);
   break;
  case 137:
  case 132:
   FUNC_2(VAR_11, VAR_11, 1);
   break;
  case 141:
   FUNC_2(VAR_11, VAR_11, 1);
   FUNC_10(FUNC_8(VAR_6->strip[VAR_14+FUNC_9(VAR_13)]) == 135);
   FUNC_2(VAR_11, VAR_11, FUNC_9(VAR_13));
   break;
  case 136:
   if (FUNC_6(VAR_11, VAR_15)) {
    for (VAR_16 = 1;
      FUNC_8(VAR_13 = VAR_6->strip[VAR_14+VAR_16]) != 130;
      VAR_16 += FUNC_9(VAR_13))
     FUNC_10(FUNC_8(VAR_13) == 135);
    FUNC_2(VAR_11, VAR_11, VAR_16);
   }
   break;
  case 135:
   FUNC_2(VAR_11, VAR_11, 1);
   if (FUNC_8(VAR_6->strip[VAR_14+FUNC_9(VAR_13)]) != 130) {
    FUNC_10(FUNC_8(VAR_6->strip[VAR_14+FUNC_9(VAR_13)]) == 135);
    FUNC_2(VAR_11, VAR_11, FUNC_9(VAR_13));
   }
   break;
  case 130:
   FUNC_2(VAR_11, VAR_11, 1);
   break;
  default:
   FUNC_10(VAR_5);
   break;
  }
 }

 return(VAR_11);
}
