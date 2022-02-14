
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timex {int modes; int freq; int constant; int tick; int offset; int esterror; int maxerror; } ;
struct timespec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 long VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,long) ;
 int FUNC_1 (int,long) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct timex*,struct timespec*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static inline void FUNC_5(struct timex *VAR_21, struct timespec *VAR_22)
{
 if (VAR_21->modes & VAR_6)
  FUNC_4(VAR_21, VAR_22);

 if (VAR_21->modes & VAR_4)
  VAR_19 |= VAR_13;

 if (VAR_21->modes & VAR_3)
  VAR_19 &= ~VAR_13;

 if (VAR_21->modes & VAR_1) {
  VAR_17 = VAR_21->freq * VAR_12;
  VAR_17 = FUNC_1(VAR_17, VAR_10);
  VAR_17 = FUNC_0(VAR_17, -VAR_10);
 }

 if (VAR_21->modes & VAR_2)
  VAR_18 = VAR_21->maxerror;

 if (VAR_21->modes & VAR_0)
  VAR_16 = VAR_21->esterror;

 if (VAR_21->modes & VAR_9) {
  VAR_15 = VAR_21->constant;
  if (!(VAR_19 & VAR_13))
   VAR_15 += 4;
  VAR_15 = FUNC_1(VAR_15, (long)VAR_11);
  VAR_15 = FUNC_0(VAR_15, 0l);
 }

 if (VAR_21->modes & VAR_7 && VAR_21->constant > 0)
  VAR_20 = VAR_21->constant;

 if (VAR_21->modes & VAR_5)
  FUNC_3(VAR_21->offset);

 if (VAR_21->modes & VAR_8)
  VAR_14 = VAR_21->tick;

 if (VAR_21->modes & (VAR_8|VAR_1|VAR_5))
  FUNC_2();
}
