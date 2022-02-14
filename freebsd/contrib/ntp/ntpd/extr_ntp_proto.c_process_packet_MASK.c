
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_int ;
typedef scalar_t__ u_char ;
struct pkt {int refid; int precision; int exten; int ppoll; int stratum; int li_vn_mode; int xmt; int rec; int org; int reftime; int rootdisp; int rootdelay; } ;
struct peer {int flash; int hpoll; void* dst; double rootdelay; double rootdisp; scalar_t__ retry; int reach; scalar_t__ burst; int minpoll; scalar_t__ flip; void* borg; void* aorg; int flags; double xleave; int delay; double offset; unsigned int ppoll; scalar_t__ t21_last; scalar_t__ t34_bytes; int t21_bytes; double t21; double r21; double t34; double r34; scalar_t__ hmode; int crypto; scalar_t__ bias; scalar_t__ pmode; int precision; void* nextdate; void* timereachable; void* reftime; int refid; void* stratum; scalar_t__ leap; TYPE_1__* dstadr; int srcadr; int processed; int seldisptoolarge; } ;
typedef int statstr ;
typedef void* l_fp ;
struct TYPE_2__ {int sin; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (void**,double) ;
 double FUNC_3 (int ) ;
 int FUNC_4 (void**,void**) ;
 double VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int *,void**) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_15 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_11 (struct peer*,scalar_t__,double,double) ;
 double VAR_20 ;
 void* VAR_21 ;
 int FUNC_12 (double) ;
 double FUNC_13 (double,double) ;
 void* FUNC_14 (int,int ) ;
 int FUNC_15 (struct peer*) ;
 int FUNC_16 (struct peer*,int) ;
 int FUNC_17 (int *,int *,void**,void**,void**,void**,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,double,double,int ,void*,scalar_t__*) ;
 int FUNC_18 (int ,struct peer*,char*) ;
 int FUNC_19 (char*,int,char*,double,double) ;
 double VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_20 (struct peer*) ;

