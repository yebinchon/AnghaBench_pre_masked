
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wint_t ;
typedef int uch ;
struct parse {int next; int error; TYPE_1__* g; void** pend; void** pbegin; } ;
struct branchc {int dummy; } ;
typedef size_t sopno ;
struct TYPE_2__ {size_t nsub; int cflags; int neol; int iflags; int nbol; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ,size_t) ;
 char FUNC_4 () ;
 void* FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,size_t) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char,int ) ;
 int FUNC_10 () ;
 size_t VAR_2 ;
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
 int VAR_17 ;
 char FUNC_11 () ;
 char FUNC_12 () ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (char) ;
 int FUNC_15 (int ) ;
 size_t FUNC_16 () ;
 size_t FUNC_17 () ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_18 () ;
 int FUNC_19 (int) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (struct parse*) ;
 int FUNC_22 (struct parse*,int ) ;
 int FUNC_23 (struct parse*) ;
 int FUNC_24 (struct parse*) ;
 int FUNC_25 (struct parse*,char,int ) ;
 int FUNC_26 (struct parse*,size_t,int,int) ;

__attribute__((used)) static bool
FUNC_27(struct parse *VAR_27, struct branchc *VAR_28)
{
 char VAR_29;
 wint_t VAR_30;
 sopno VAR_31;
 int VAR_32;
 int VAR_33;
 sopno VAR_34;
 int VAR_35 = 0;

 (void)VAR_28;
 FUNC_19(FUNC_7());
 VAR_29 = FUNC_4();

 VAR_31 = FUNC_5();
 switch (VAR_29) {
 case '(':
  (void)FUNC_13(FUNC_7(), VAR_23);
  VAR_27->g->nsub++;
  VAR_34 = VAR_27->g->nsub;
  if (VAR_34 < VAR_2)
   VAR_27->pbegin[VAR_34] = FUNC_5();
  FUNC_3(VAR_9, VAR_34);
  if (!FUNC_14(')'))
   FUNC_25(VAR_27, ')', VAR_0);
  if (VAR_34 < VAR_2) {
   VAR_27->pend[VAR_34] = FUNC_5();
   FUNC_19(VAR_27->pend[VAR_34] != 0);
  }
  FUNC_3(VAR_14, VAR_34);
  (void)FUNC_9(')', VAR_23);
  break;

 case ')':







  FUNC_15(VAR_23);
  break;

 case '^':
  FUNC_3(VAR_4, 0);
  VAR_27->g->iflags |= VAR_25;
  VAR_27->g->nbol++;
  VAR_35 = 1;
  break;
 case '$':
  FUNC_3(VAR_7, 0);
  VAR_27->g->iflags |= VAR_26;
  VAR_27->g->neol++;
  break;
 case '|':
  FUNC_15(VAR_22);
  break;
 case '*':
 case '+':
 case '?':
 case '{':
  FUNC_15(VAR_19);
  break;
 case '.':
  if (VAR_27->g->cflags&VAR_24)
   FUNC_21(VAR_27);
  else
   FUNC_3(VAR_3, 0);
  break;
 case '[':
  FUNC_23(VAR_27);
  break;
 case '\\':
  (void)FUNC_13(FUNC_7(), VAR_21);
  VAR_30 = FUNC_18();
  switch (VAR_30) {
  case '<':
   FUNC_3(VAR_5, 0);
   break;
  case '>':
   FUNC_3(VAR_8, 0);
   break;
  default:
   FUNC_22(VAR_27, VAR_30);
   break;
  }
  break;
 default:
  if (VAR_27->error != 0)
   return (0);
  VAR_27->next--;
  VAR_30 = FUNC_18();
  FUNC_22(VAR_27, VAR_30);
  break;
 }

 if (!FUNC_7())
  return (0);
 VAR_29 = FUNC_11();

 if (!( VAR_29 == '*' || VAR_29 == '+' || VAR_29 == '?' || VAR_29 == '{'))
  return (0);
 else if (VAR_29 == '{')
  (void)FUNC_13(FUNC_8() && (FUNC_20((uch)FUNC_12()) || FUNC_12() == ','), VAR_19);

 FUNC_10();

 (void)FUNC_13(!VAR_35, VAR_19);
 switch (VAR_29) {
 case '*':

  FUNC_6(VAR_12, VAR_31);
  FUNC_1(VAR_16, VAR_31);
  FUNC_6(VAR_13, VAR_31);
  FUNC_1(VAR_17, VAR_31);
  break;
 case '+':
  FUNC_6(VAR_12, VAR_31);
  FUNC_1(VAR_16, VAR_31);
  break;
 case '?':

  FUNC_6(VAR_6, VAR_31);
  FUNC_1(VAR_10, VAR_31);
  FUNC_0(VAR_31);
  FUNC_3(VAR_11, 0);
  FUNC_0(FUNC_16());
  FUNC_1(VAR_15, FUNC_17());
  break;
 case '{':
  VAR_32 = FUNC_24(VAR_27);
  if (FUNC_2(',')) {
   if (FUNC_20((uch)FUNC_11())) {
    VAR_33 = FUNC_24(VAR_27);
    (void)FUNC_13(VAR_32 <= VAR_33, VAR_18);
   } else
    VAR_33 = VAR_1;
  } else
   VAR_33 = VAR_32;
  FUNC_26(VAR_27, VAR_31, VAR_32, VAR_33);
  if (!FUNC_2('}')) {
   while (FUNC_7() && FUNC_11() != '}')
    FUNC_10();
   (void)FUNC_13(FUNC_7(), VAR_20);
   FUNC_15(VAR_18);
  }
  break;
 }

 if (!FUNC_7())
  return (0);
 VAR_29 = FUNC_11();
 if (!( VAR_29 == '*' || VAR_29 == '+' || VAR_29 == '?' ||
    (VAR_29 == '{' && FUNC_8() && FUNC_20((uch)FUNC_12())) ) )
  return (0);
 FUNC_15(VAR_19);
 return (0);
}
