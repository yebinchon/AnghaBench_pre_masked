
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse {TYPE_1__* g; void** pend; void** pbegin; } ;
typedef size_t sopno ;
typedef int UCHAR_T ;
struct TYPE_2__ {size_t nsub; int cflags; int neol; int iflags; int nbol; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ,size_t) ;
 char FUNC_4 () ;
 void* FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (int ,size_t) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (char,int ) ;
 int FUNC_11 () ;
 size_t VAR_1 ;
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
 char FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (char) ;
 int FUNC_16 (int ) ;
 size_t FUNC_17 () ;
 size_t FUNC_18 () ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct parse*) ;
 int FUNC_21 (struct parse*,char) ;
 int FUNC_22 (struct parse*) ;
 int FUNC_23 (struct parse*) ;
 int FUNC_24 (struct parse*,char,size_t) ;
 int FUNC_25 (struct parse*,size_t,int,int,int ) ;

__attribute__((used)) static void
FUNC_26(struct parse *VAR_24, size_t VAR_25)
{
 char VAR_26;
 sopno VAR_27;
 int VAR_28;
 int VAR_29;
 sopno VAR_30;
 int VAR_31 = 0;

 FUNC_19(FUNC_8());
 VAR_26 = FUNC_4();

 VAR_27 = FUNC_5();
 switch (VAR_26) {
 case '(':
  (void)FUNC_14(FUNC_8(), VAR_20);
  VAR_24->g->nsub++;
  VAR_30 = VAR_24->g->nsub;
  if (VAR_30 < VAR_1)
   VAR_24->pbegin[VAR_30] = FUNC_5();
  FUNC_3(VAR_6, VAR_30);
  if (!FUNC_15(')'))
   FUNC_24(VAR_24, ')', VAR_25);
  if (VAR_30 < VAR_1) {
   VAR_24->pend[VAR_30] = FUNC_5();
   FUNC_19(VAR_24->pend[VAR_30] != 0);
  }
  FUNC_3(VAR_11, VAR_30);
  (void)FUNC_10(')', VAR_20);
  break;

 case ')':







  FUNC_16(VAR_20);
  break;

 case '^':
  FUNC_3(VAR_3, 0);
  VAR_24->g->iflags |= VAR_22;
  VAR_24->g->nbol++;
  VAR_31 = 1;
  break;
 case '$':
  FUNC_3(VAR_5, 0);
  VAR_24->g->iflags |= VAR_23;
  VAR_24->g->neol++;
  break;
 case '|':
  FUNC_16(VAR_19);
  break;
 case '*':
 case '+':
 case '?':
  FUNC_16(VAR_16);
  break;
 case '.':
  if (VAR_24->g->cflags&VAR_21)
   FUNC_20(VAR_24);
  else
   FUNC_3(VAR_2, 0);
  break;
 case '[':
  FUNC_22(VAR_24);
  break;
 case '\\':
  (void)FUNC_14(FUNC_8(), VAR_18);
  VAR_26 = FUNC_4();
  FUNC_21(VAR_24, VAR_26);
  break;
 case '{':
  (void)FUNC_14(!FUNC_8() || !FUNC_7((UCHAR_T)FUNC_12()), VAR_16);

 default:
  FUNC_21(VAR_24, VAR_26);
  break;
 }

 if (!FUNC_8())
  return;
 VAR_26 = FUNC_12();

 if (!( VAR_26 == '*' || VAR_26 == '+' || VAR_26 == '?' ||
    (VAR_26 == '{' && FUNC_9() && FUNC_7((UCHAR_T)FUNC_13())) ))
  return;
 FUNC_11();

 (void)FUNC_14(!VAR_31, VAR_16);
 switch (VAR_26) {
 case '*':

  FUNC_6(VAR_9, VAR_27);
  FUNC_1(VAR_13, VAR_27);
  FUNC_6(VAR_10, VAR_27);
  FUNC_1(VAR_14, VAR_27);
  break;
 case '+':
  FUNC_6(VAR_9, VAR_27);
  FUNC_1(VAR_13, VAR_27);
  break;
 case '?':

  FUNC_6(VAR_4, VAR_27);
  FUNC_1(VAR_7, VAR_27);
  FUNC_0(VAR_27);
  FUNC_3(VAR_8, 0);
  FUNC_0(FUNC_17());
  FUNC_1(VAR_12, FUNC_18());
  break;
 case '{':
  VAR_28 = FUNC_23(VAR_24);
  if (FUNC_2(',')) {
   if (FUNC_7((UCHAR_T)FUNC_12())) {
    VAR_29 = FUNC_23(VAR_24);
    (void)FUNC_14(VAR_28 <= VAR_29, VAR_15);
   } else
    VAR_29 = VAR_0;
  } else
   VAR_29 = VAR_28;
  FUNC_25(VAR_24, VAR_27, VAR_28, VAR_29, 0);
  if (!FUNC_2('}')) {
   while (FUNC_8() && FUNC_12() != '}')
    FUNC_11();
   (void)FUNC_14(FUNC_8(), VAR_17);
   FUNC_16(VAR_15);
  }
  break;
 }

 if (!FUNC_8())
  return;
 VAR_26 = FUNC_12();
 if (!( VAR_26 == '*' || VAR_26 == '+' || VAR_26 == '?' ||
    (VAR_26 == '{' && FUNC_9() && FUNC_7((UCHAR_T)FUNC_13())) ) )
  return;
 FUNC_16(VAR_16);
}
