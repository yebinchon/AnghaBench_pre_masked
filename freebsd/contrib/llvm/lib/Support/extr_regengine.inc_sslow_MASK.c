
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct match {char const* beginp; char const* endp; int eflags; TYPE_1__* g; int tmp; int empty; int st; } ;
typedef int states ;
typedef int sopno ;
struct TYPE_2__ {int cflags; int nbol; scalar_t__ neol; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char const*,char const*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_5 ;
 char const VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ,char const) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*,int ,int ,int ,int,int ) ;

__attribute__((used)) static const char *
FUNC_10(struct match *VAR_10, const char *VAR_11, const char *VAR_12, sopno VAR_13,
     sopno VAR_14)
{
 states VAR_15 = VAR_10->st;
 states VAR_16 = VAR_10->empty;
 states VAR_17 = VAR_10->tmp;
 const char *VAR_18 = VAR_11;
 int VAR_19 = (VAR_11 == VAR_10->beginp) ? VAR_6 : *(VAR_11-1);
 int VAR_20;
 int VAR_21;
 int VAR_22;
 const char *VAR_23;

 FUNC_1("slow", VAR_11, VAR_12, VAR_13, VAR_14);
 FUNC_2(VAR_15);
 FUNC_6(VAR_15, VAR_13);
 FUNC_7("sstart", VAR_15, *VAR_18);
 VAR_15 = FUNC_9(VAR_10->g, VAR_13, VAR_14, VAR_15, VAR_5, VAR_15);
 VAR_23 = ((void*)0);
 for (;;) {

  VAR_20 = VAR_19;
  VAR_19 = (VAR_18 == VAR_10->endp) ? VAR_6 : *VAR_18;


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
    VAR_15 = FUNC_9(VAR_10->g, VAR_13, VAR_14, VAR_15, VAR_21, VAR_15);
   FUNC_7("sboleol", VAR_15, VAR_19);
  }


  if ( (VAR_21 == VAR_0 || (VAR_20 != VAR_6 && !FUNC_5(VAR_20))) &&
     (VAR_19 != VAR_6 && FUNC_5(VAR_19)) ) {
   VAR_21 = VAR_2;
  }
  if ( (VAR_20 != VAR_6 && FUNC_5(VAR_20)) &&
    (VAR_21 == VAR_3 || (VAR_19 != VAR_6 && !FUNC_5(VAR_19))) ) {
   VAR_21 = VAR_4;
  }
  if (VAR_21 == VAR_2 || VAR_21 == VAR_4) {
   VAR_15 = FUNC_9(VAR_10->g, VAR_13, VAR_14, VAR_15, VAR_21, VAR_15);
   FUNC_7("sboweow", VAR_15, VAR_19);
  }


  if (FUNC_4(VAR_15, VAR_14))
   VAR_23 = VAR_18;
  if (FUNC_3(VAR_15, VAR_16) || VAR_18 == VAR_12)
   break;


  FUNC_0(VAR_17, VAR_15);
  FUNC_0(VAR_15, VAR_16);
  FUNC_8(VAR_19 != VAR_6);
  VAR_15 = FUNC_9(VAR_10->g, VAR_13, VAR_14, VAR_17, VAR_19, VAR_15);
  FUNC_7("saft", VAR_15, VAR_19);
  FUNC_8(FUNC_3(FUNC_9(VAR_10->g, VAR_13, VAR_14, VAR_15, VAR_5, VAR_15), VAR_15));
  VAR_18++;
 }

 return(VAR_23);
}
