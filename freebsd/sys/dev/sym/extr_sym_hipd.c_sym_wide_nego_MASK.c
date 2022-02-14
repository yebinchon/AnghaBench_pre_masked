
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef TYPE_4__* tcb_p ;
typedef TYPE_5__* hcb_p ;
typedef TYPE_6__* ccb_p ;
struct TYPE_21__ {scalar_t__ nego_status; } ;
struct TYPE_20__ {scalar_t__* msgin; scalar_t__ maxwide; int* msgout; } ;
struct TYPE_17__ {int offset; int period; } ;
struct TYPE_16__ {scalar_t__ width; } ;
struct TYPE_18__ {TYPE_2__ goal; TYPE_1__ user; } ;
struct TYPE_19__ {TYPE_3__ tinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (char*,scalar_t__,scalar_t__) ;
 int VAR_13 ;
 int FUNC_7 (TYPE_6__*,char*,scalar_t__*) ;
 int FUNC_8 (TYPE_5__*,TYPE_6__*,scalar_t__) ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_9(hcb_p VAR_15, tcb_p VAR_16, ccb_p VAR_17)
{
 u_char VAR_18, VAR_19;
 int VAR_20 = 1;




 if (VAR_0 & VAR_1) {
  FUNC_7(VAR_17, "wide msgin", VAR_15->msgin);
 }




 if (FUNC_0 (VAR_4) == VAR_3) {
  FUNC_1 (VAR_4, VAR_2);
  if (VAR_17->nego_status && VAR_17->nego_status != VAR_10)
   goto reject_it;
  VAR_20 = 0;
 }




 VAR_18 = 0;
 VAR_19 = VAR_15->msgin[3];




 if (VAR_19 > VAR_15->maxwide)
  {VAR_18 = 1; VAR_19 = VAR_15->maxwide;}
 if (VAR_20) {
  if (VAR_19 > VAR_16->tinfo.user.width)
   {VAR_18 = 1; VAR_19 = VAR_16->tinfo.user.width;}
 }

 if (VAR_0 & VAR_1) {
  FUNC_3(VAR_17);
  FUNC_6 ("wdtr: wide=%d chg=%d.\n", VAR_19, VAR_18);
 }




 if (VAR_20 == 0) {
  if (VAR_18)
   goto reject_it;
  FUNC_8 (VAR_15, VAR_17, VAR_19);






  if (VAR_16->tinfo.goal.offset) {
   VAR_15->msgout[0] = VAR_5;
   VAR_15->msgout[1] = 3;
   VAR_15->msgout[2] = VAR_7;
   VAR_15->msgout[3] = VAR_16->tinfo.goal.period;
   VAR_15->msgout[4] = VAR_16->tinfo.goal.offset;

   if (VAR_0 & VAR_1) {
    FUNC_7(VAR_17, "sync msgout", VAR_15->msgout);
   }

   VAR_17->nego_status = VAR_9;
   FUNC_1 (VAR_4, VAR_3);
   FUNC_2 (FUNC_5 (VAR_15, VAR_13));
   return;
  }

  FUNC_2 (FUNC_4 (VAR_15, VAR_11));
  return;
 }





 FUNC_8 (VAR_15, VAR_17, VAR_19);

 VAR_15->msgout[0] = VAR_5;
 VAR_15->msgout[1] = 2;
 VAR_15->msgout[2] = VAR_8;
 VAR_15->msgout[3] = VAR_19;

 VAR_15->msgin [0] = VAR_6;

 VAR_17->nego_status = VAR_10;

 if (VAR_0 & VAR_1) {
  FUNC_7(VAR_17, "wide msgout", VAR_15->msgout);
 }

 FUNC_2 (FUNC_5 (VAR_15, VAR_14));
 return;
reject_it:
 FUNC_2 (FUNC_5 (VAR_15, VAR_12));
}