void
FUNC_21(
 register struct peer *VAR_27,
 register struct pkt *VAR_28,
 u_int VAR_29
 )
{
 double VAR_30, VAR_31;
 double VAR_32, VAR_33, VAR_34;
 l_fp VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
 u_char VAR_40, VAR_41, VAR_42, VAR_43;
 char VAR_44[VAR_11];
 VAR_33 = FUNC_1(FUNC_6(VAR_28->rootdelay));
 VAR_32 = 0;
 VAR_34 = FUNC_1(FUNC_6(VAR_28->rootdisp));
 FUNC_5(&VAR_28->reftime, &VAR_38);
 FUNC_5(&VAR_28->org, &VAR_37);
 FUNC_5(&VAR_28->rec, &VAR_35);
 FUNC_5(&VAR_28->xmt, &VAR_36);
 VAR_40 = FUNC_8(VAR_28->li_vn_mode);
 VAR_41 = FUNC_7(VAR_28->li_vn_mode);
 VAR_42 = FUNC_10(VAR_28->li_vn_mode);
 VAR_43 = FUNC_9(VAR_28->stratum);
 if ( VAR_41 == VAR_4
     || VAR_43 < VAR_24 || VAR_43 >= VAR_23)
  VAR_27->flash |= VAR_18;
 if (VAR_33 / 2 + VAR_34 >= VAR_5)
  VAR_27->flash |= VAR_19;






 if (VAR_27->flash & VAR_15) {
  VAR_27->seldisptoolarge++;
  FUNC_0(1, ("packet: flash header %04x\n",
       VAR_27->flash));
  FUNC_16(VAR_27, VAR_27->hpoll);
  return;
 }




 VAR_26++;
 VAR_27->processed++;





 FUNC_17(&VAR_27->srcadr,
     VAR_27->dstadr ? &VAR_27->dstadr->sin : ((void*)0),
     &VAR_37, &VAR_35, &VAR_36, &VAR_27->dst,
     VAR_41, VAR_42, VAR_40, VAR_43, VAR_28->ppoll, VAR_28->precision,
     VAR_33, VAR_34, VAR_28->refid,
     VAR_29 - VAR_6, (u_char *)&VAR_28->exten);
 VAR_27->leap = VAR_41;
 VAR_27->stratum = FUNC_14(VAR_43, VAR_16);
 VAR_27->pmode = VAR_40;
 VAR_27->precision = VAR_28->precision;
 VAR_27->rootdelay = VAR_33;
 VAR_27->rootdisp = VAR_34;
 VAR_27->refid = VAR_28->refid;
 VAR_27->reftime = VAR_38;






 if (VAR_27->retry > 0) {
  VAR_27->retry = 0;
  if (VAR_27->reach)
   VAR_27->burst = FUNC_14(1 << (VAR_27->hpoll -
       VAR_27->minpoll), VAR_12) - 1;
  else
   VAR_27->burst = VAR_10 - 1;
  if (VAR_27->burst > 0)
   VAR_27->nextdate = VAR_21;
 }
 FUNC_16(VAR_27, VAR_27->hpoll);







 if (!VAR_27->reach) {
  FUNC_18(VAR_13, VAR_27, ((void*)0));
  VAR_27->timereachable = VAR_21;
 }
 VAR_27->reach |= 1;
 if (VAR_27->flip != 0) {
  VAR_39 = VAR_36;
  FUNC_4(&VAR_39, &VAR_27->dst);
  FUNC_2(&VAR_39, VAR_30);
  VAR_39 = VAR_35;
  if (VAR_27->flip > 0)
   FUNC_4(&VAR_39, &VAR_27->borg);
  else
   FUNC_4(&VAR_39, &VAR_27->aorg);
  FUNC_2(&VAR_39, VAR_31);
  VAR_33 = VAR_31 - VAR_30;
  VAR_32 = (VAR_31 + VAR_30) / 2.;
  if (VAR_33 < 0 || VAR_33 > 1.) {
   FUNC_19(VAR_44, sizeof(VAR_44),
       "t21 %.6f t34 %.6f", VAR_31, VAR_30);
   FUNC_18(VAR_14, VAR_27, VAR_44);
   return;
  }




 } else if (VAR_27->pmode == VAR_8) {





  if (VAR_27->flags & VAR_3) {
   VAR_39 = VAR_37;
   FUNC_4(&VAR_39, &VAR_27->aorg);
   FUNC_2(&VAR_39, VAR_30);
   VAR_39 = VAR_37;
   FUNC_4(&VAR_39, &VAR_27->borg);
   FUNC_2(&VAR_39, VAR_31);
   VAR_27->aorg = VAR_36;
   VAR_27->borg = VAR_27->dst;
   if (VAR_30 < 0 || VAR_30 > 1.) {

    if (VAR_1 & VAR_27->flags)
     goto bcc_init_volley_fail;
    FUNC_19(VAR_44, sizeof(VAR_44),
        "offset %.6f delay %.6f", VAR_31, VAR_30);
    FUNC_18(VAR_14, VAR_27, VAR_44);
    return;
   }
   VAR_32 = VAR_31;
   VAR_27->xleave = VAR_30;





  } else {
   VAR_39 = VAR_36;
   FUNC_4(&VAR_39, &VAR_27->dst);
   FUNC_2(&VAR_39, VAR_30);
   VAR_32 = VAR_30;
  }
  if (VAR_1 & VAR_27->flags) {
   VAR_27->flags &= ~VAR_1;
   VAR_27->delay = FUNC_12(VAR_27->offset - VAR_32) * 2;
   FUNC_0(2, ("broadcast volley: initial delay=%.6f\n",
    VAR_27->delay));
   if (VAR_27->delay > FUNC_12(VAR_22)) {
  bcc_init_volley_fail:
    FUNC_0(2, ("%s", "broadcast volley: initial delay exceeds limit\n"));
    FUNC_20(VAR_27);
    return;
   }
  }
  VAR_27->nextdate = VAR_21 + (1u << VAR_27->ppoll) - 2u;
  VAR_33 = VAR_27->delay;
  VAR_32 += VAR_33 / 2;







 } else {
  VAR_39 = VAR_36;
  FUNC_4(&VAR_39, &VAR_27->dst);
  FUNC_2(&VAR_39, VAR_30);
  VAR_39 = VAR_35;
  FUNC_4(&VAR_39, &VAR_37);
  FUNC_2(&VAR_39, VAR_31);
  VAR_33 = FUNC_12(VAR_31 - VAR_30);
  VAR_32 = (VAR_31 + VAR_30) / 2.;
 }
 VAR_33 = FUNC_13(VAR_33, FUNC_3(VAR_25));
 VAR_34 = FUNC_3(VAR_25) + FUNC_3(VAR_27->precision) +
     VAR_20 * VAR_33;
 FUNC_11(VAR_27, VAR_32 + VAR_27->bias, VAR_33, VAR_34);






 if ( (VAR_1 & VAR_27->flags)
     && VAR_9 == VAR_27->hmode
     && !(VAR_17 & FUNC_15(VAR_27))) {
  VAR_27->hmode = VAR_7;

 }
}
