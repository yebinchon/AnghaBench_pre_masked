
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct peer {scalar_t__ minpoll; scalar_t__ maxpoll; scalar_t__ stratum; double rootdisp; double disp; double update; int associd; int epoch; int dst; scalar_t__ rootdelay; scalar_t__ delay; int srcadr; int refid; } ;
struct TYPE_3__ {int l_ui; } ;
typedef TYPE_1__ l_fp ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 double VAR_7 ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int FUNC_6 () ;
 double VAR_9 ;
 int FUNC_7 (int) ;
 double FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 char* FUNC_10 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 () ;
 int FUNC_13 (struct peer*,int ) ;
 int FUNC_14 (int *,char*,int) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 () ;
 int FUNC_17 (struct peer*,scalar_t__) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 () ;
 char* FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (char*,int ) ;
 int VAR_13 ;
 double VAR_14 ;
 int VAR_15 ;
 double VAR_16 ;
 int VAR_17 ;
 struct peer* VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 double VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static void
FUNC_23(
 struct peer *VAR_28
 )
{
 double VAR_29;
 l_fp VAR_30;
 VAR_18 = VAR_28;
 VAR_13 = VAR_28->epoch;
 if (VAR_19 < VAR_28->minpoll)
  VAR_19 = VAR_28->minpoll;
 if (VAR_19 > VAR_28->maxpoll)
  VAR_19 = VAR_28->maxpoll;
 FUNC_17(VAR_28, VAR_19);
 VAR_25 = FUNC_15(VAR_28->stratum + 1, VAR_5);
 if ( VAR_28->stratum == VAR_4
     || VAR_28->stratum == VAR_5)
  VAR_21 = VAR_28->refid;
 else
  VAR_21 = FUNC_3(&VAR_28->srcadr);
 VAR_29 = VAR_28->rootdisp
  + VAR_28->disp
  + VAR_14
  + VAR_7 * (VAR_9 - VAR_28->update)
  + FUNC_8(VAR_17);

 if (VAR_29 > VAR_16)
  VAR_24 = VAR_29;
 else
  VAR_24 = VAR_16;
 VAR_23 = VAR_28->delay + VAR_28->rootdelay;
 VAR_22 = VAR_28->dst;

 FUNC_0(1, ("clock_update: at %lu sample %lu associd %d\n",
      VAR_9, VAR_28->epoch, VAR_28->associd));





 switch (FUNC_13(VAR_28, VAR_17)) {




 case -1:
  FUNC_7 (-1);





 case 2:
  FUNC_4();
  FUNC_21(VAR_1);
  VAR_25 = VAR_5;
  FUNC_14(&VAR_21, "STEP", 4);
  VAR_23 = 0;
  VAR_24 = 0;
  FUNC_2(&VAR_22);
  VAR_14 = FUNC_1(VAR_20);
  FUNC_12();
  break;




 case 1:






  if (VAR_15 == VAR_1) {
   FUNC_21(VAR_2);
  }
  if (VAR_12 == VAR_3) {
   if ( VAR_11 > VAR_10
       && VAR_11 > VAR_26 / 2) {
    FUNC_9(&VAR_30);
    FUNC_11(VAR_6, VAR_30.l_ui, ((void*)0));
   }
   if ( VAR_10 > VAR_11
       && VAR_10 > VAR_26 / 2) {
    FUNC_9(&VAR_30);
    FUNC_11(VAR_0, VAR_30.l_ui, ((void*)0));
   }
  }
  break;





 default:
  break;
 }
}
