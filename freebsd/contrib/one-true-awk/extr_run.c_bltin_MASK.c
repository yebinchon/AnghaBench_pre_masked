
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uschar ;
typedef int time_t ;
struct TYPE_19__ {int nelem; } ;
struct TYPE_18__ {scalar_t__ sval; } ;
struct TYPE_17__ {struct TYPE_17__* nnext; } ;
typedef TYPE_1__ Node ;
typedef int FILE ;
typedef TYPE_2__ Cell ;
typedef int Awkfloat ;
typedef TYPE_3__ Array ;


 int VAR_0 ;

 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*) ;
 TYPE_2__* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 TYPE_2__* FUNC_16 () ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int,int*) ;
 int * FUNC_23 (int const,int ) ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 () ;
 int FUNC_26 (TYPE_2__*,int) ;
 int FUNC_27 (TYPE_2__*,char*) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int) ;
 int VAR_1 ;
 int FUNC_30 (unsigned long) ;
 int * VAR_2 ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (TYPE_2__*) ;
 int FUNC_34 (int *) ;
 char FUNC_35 (int ) ;
 char* FUNC_36 (int ) ;
 char FUNC_37 (int ) ;

Cell *FUNC_38(Node **VAR_3, int VAR_4)
{
 Cell *VAR_5, *VAR_6;
 Awkfloat VAR_7;
 int VAR_8, VAR_9;
 Awkfloat VAR_10;
 char *VAR_11, *VAR_12;
 Node *VAR_13;
 FILE *VAR_14;
 void FUNC_39(void);
 int VAR_15 = 0;

 VAR_8 = FUNC_24(VAR_3[0]);
 VAR_5 = FUNC_10(VAR_3[1]);
 VAR_13 = VAR_3[1]->nnext;
 switch (VAR_8) {
 case 139:
  if (FUNC_17(VAR_5))
   VAR_7 = ((Array *) VAR_5->sval)->nelem;
  else
   VAR_7 = FUNC_31(FUNC_15(VAR_5));
  break;
 case 138:
  VAR_7 = FUNC_9(FUNC_21(FUNC_14(VAR_5)), "log"); break;
 case 140:
  FUNC_22(FUNC_14(VAR_5), &VAR_7); break;
 case 143:
  VAR_7 = FUNC_9(FUNC_11(FUNC_14(VAR_5)), "exp"); break;
 case 133:
  VAR_7 = FUNC_9(FUNC_29(FUNC_14(VAR_5)), "sqrt"); break;
 case 134:
  VAR_7 = FUNC_28(FUNC_14(VAR_5)); break;
 case 144:
  VAR_7 = FUNC_8(FUNC_14(VAR_5)); break;
 case 146:
  if (VAR_13 == ((void*)0)) {
   FUNC_1("atan2 requires two arguments; returning 1.0");
   VAR_7 = 1.0;
  } else {
   VAR_6 = FUNC_10(VAR_3[1]->nnext);
   VAR_7 = FUNC_7(FUNC_14(VAR_5), FUNC_14(VAR_6));
   FUNC_33(VAR_6);
   VAR_13 = VAR_13->nnext;
  }
  break;
 case 145:
  VAR_7 = ~((int)FUNC_14(VAR_5));
  break;
 case 147:
  if (VAR_13 == ((void*)0)) {
   FUNC_1("and requires two arguments; returning 0");
   VAR_7 = 0;
   break;
  }
  VAR_9 = ((int)FUNC_14(VAR_5));
  while (VAR_13 != ((void*)0)) {
   VAR_6 = FUNC_10(VAR_13);
   VAR_9 &= (int)FUNC_14(VAR_6);
   FUNC_33(VAR_6);
   VAR_13 = VAR_13->nnext;
  }
  VAR_7 = VAR_9;
  break;
 case 141:
  if (VAR_13 == ((void*)0)) {
   FUNC_1("or requires two arguments; returning 0");
   VAR_7 = 0;
   break;
  }
  VAR_9 = ((int)FUNC_14(VAR_5));
  while (VAR_13 != ((void*)0)) {
   VAR_6 = FUNC_10(VAR_13);
   VAR_9 |= (int)FUNC_14(VAR_6);
   FUNC_33(VAR_6);
   VAR_13 = VAR_13->nnext;
  }
  VAR_7 = VAR_9;
  break;
 case 128:
  if (VAR_13 == ((void*)0)) {
   FUNC_1("xor requires two arguments; returning 0");
   VAR_7 = 0;
   break;
  }
  VAR_9 = ((int)FUNC_14(VAR_5));
  while (VAR_13 != ((void*)0)) {
   VAR_6 = FUNC_10(VAR_13);
   VAR_9 ^= (int)FUNC_14(VAR_6);
   FUNC_33(VAR_6);
   VAR_13 = VAR_13->nnext;
  }
  VAR_7 = VAR_9;
  break;
 case 137:
  if (VAR_13 == ((void*)0)) {
   FUNC_1("lshift requires two arguments; returning 0");
   VAR_7 = 0;
   break;
  }
  VAR_6 = FUNC_10(VAR_3[1]->nnext);
  VAR_7 = ((int)FUNC_14(VAR_5)) << ((int)FUNC_14(VAR_6));
  FUNC_33(VAR_6);
  VAR_13 = VAR_13->nnext;
  break;
 case 135:
  if (VAR_13 == ((void*)0)) {
   FUNC_1("rshift requires two arguments; returning 0");
   VAR_7 = 0;
   break;
  }
  VAR_6 = FUNC_10(VAR_3[1]->nnext);
  VAR_7 = ((int)FUNC_14(VAR_5)) >> ((int)FUNC_14(VAR_6));
  FUNC_33(VAR_6);
  VAR_13 = VAR_13->nnext;
  break;
 case 131:
  FUNC_12(VAR_2);
  VAR_15 = FUNC_32(FUNC_15(VAR_5));
  VAR_7 = VAR_15;
  if (VAR_15 != -1) {
   if (FUNC_4(VAR_15)) {
    VAR_7 = FUNC_3(VAR_15);
   } else if (FUNC_5(VAR_15)) {
    VAR_7 = FUNC_6(VAR_15) + 256;




   } else
    VAR_7 = 0;
  }
  break;
 case 136:



  VAR_7 = (Awkfloat) FUNC_25() / (0x7fffffffL + 0x1UL);
  break;
 case 132:
  if (FUNC_19(VAR_5))
   VAR_7 = FUNC_34((time_t *)0);
  else
   VAR_7 = FUNC_14(VAR_5);
  VAR_10 = VAR_7;
  FUNC_30((unsigned long) VAR_7);
  VAR_7 = VAR_1;
  VAR_1 = VAR_10;
  break;
 case 129:
 case 130:
  VAR_12 = FUNC_36(FUNC_15(VAR_5));
  if (VAR_8 == 129) {
   for (VAR_11 = VAR_12; *VAR_11; VAR_11++)
    if (FUNC_18((uschar) *VAR_11))
     *VAR_11 = FUNC_37((uschar)*VAR_11);
  } else {
   for (VAR_11 = VAR_12; *VAR_11; VAR_11++)
    if (FUNC_20((uschar) *VAR_11))
     *VAR_11 = FUNC_35((uschar)*VAR_11);
  }
  FUNC_33(VAR_5);
  VAR_5 = FUNC_16();
  FUNC_27(VAR_5, VAR_12);
  FUNC_13(VAR_12);
  return VAR_5;
 case 142:
  if (FUNC_19(VAR_5) || FUNC_31(FUNC_15(VAR_5)) == 0) {
   FUNC_39();
   VAR_7 = 0;
  } else if ((VAR_14 = FUNC_23(142, FUNC_15(VAR_5))) == ((void*)0))
   VAR_7 = VAR_0;
  else
   VAR_7 = FUNC_12(VAR_14);
  break;
 default:
  FUNC_0("illegal function type %d", VAR_8);
  break;
 }
 FUNC_33(VAR_5);
 VAR_5 = FUNC_16();
 FUNC_26(VAR_5, VAR_7);
 if (VAR_13 != ((void*)0)) {
  FUNC_1("warning: function has too many arguments");
  for ( ; VAR_13; VAR_13 = VAR_13->nnext)
   FUNC_10(VAR_13);
 }
 return(VAR_5);
}
