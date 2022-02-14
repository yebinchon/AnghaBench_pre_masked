
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timex {int modes; int status; scalar_t__ constant; scalar_t__ shift; long long freq; int offset; int precision; long tolerance; int ppsfreq; int jitter; int stbcnt; int jitcnt; int errcnt; int calcnt; int stabil; int esterror; int maxerror; } ;
struct thread {int* td_retval; } ;
struct ntp_adjtime_args {scalar_t__ tp; } ;
typedef int ntv ;
typedef int caddr_t ;


 int FUNC_0 (long long) ;
 int FUNC_1 (long long,long) ;
 long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 long VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_25 ;
 int VAR_26 ;
 long long VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_8 (struct thread*,int ) ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 long long VAR_36 ;
 int VAR_37 ;
 long long VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;

int
FUNC_9(struct thread *VAR_43, struct ntp_adjtime_args *VAR_44)
{
 struct timex VAR_45;
 long VAR_46;
 int VAR_47;
 int VAR_48, VAR_49;

 VAR_48 = FUNC_4((caddr_t)VAR_44->tp, (caddr_t)&VAR_45, sizeof(VAR_45));
 if (VAR_48)
  return (VAR_48);
 VAR_47 = VAR_45.modes;
 if (VAR_47)
  VAR_48 = FUNC_8(VAR_43, VAR_16);
 if (VAR_48 != 0)
  return (VAR_48);
 FUNC_2();
 if (VAR_47 & VAR_6)
  VAR_37 = VAR_45.maxerror;
 if (VAR_47 & VAR_4)
  VAR_35 = VAR_45.esterror;
 if (VAR_47 & VAR_11) {
  if (VAR_41 & VAR_20 && !(VAR_45.status & VAR_20)) {
   VAR_40 = VAR_24;
   VAR_41 = VAR_22;



  }
  VAR_41 &= VAR_21;
  VAR_41 |= VAR_45.status & ~VAR_21;
 }
 if (VAR_47 & VAR_13) {
  if (VAR_45.constant < 0)
   VAR_34 = 0;
  else if (VAR_45.constant > VAR_1)
   VAR_34 = VAR_1;
  else
   VAR_34 = VAR_45.constant;
 }
 if (VAR_47 & VAR_12) {
  if (VAR_45.constant > 0)
   VAR_42 = VAR_45.constant;
 }
 if (VAR_47 & VAR_8)
  VAR_41 |= VAR_19;
 if (VAR_47 & VAR_7)
  VAR_41 &= ~VAR_19;
 if (VAR_47 & VAR_3)
  VAR_41 |= VAR_18;
 if (VAR_47 & VAR_2)
  VAR_41 &= ~VAR_18;
 if (VAR_47 & VAR_5) {
  VAR_46 = (VAR_45.freq * 1000LL) >> 16;
  if (VAR_46 > VAR_0)
   FUNC_1(VAR_36, VAR_0);
  else if (VAR_46 < -VAR_0)
   FUNC_1(VAR_36, -VAR_0);
  else {




   VAR_36 = VAR_45.freq * 1000LL * 65536LL;
  }



 }
 if (VAR_47 & VAR_9) {
  if (VAR_41 & VAR_19)
   FUNC_6(VAR_45.offset);
  else
   FUNC_6(VAR_45.offset * 1000);
 }





 if (VAR_41 & VAR_19)
  VAR_45.offset = FUNC_0(VAR_38);
 else
  VAR_45.offset = FUNC_0(VAR_38) / 1000;
 VAR_45.freq = FUNC_0((VAR_36 / 1000LL) << 16);
 VAR_45.maxerror = VAR_37;
 VAR_45.esterror = VAR_35;
 VAR_45.status = VAR_41;
 VAR_45.constant = VAR_34;
 if (VAR_41 & VAR_19)
  VAR_45.precision = VAR_39;
 else
  VAR_45.precision = VAR_39 / 1000;
 VAR_45.tolerance = VAR_0 * VAR_17;
 VAR_49 = FUNC_7(VAR_41) ? VAR_23 : VAR_40;
 FUNC_3();

 VAR_48 = FUNC_5((caddr_t)&VAR_45, (caddr_t)VAR_44->tp, sizeof(VAR_45));
 if (VAR_48 == 0)
  VAR_43->td_retval[0] = VAR_49;
 return (VAR_48);
}
