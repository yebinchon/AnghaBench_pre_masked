
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_guts {int* strip; size_t* stripdata; int * sets; } ;
typedef int states ;
typedef size_t sopno ;
typedef int sop ;
typedef int onestate ;
typedef int cset ;
typedef size_t RCHAR_T ;


 int FUNC_0 (int ,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;







 int FUNC_8 (int) ;
 int VAR_5 ;

__attribute__((used)) static states
FUNC_9(struct re_guts *VAR_6,
    sopno VAR_7,
    sopno VAR_8,
    states VAR_9,
    int VAR_10,
    RCHAR_T VAR_11,
    states VAR_12)
{
 cset *VAR_13;
 sop VAR_14;
 RCHAR_T VAR_15;
 sopno VAR_16;
 onestate VAR_17;
 sopno VAR_18;
 int VAR_19;

 for (VAR_16 = VAR_7, FUNC_4(VAR_17, VAR_16); VAR_16 != VAR_8; VAR_16++, FUNC_3(VAR_17)) {
  VAR_14 = VAR_6->strip[VAR_16];
  VAR_15 = VAR_6->stripdata[VAR_16];
  switch (VAR_14) {
  case 140:
   FUNC_8(VAR_16 == VAR_8-1);
   break;
  case 142:

   FUNC_8(!VAR_10 || VAR_11 != VAR_15);
   if (VAR_11 == VAR_15)
    FUNC_2(VAR_12, VAR_9, 1);
   break;
  case 144:
   if (VAR_10 == VAR_0 || VAR_10 == VAR_1)
    FUNC_2(VAR_12, VAR_9, 1);
   break;
  case 139:
   if (VAR_10 == VAR_3 || VAR_10 == VAR_1)
    FUNC_2(VAR_12, VAR_9, 1);
   break;
  case 143:
   if (VAR_10 == VAR_2)
    FUNC_2(VAR_12, VAR_9, 1);
   break;
  case 138:
   if (VAR_10 == VAR_4)
    FUNC_2(VAR_12, VAR_9, 1);
   break;
  case 147:
   if (!VAR_10)
    FUNC_2(VAR_12, VAR_9, 1);
   break;
  case 146:
   VAR_13 = &VAR_6->sets[VAR_15];
   if (!VAR_10 && FUNC_1(VAR_13, VAR_11))
    FUNC_2(VAR_12, VAR_9, 1);
   break;
  case 145:
  case 131:
   FUNC_2(VAR_12, VAR_12, 1);
   break;
  case 134:
   FUNC_2(VAR_12, VAR_12, 1);
   break;
  case 129:
   FUNC_2(VAR_12, VAR_12, 1);
   VAR_19 = FUNC_5(VAR_12, VAR_15);
   FUNC_0(VAR_12, VAR_12, VAR_15);
   if (!VAR_19 && FUNC_5(VAR_12, VAR_15)) {

    VAR_16 -= VAR_15 + 1;
    FUNC_4(VAR_17, VAR_16);
   }
   break;
  case 133:
   FUNC_2(VAR_12, VAR_12, 1);
   FUNC_2(VAR_12, VAR_12, VAR_15);
   break;
  case 128:
   FUNC_2(VAR_12, VAR_12, 1);
   break;
  case 137:
  case 132:
   FUNC_2(VAR_12, VAR_12, 1);
   break;
  case 141:
   FUNC_2(VAR_12, VAR_12, 1);
   FUNC_8(FUNC_7(VAR_6->strip[VAR_16+VAR_15]) == 135);
   FUNC_2(VAR_12, VAR_12, VAR_15);
   break;
  case 136:
   if (FUNC_6(VAR_12, VAR_17)) {
    for (VAR_18 = 1; ; VAR_18 += VAR_15) {
     VAR_14 = VAR_6->strip[VAR_16+VAR_18];
     VAR_15 = VAR_6->stripdata[VAR_16+VAR_18];
     if (VAR_14 == 130)
      break;
     FUNC_8(VAR_14 == 135);
    }
    FUNC_2(VAR_12, VAR_12, VAR_18);
   }
   break;
  case 135:
   FUNC_2(VAR_12, VAR_12, 1);
   if (VAR_6->strip[VAR_16+VAR_15] != 130) {
    FUNC_8(VAR_6->strip[VAR_16+VAR_15] == 135);
    FUNC_2(VAR_12, VAR_12, VAR_15);
   }
   break;
  case 130:
   FUNC_2(VAR_12, VAR_12, 1);
   break;
  default:
   FUNC_8(VAR_5);
   break;
  }
 }

 return(VAR_12);
}
