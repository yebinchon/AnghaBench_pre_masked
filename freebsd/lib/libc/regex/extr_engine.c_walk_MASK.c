
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char wint_t ;
typedef char uch ;
struct match {char const* offp; char const* beginp; int eflags; char const* endp; char const* coldp; int mbs; TYPE_1__* g; int tmp; int empty; int fresh; int st; } ;
typedef int states ;
typedef int sopno ;
struct TYPE_2__ {int cflags; int nbol; scalar_t__ neol; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char const*,char const*,int ,int ) ;
 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int FUNC_2 (int ) ;
 char VAR_4 ;
 char VAR_5 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (char) ;
 char VAR_6 ;
 char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ,char const) ;
 int FUNC_8 (char*,char const*,int,int *,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_1__*,int ,int ,int ,char,int ) ;

__attribute__((used)) static const char *
FUNC_11(struct match *VAR_11, const char *VAR_12, const char *VAR_13, sopno VAR_14,
 sopno VAR_15, bool VAR_16)
{
 states VAR_17 = VAR_11->st;
 states VAR_18 = VAR_11->fresh;
 states VAR_19 = VAR_11->empty;
 states VAR_20 = VAR_11->tmp;
 const char *VAR_21 = VAR_12;
 wint_t VAR_22;
 wint_t VAR_23;
 wint_t VAR_24;
 int VAR_25;
 const char *VAR_26;
 size_t VAR_27;

 FUNC_1("slow", VAR_12, VAR_13, VAR_14, VAR_15);
 FUNC_2(VAR_17);
 FUNC_6(VAR_17, VAR_14);
 FUNC_7("sstart", VAR_17, *VAR_21);
 VAR_17 = FUNC_10(VAR_11->g, VAR_14, VAR_15, VAR_17, VAR_6, VAR_17);
 if (VAR_16)
  FUNC_0(VAR_18, VAR_17);
 VAR_26 = ((void*)0);
 if (VAR_12 == VAR_11->offp || (VAR_12 == VAR_11->beginp && !(VAR_11->eflags&VAR_9)))
  VAR_22 = VAR_7;
 else {





  VAR_22 = (uch)*(VAR_12 - 1);
 }
 for (;;) {

  VAR_23 = VAR_22;
  if (VAR_21 == VAR_11->endp) {
   VAR_22 = VAR_7;
   VAR_27 = 0;
  } else
   VAR_27 = FUNC_8(&VAR_22, VAR_21, VAR_11->endp - VAR_21, &VAR_11->mbs, VAR_0);

  if (VAR_16 && FUNC_3(VAR_17, VAR_18))
   VAR_26 = VAR_21;


  VAR_24 = '\0';
  VAR_25 = 0;
  if ( (VAR_23 == '\n' && VAR_11->g->cflags&VAR_8) ||
    (VAR_23 == VAR_7 && !(VAR_11->eflags&VAR_9)) ) {
   VAR_24 = VAR_1;
   VAR_25 = VAR_11->g->nbol;
  }
  if ( (VAR_22 == '\n' && VAR_11->g->cflags&VAR_8) ||
    (VAR_22 == VAR_7 && !(VAR_11->eflags&VAR_10)) ) {
   VAR_24 = (VAR_24 == VAR_1) ? VAR_2 : VAR_4;
   VAR_25 += VAR_11->g->neol;
  }
  if (VAR_25 != 0) {
   for (; VAR_25 > 0; VAR_25--)
    VAR_17 = FUNC_10(VAR_11->g, VAR_14, VAR_15, VAR_17, VAR_24, VAR_17);
   FUNC_7("sboleol", VAR_17, VAR_22);
  }


  if ( (VAR_24 == VAR_1 || (VAR_23 != VAR_7 && !FUNC_5(VAR_23))) &&
     (VAR_22 != VAR_7 && FUNC_5(VAR_22)) ) {
   VAR_24 = VAR_3;
  }
  if ( (VAR_23 != VAR_7 && FUNC_5(VAR_23)) &&
    (VAR_24 == VAR_4 || (VAR_22 != VAR_7 && !FUNC_5(VAR_22))) ) {
   VAR_24 = VAR_5;
  }
  if (VAR_24 == VAR_3 || VAR_24 == VAR_5) {
   VAR_17 = FUNC_10(VAR_11->g, VAR_14, VAR_15, VAR_17, VAR_24, VAR_17);
   FUNC_7("sboweow", VAR_17, VAR_22);
  }


  if (FUNC_4(VAR_17, VAR_15)) {
   if (VAR_16)
    break;
   else
    VAR_26 = VAR_21;
  }
  if (FUNC_3(VAR_17, VAR_19) || VAR_21 == VAR_13 || VAR_27 > (size_t)(VAR_13 - VAR_21))
   break;


  FUNC_0(VAR_20, VAR_17);
  if (VAR_16)
   FUNC_0(VAR_17, VAR_18);
  else
   FUNC_0(VAR_17, VAR_19);
  FUNC_9(VAR_22 != VAR_7);
  VAR_17 = FUNC_10(VAR_11->g, VAR_14, VAR_15, VAR_20, VAR_22, VAR_17);
  FUNC_7("saft", VAR_17, VAR_22);
  FUNC_9(FUNC_3(FUNC_10(VAR_11->g, VAR_14, VAR_15, VAR_17, VAR_6, VAR_17), VAR_17));
  VAR_21 += VAR_27;
 }

 if (VAR_16) {
  FUNC_9(VAR_26 != ((void*)0));
  VAR_11->coldp = VAR_26;
  if (FUNC_4(VAR_17, VAR_15))
   return (VAR_21 + FUNC_8(((void*)0), VAR_21, VAR_13 - VAR_21, &VAR_11->mbs, 0));
  else
   return (((void*)0));
 } else
  return (VAR_26);
}
