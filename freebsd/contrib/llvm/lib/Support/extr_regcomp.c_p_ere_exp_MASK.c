
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uch ;
struct parse {size_t* pbegin; size_t* pend; TYPE_1__* g; int * strip; } ;
typedef size_t sopno ;
struct TYPE_2__ {size_t nsub; int cflags; int backrefs; int neol; int iflags; int nbol; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ,int) ;
 char FUNC_4 () ;
 void* FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (int ,size_t) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char,int ) ;
 int FUNC_10 () ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 char FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (char) ;
 int FUNC_16 (int ) ;
 size_t FUNC_17 () ;
 size_t FUNC_18 () ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct parse*,int ,size_t) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (struct parse*) ;
 int FUNC_23 (struct parse*,char) ;
 int FUNC_24 (struct parse*) ;
 int FUNC_25 (struct parse*) ;
 int FUNC_26 (struct parse*,char) ;
 int FUNC_27 (struct parse*,size_t,int,int) ;

__attribute__((used)) static void
FUNC_28(struct parse *VAR_27)
{
 char VAR_28;
 sopno VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;
 sopno VAR_33;
 int VAR_34 = 0;

 FUNC_19(FUNC_7());
 VAR_28 = FUNC_4();

 VAR_29 = FUNC_5();
 switch (VAR_28) {
 case '(':
  FUNC_14(FUNC_7(), VAR_22);
  VAR_27->g->nsub++;
  VAR_33 = VAR_27->g->nsub;
  if (VAR_33 < VAR_1)
   VAR_27->pbegin[VAR_33] = FUNC_5();
  FUNC_3(VAR_7, VAR_33);
  if (!FUNC_15(')'))
   FUNC_26(VAR_27, ')');
  if (VAR_33 < VAR_1) {
   VAR_27->pend[VAR_33] = FUNC_5();
   FUNC_19(VAR_27->pend[VAR_33] != 0);
  }
  FUNC_3(VAR_12, VAR_33);
  FUNC_9(')', VAR_22);
  break;

 case ')':







  FUNC_16(VAR_22);
  break;

 case '^':
  FUNC_3(VAR_4, 0);
  VAR_27->g->iflags |= VAR_25;
  VAR_27->g->nbol++;
  VAR_34 = 1;
  break;
 case '$':
  FUNC_3(VAR_6, 0);
  VAR_27->g->iflags |= VAR_26;
  VAR_27->g->neol++;
  break;
 case '|':
  FUNC_16(VAR_21);
  break;
 case '*':
 case '+':
 case '?':
  FUNC_16(VAR_18);
  break;
 case '.':
  if (VAR_27->g->cflags&VAR_24)
   FUNC_22(VAR_27);
  else
   FUNC_3(VAR_2, 0);
  break;
 case '[':
  FUNC_24(VAR_27);
  break;
 case '\\':
  FUNC_14(FUNC_7(), VAR_20);
  VAR_28 = FUNC_4();
  if (VAR_28 >= '1' && VAR_28 <= '9') {





   VAR_32 = VAR_28 - '0';
   if (VAR_27->pend[VAR_32] == 0) {
    FUNC_16(VAR_23);
    break;
   }




   FUNC_19(VAR_32 <= VAR_27->g->nsub);
   FUNC_3(VAR_3, VAR_32);
   FUNC_19(VAR_27->pbegin[VAR_32] != 0);
   FUNC_19(FUNC_11(VAR_27->strip[VAR_27->pbegin[VAR_32]]) != VAR_7);
   FUNC_19(FUNC_11(VAR_27->strip[VAR_27->pend[VAR_32]]) != VAR_12);
   (void) FUNC_20(VAR_27, VAR_27->pbegin[VAR_32]+1, VAR_27->pend[VAR_32]);
   FUNC_3(VAR_13, VAR_32);
   VAR_27->g->backrefs = 1;
  } else {


   FUNC_23(VAR_27, VAR_28);
  }
  break;
 case '{':
  FUNC_14(!FUNC_7() || !FUNC_21((uch)FUNC_12()), VAR_18);

 default:
  FUNC_23(VAR_27, VAR_28);
  break;
 }

 if (!FUNC_7())
  return;
 VAR_28 = FUNC_12();

 if (!( VAR_28 == '*' || VAR_28 == '+' || VAR_28 == '?' ||
    (VAR_28 == '{' && FUNC_8() && FUNC_21((uch)FUNC_13())) ))
  return;
 FUNC_10();

 FUNC_14(!VAR_34, VAR_18);
 switch (VAR_28) {
 case '*':

  FUNC_6(VAR_10, VAR_29);
  FUNC_1(VAR_15, VAR_29);
  FUNC_6(VAR_11, VAR_29);
  FUNC_1(VAR_16, VAR_29);
  break;
 case '+':
  FUNC_6(VAR_10, VAR_29);
  FUNC_1(VAR_15, VAR_29);
  break;
 case '?':

  FUNC_6(VAR_5, VAR_29);
  FUNC_1(VAR_8, VAR_29);
  FUNC_0(VAR_29);
  FUNC_3(VAR_9, 0);
  FUNC_0(FUNC_17());
  FUNC_1(VAR_14, FUNC_18());
  break;
 case '{':
  VAR_30 = FUNC_25(VAR_27);
  if (FUNC_2(',')) {
   if (FUNC_21((uch)FUNC_12())) {
    VAR_31 = FUNC_25(VAR_27);
    FUNC_14(VAR_30 <= VAR_31, VAR_17);
   } else
    VAR_31 = VAR_0;
  } else
   VAR_31 = VAR_30;
  FUNC_27(VAR_27, VAR_29, VAR_30, VAR_31);
  if (!FUNC_2('}')) {
   while (FUNC_7() && FUNC_12() != '}')
    FUNC_10();
   FUNC_14(FUNC_7(), VAR_19);
   FUNC_16(VAR_17);
  }
  break;
 }

 if (!FUNC_7())
  return;
 VAR_28 = FUNC_12();
 if (!( VAR_28 == '*' || VAR_28 == '+' || VAR_28 == '?' ||
    (VAR_28 == '{' && FUNC_8() && FUNC_21((uch)FUNC_13())) ) )
  return;
 FUNC_16(VAR_18);
}
