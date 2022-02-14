
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef TYPE_3__* tcb_p ;
typedef TYPE_4__* hcb_p ;
typedef TYPE_5__* ccb_p ;
struct TYPE_20__ {scalar_t__ nego_status; } ;
struct TYPE_19__ {scalar_t__* msgin; scalar_t__ maxoffs; scalar_t__ minsync; int* msgout; } ;
struct TYPE_16__ {scalar_t__ offset; scalar_t__ period; } ;
struct TYPE_17__ {TYPE_1__ user; } ;
struct TYPE_18__ {TYPE_2__ tinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_8 (TYPE_5__*,char*,scalar_t__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_5__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_10(hcb_p VAR_12, tcb_p VAR_13, ccb_p VAR_14)
{
 u_char VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20 = 1;




 if (VAR_0 & VAR_1) {
  FUNC_8(VAR_14, "sync msgin", VAR_12->msgin);
 }




 if (FUNC_0 (VAR_4) == VAR_3) {
  FUNC_1 (VAR_4, VAR_2);
  if (VAR_14->nego_status && VAR_14->nego_status != VAR_8)
   goto reject_it;
  VAR_20 = 0;
 }




 VAR_15 = 0;
 VAR_17 = VAR_12->msgin[3];
 VAR_16 = VAR_12->msgin[4];




 if (VAR_16) {
  if (VAR_16 > VAR_12->maxoffs)
   {VAR_15 = 1; VAR_16 = VAR_12->maxoffs;}
  if (VAR_20) {
   if (VAR_16 > VAR_13->tinfo.user.offset)
    {VAR_15 = 1; VAR_16 = VAR_13->tinfo.user.offset;}
  }
 }

 if (VAR_16) {
  if (VAR_17 < VAR_12->minsync)
   {VAR_15 = 1; VAR_17 = VAR_12->minsync;}
  if (VAR_20) {
   if (VAR_17 < VAR_13->tinfo.user.period)
    {VAR_15 = 1; VAR_17 = VAR_13->tinfo.user.period;}
  }
 }

 VAR_19 = VAR_18 = 0;
 if (VAR_16 && FUNC_7(VAR_12, 0, VAR_17, &VAR_19, &VAR_18) < 0)
  goto reject_it;

 if (VAR_0 & VAR_1) {
  FUNC_3(VAR_14);
  FUNC_6 ("sdtr: ofs=%d per=%d div=%d fak=%d chg=%d.\n",
   VAR_16, VAR_17, VAR_19, VAR_18, VAR_15);
 }




 if (VAR_20 == 0) {
  if (VAR_15)
   goto reject_it;
  FUNC_9 (VAR_12, VAR_14, VAR_16, VAR_17, VAR_19, VAR_18);
  FUNC_2 (FUNC_4 (VAR_12, VAR_9));
  return;
 }





 FUNC_9 (VAR_12, VAR_14, VAR_16, VAR_17, VAR_19, VAR_18);

 VAR_12->msgout[0] = VAR_5;
 VAR_12->msgout[1] = 3;
 VAR_12->msgout[2] = VAR_7;
 VAR_12->msgout[3] = VAR_17;
 VAR_12->msgout[4] = VAR_16;

 VAR_14->nego_status = VAR_8;

 if (VAR_0 & VAR_1) {
  FUNC_8(VAR_14, "sync msgout", VAR_12->msgout);
 }

 VAR_12->msgin [0] = VAR_6;

 FUNC_2 (FUNC_5 (VAR_12, VAR_11));
 return;
reject_it:
 FUNC_9 (VAR_12, VAR_14, 0, 0, 0, 0);
 FUNC_2 (FUNC_5 (VAR_12, VAR_10));
}
