
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct match {char const* beginp; char const* endp; int eflags; char const* coldp; TYPE_1__* g; int tmp; int fresh; int st; } ;
typedef int states ;
typedef int sopno ;
struct TYPE_2__ {int cflags; int nbol; scalar_t__ neol; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_5 ;
 char const VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ,char const) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ,int,int ) ;

__attribute__((used)) static const char *
FUNC_9(struct match *VAR_10, const char *VAR_11, const char *VAR_12, sopno VAR_13,
     sopno VAR_14)
{
 states VAR_15 = VAR_10->st;
 states VAR_16 = VAR_10->fresh;
 states VAR_17 = VAR_10->tmp;
 const char *VAR_18 = VAR_11;
 int VAR_19 = (VAR_11 == VAR_10->beginp) ? VAR_6 : *(VAR_11-1);
 int VAR_20;
 int VAR_21;
 int VAR_22;
 const char *VAR_23;

 FUNC_1(VAR_15);
 FUNC_5(VAR_15, VAR_13);
 VAR_15 = FUNC_8(VAR_10->g, VAR_13, VAR_14, VAR_15, VAR_5, VAR_15);
 FUNC_0(VAR_16, VAR_15);
 FUNC_6("start", VAR_15, *VAR_18);
 VAR_23 = ((void*)0);
 for (;;) {

  VAR_20 = VAR_19;
  VAR_19 = (VAR_18 == VAR_10->endp) ? VAR_6 : *VAR_18;
  if (FUNC_2(VAR_15, VAR_16))
   VAR_23 = VAR_18;


  VAR_21 = '\0';
  VAR_22 = 0;
  if ( (VAR_20 == '\n' && VAR_10->g->cflags&VAR_7) ||
    (VAR_20 == VAR_6 && !(VAR_10->eflags&VAR_8)) ) {
   VAR_21 = VAR_0;
   VAR_22 = VAR_10->g->nbol;
  }
  if ( (VAR_19 == '\n' && VAR_10->g->cflags&VAR_7) ||
    (VAR_19 == VAR_6 && !(VAR_10->eflags&VAR_9)) ) {
   VAR_21 = (VAR_21 == VAR_0) ? VAR_1 : VAR_3;
   VAR_22 += VAR_10->g->neol;
  }
  if (VAR_22 != 0) {
   for (; VAR_22 > 0; VAR_22--)
    VAR_15 = FUNC_8(VAR_10->g, VAR_13, VAR_14, VAR_15, VAR_21, VAR_15);
   FUNC_6("boleol", VAR_15, VAR_19);
  }


  if ( (VAR_21 == VAR_0 || (VAR_20 != VAR_6 && !FUNC_4(VAR_20))) &&
     (VAR_19 != VAR_6 && FUNC_4(VAR_19)) ) {
   VAR_21 = VAR_2;
  }
  if ( (VAR_20 != VAR_6 && FUNC_4(VAR_20)) &&
    (VAR_21 == VAR_3 || (VAR_19 != VAR_6 && !FUNC_4(VAR_19))) ) {
   VAR_21 = VAR_4;
  }
  if (VAR_21 == VAR_2 || VAR_21 == VAR_4) {
   VAR_15 = FUNC_8(VAR_10->g, VAR_13, VAR_14, VAR_15, VAR_21, VAR_15);
   FUNC_6("boweow", VAR_15, VAR_19);
  }


  if (FUNC_3(VAR_15, VAR_14) || VAR_18 == VAR_12)
   break;


  FUNC_0(VAR_17, VAR_15);
  FUNC_0(VAR_15, VAR_16);
  FUNC_7(VAR_19 != VAR_6);
  VAR_15 = FUNC_8(VAR_10->g, VAR_13, VAR_14, VAR_17, VAR_19, VAR_15);
  FUNC_6("aft", VAR_15, VAR_19);
  FUNC_7(FUNC_2(FUNC_8(VAR_10->g, VAR_13, VAR_14, VAR_15, VAR_5, VAR_15), VAR_15));
  VAR_18++;
 }

 FUNC_7(VAR_23 != ((void*)0));
 VAR_10->coldp = VAR_23;
 if (FUNC_3(VAR_15, VAR_14))
  return(VAR_18+1);
 else
  return(((void*)0));
}
