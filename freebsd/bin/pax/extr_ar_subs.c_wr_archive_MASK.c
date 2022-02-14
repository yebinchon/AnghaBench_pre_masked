
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


typedef int time_t ;
typedef scalar_t__ off_t ;
struct TYPE_18__ {scalar_t__ type; scalar_t__ pad; int name; int org_name; } ;
struct TYPE_17__ {int hlk; scalar_t__ (* st_wr ) () ;int (* wr ) (TYPE_1__*) ;int (* wr_data ) (TYPE_1__*,int,scalar_t__*) ;int (* end_wr ) () ;} ;
typedef TYPE_1__ ARCHD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 TYPE_14__* VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (char,int ) ;
 int FUNC_17 (TYPE_1__*,int*) ;
 int VAR_11 ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 scalar_t__ FUNC_19 (TYPE_1__*,int) ;
 int FUNC_20 (int ,int *,int *) ;
 scalar_t__ FUNC_21 () ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*,int,scalar_t__*) ;
 int FUNC_24 () ;
 int FUNC_25 (int,int ,char*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_26 (int *) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_27 () ;
 scalar_t__ FUNC_28 (scalar_t__) ;

__attribute__((used)) static void
FUNC_29(ARCHD *VAR_16, int VAR_17)
{
 int VAR_18;
 int VAR_19;
 int VAR_20;
 off_t VAR_21;
 int (*VAR_22)(ARCHD *);
 int VAR_23 = -1;
 time_t VAR_24;





 if (((VAR_19 = VAR_8->hlk) == 1) && (FUNC_8() < 0))
  return;




 if ((FUNC_7() < 0) || ((*VAR_8->st_wr)() < 0))
  return;
 VAR_22 = VAR_8->wr;





 if (VAR_9 && (FUNC_11() < 0))
  return;




 VAR_20 = VAR_17;

 VAR_24 = FUNC_26(((void*)0));




 while (FUNC_12(VAR_16) == 0) {



  if (FUNC_18(VAR_16) != 0) {
   FUNC_5();
   continue;
  }
  VAR_23 = -1;
  if (VAR_13) {




   if ((VAR_18 = FUNC_1(VAR_16)) < 0)
    break;
   if (VAR_18 > 0)
    continue;
  }





  FUNC_6(VAR_16);
  if (VAR_19 && (FUNC_2(VAR_16) < 0))
   break;

  if ((VAR_16->type == VAR_3) || (VAR_16->type == VAR_2) ||
      (VAR_16->type == VAR_1)) {






   if ((VAR_23 = FUNC_13(VAR_16->org_name, VAR_0, 0)) < 0) {
    FUNC_25(1,VAR_6, "Unable to open %s to read",
     VAR_16->org_name);
    FUNC_15(VAR_16);
    continue;
   }
  }




  if ((VAR_18 = FUNC_10(VAR_16)) < 0) {




   FUNC_17(VAR_16, &VAR_23);
   FUNC_15(VAR_16);
   break;
  }

  if ((VAR_18 > 0) || (VAR_5 && (FUNC_19(VAR_16, VAR_23) < 0))) {




   FUNC_17(VAR_16, &VAR_23);
   FUNC_15(VAR_16);
   continue;
  }

  if (VAR_14) {
   if (VAR_14 > 1)
    FUNC_9(VAR_16, VAR_24, VAR_10);
   else {
    (void)FUNC_3(VAR_16->name, VAR_10);
    VAR_15 = 1;
   }
  }
  ++VAR_7;





  if ((VAR_18 = (*VAR_22)(VAR_16)) < 0) {
   FUNC_17(VAR_16, &VAR_23);
   break;
  }
  VAR_20 = 1;
  if (VAR_18 > 0) {




   if (VAR_14 && VAR_15) {
    (void)FUNC_16('\n', VAR_10);
    VAR_15 = 0;
   }
   FUNC_17(VAR_16, &VAR_23);
   continue;
  }
  VAR_18 = (*VAR_8->wr_data)(VAR_16, VAR_23, &VAR_21);
  FUNC_17(VAR_16, &VAR_23);
  if (VAR_14 && VAR_15) {
   (void)FUNC_16('\n', VAR_10);
   VAR_15 = 0;
  }
  if (VAR_18 < 0)
   break;




  if (((VAR_21 > 0) && (FUNC_28(VAR_21) < 0)) ||
      ((VAR_16->pad > 0) && (FUNC_28(VAR_16->pad) < 0)))
   break;
 }







 if (VAR_20) {
  (*VAR_8->end_wr)();
  FUNC_27();
 }
 (void)FUNC_20(VAR_4, &VAR_11, ((void*)0));
 FUNC_0();
 if (VAR_12)
  FUNC_14();
 FUNC_4();
}
