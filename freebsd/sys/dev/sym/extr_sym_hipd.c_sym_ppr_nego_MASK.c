
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef TYPE_4__* tcb_p ;
typedef TYPE_5__* hcb_p ;
typedef TYPE_6__* ccb_p ;
struct TYPE_22__ {scalar_t__ nego_status; } ;
struct TYPE_21__ {scalar_t__* msgin; scalar_t__ maxwide; int features; scalar_t__ maxoffs_dt; scalar_t__ maxoffs; scalar_t__ minsync_dt; scalar_t__ minsync; int* msgout; } ;
struct TYPE_18__ {scalar_t__ offset; scalar_t__ period; scalar_t__ width; scalar_t__ options; } ;
struct TYPE_17__ {scalar_t__ width; scalar_t__ offset; scalar_t__ period; } ;
struct TYPE_19__ {TYPE_2__ goal; TYPE_1__ user; } ;
struct TYPE_20__ {TYPE_3__ tinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_5__*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_8 (TYPE_6__*,char*,scalar_t__*) ;
 int FUNC_9 (TYPE_5__*,TYPE_6__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_10(hcb_p VAR_16, tcb_p VAR_17, ccb_p VAR_18)
{
 u_char VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26 = 1;




 if (VAR_0 & VAR_1) {
  FUNC_8(VAR_18, "ppr msgin", VAR_16->msgin);
 }




 VAR_19 = 0;
 VAR_21 = VAR_16->msgin[3];
 VAR_20 = VAR_16->msgin[5];
 VAR_25 = VAR_16->msgin[6];
 VAR_23 = VAR_16->msgin[7] & VAR_11;




 if (FUNC_0 (VAR_6) == VAR_5) {
  FUNC_1 (VAR_6, VAR_4);
  if (VAR_18->nego_status && VAR_18->nego_status != VAR_10)
   goto reject_it;
  VAR_26 = 0;
 }




 if (VAR_25 > VAR_16->maxwide)
  {VAR_19 = 1; VAR_25 = VAR_16->maxwide;}
 if (!VAR_25 || !(VAR_16->features & VAR_3))
  VAR_23 &= ~VAR_11;
 if (VAR_26) {
  if (VAR_25 > VAR_17->tinfo.user.width)
   {VAR_19 = 1; VAR_25 = VAR_17->tinfo.user.width;}
 }

 if (!(VAR_16->features & VAR_2))
  VAR_23 &= ~VAR_11;

 if (VAR_23 != (VAR_16->msgin[7] & VAR_12)) VAR_19 = 1;

 if (VAR_20) {
  if (VAR_23) {
   if (VAR_20 > VAR_16->maxoffs_dt)
    {VAR_19 = 1; VAR_20 = VAR_16->maxoffs_dt;}
  }
  else if (VAR_20 > VAR_16->maxoffs)
   {VAR_19 = 1; VAR_20 = VAR_16->maxoffs;}
  if (VAR_26) {
   if (VAR_20 > VAR_17->tinfo.user.offset)
    {VAR_19 = 1; VAR_20 = VAR_17->tinfo.user.offset;}
  }
 }

 if (VAR_20) {
  if (VAR_23) {
   if (VAR_21 < VAR_16->minsync_dt)
    {VAR_19 = 1; VAR_21 = VAR_16->minsync_dt;}
  }
  else if (VAR_21 < VAR_16->minsync)
   {VAR_19 = 1; VAR_21 = VAR_16->minsync;}
  if (VAR_26) {
   if (VAR_21 < VAR_17->tinfo.user.period)
    {VAR_19 = 1; VAR_21 = VAR_17->tinfo.user.period;}
  }
 }

 VAR_24 = VAR_22 = 0;
 if (VAR_20 && FUNC_7(VAR_16, VAR_23, VAR_21, &VAR_24, &VAR_22) < 0)
  goto reject_it;

 if (VAR_0 & VAR_1) {
  FUNC_3(VAR_18);
  FUNC_6 ("ppr: "
   "dt=%x ofs=%d per=%d wide=%d div=%d fak=%d chg=%d.\n",
   VAR_23, VAR_20, VAR_21, VAR_25, VAR_24, VAR_22, VAR_19);
 }




 if (VAR_26 == 0) {
  if (VAR_19)
   goto reject_it;
  FUNC_9 (VAR_16, VAR_18, VAR_23, VAR_20, VAR_21, VAR_25, VAR_24, VAR_22);
  FUNC_2 (FUNC_4 (VAR_16, VAR_13));
  return;
 }





 FUNC_9 (VAR_16, VAR_18, VAR_23, VAR_20, VAR_21, VAR_25, VAR_24, VAR_22);

 VAR_16->msgout[0] = VAR_7;
 VAR_16->msgout[1] = 6;
 VAR_16->msgout[2] = VAR_9;
 VAR_16->msgout[3] = VAR_21;
 VAR_16->msgout[4] = 0;
 VAR_16->msgout[5] = VAR_20;
 VAR_16->msgout[6] = VAR_25;
 VAR_16->msgout[7] = VAR_23;

 VAR_18->nego_status = VAR_10;

 if (VAR_0 & VAR_1) {
  FUNC_8(VAR_18, "ppr msgout", VAR_16->msgout);
 }

 VAR_16->msgin [0] = VAR_8;

 FUNC_2 (FUNC_5 (VAR_16, VAR_15));
 return;
reject_it:
 FUNC_9 (VAR_16, VAR_18, 0, 0, 0, 0, 0, 0);
 FUNC_2 (FUNC_5 (VAR_16, VAR_14));




 if (!VAR_26 && !VAR_23) {
  VAR_17->tinfo.goal.options = 0;
  VAR_17->tinfo.goal.width = VAR_25;
  VAR_17->tinfo.goal.period = VAR_21;
  VAR_17->tinfo.goal.offset = VAR_20;
 }
}
