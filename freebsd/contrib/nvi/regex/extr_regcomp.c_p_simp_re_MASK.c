
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse {size_t* pbegin; size_t* pend; TYPE_1__* g; int * strip; } ;
typedef size_t sopno ;
typedef int UCHAR_T ;
struct TYPE_2__ {size_t nsub; int backrefs; int cflags; } ;


 int FUNC_0 (int ,size_t) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char,char) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 void* FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (int ,size_t) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
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
 scalar_t__ FUNC_10 () ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (char,char) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct parse*,int ,size_t) ;
 int FUNC_16 (struct parse*) ;
 int FUNC_17 (struct parse*,int) ;
 int FUNC_18 (struct parse*) ;
 int FUNC_19 (struct parse*,char,char,size_t) ;
 int FUNC_20 (struct parse*) ;
 int FUNC_21 (struct parse*,size_t,int,int,size_t) ;

__attribute__((used)) static int
FUNC_22(struct parse *VAR_18,
    int VAR_19,
    size_t VAR_20)
{
 int VAR_21;
 int VAR_22;
 int VAR_23;
 sopno VAR_24;
 int VAR_25;
 sopno VAR_26;
 int VAR_27;

 VAR_24 = FUNC_5();

 FUNC_14(FUNC_8());
 VAR_21 = FUNC_4();
 VAR_27 = VAR_21 == '\\';
 if (VAR_27) {
  (void)FUNC_11(FUNC_8(), VAR_14);
  VAR_21 = (unsigned char)FUNC_4();
  switch (VAR_21) {
  case '{':
   FUNC_13(VAR_12);
   break;
  case '(':
   VAR_18->g->nsub++;
   VAR_26 = VAR_18->g->nsub;
   if (VAR_26 < VAR_1)
    VAR_18->pbegin[VAR_26] = FUNC_5();
   FUNC_3(VAR_4, VAR_26);

   if (FUNC_8() && !FUNC_12('\\', ')'))
    FUNC_19(VAR_18, '\\', ')', VAR_20);
   if (VAR_26 < VAR_1) {
    VAR_18->pend[VAR_26] = FUNC_5();
    FUNC_14(VAR_18->pend[VAR_26] != 0);
   }
   FUNC_3(VAR_7, VAR_26);
   (void)FUNC_11(FUNC_2('\\', ')'), VAR_15);
   break;
  case ')':
  case '}':
   FUNC_13(VAR_15);
   break;
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
   VAR_25 = VAR_21 - '0';
   FUNC_14(VAR_25 < VAR_1);
   if (VAR_18->pend[VAR_25] != 0) {
    FUNC_14(VAR_25 <= VAR_18->g->nsub);
    FUNC_3(VAR_3, VAR_25);
    FUNC_14(VAR_18->pbegin[VAR_25] != 0);
    FUNC_14(VAR_18->strip[VAR_18->pbegin[VAR_25]] == VAR_4);
    FUNC_14(VAR_18->strip[VAR_18->pend[VAR_25]] == VAR_7);
    (void) FUNC_15(VAR_18, VAR_18->pbegin[VAR_25]+1, VAR_18->pend[VAR_25]);
    FUNC_3(VAR_8, VAR_25);
   } else
    FUNC_13(VAR_16);
   VAR_18->g->backrefs = 1;
   break;
  default:
   FUNC_17(VAR_18, VAR_21);
   break;
  }
 } else {
  switch (VAR_21) {
  case '.':
   if (VAR_18->g->cflags&VAR_17)
    FUNC_16(VAR_18);
   else
    FUNC_3(VAR_2, 0);
   break;
  case '[':
   FUNC_18(VAR_18);
   break;
  case '*':
   (void)FUNC_11(VAR_19, VAR_12);

  default:
   FUNC_17(VAR_18, VAR_21);
   break;
  }
 }

 if (FUNC_1('*')) {

  FUNC_6(VAR_5, VAR_24);
  FUNC_0(VAR_9, VAR_24);
  FUNC_6(VAR_6, VAR_24);
  FUNC_0(VAR_10, VAR_24);
 } else if (FUNC_2('\\', '{')) {
  VAR_22 = FUNC_20(VAR_18);
  if (FUNC_1(',')) {
   if (FUNC_8() && FUNC_7((UCHAR_T)FUNC_10())) {
    VAR_23 = FUNC_20(VAR_18);
    (void)FUNC_11(VAR_22 <= VAR_23, VAR_11);
   } else
    VAR_23 = VAR_0;
  } else
   VAR_23 = VAR_22;
  FUNC_21(VAR_18, VAR_24, VAR_22, VAR_23, VAR_20);
  if (!FUNC_2('\\', '}')) {
   while (FUNC_8() && !FUNC_12('\\', '}'))
    FUNC_9();
   (void)FUNC_11(FUNC_8(), VAR_13);
   FUNC_13(VAR_11);
  }
 } else if (!VAR_27 && VAR_21 == (unsigned char)'$')
  return(1);

 return(0);
}
