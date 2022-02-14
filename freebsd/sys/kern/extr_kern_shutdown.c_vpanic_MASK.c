
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct thread {int td_stopsched; int td_flags; } ;
typedef int intmax_t ;
typedef int cpuset_t ;
typedef int buf ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int VAR_8 ;
 struct thread* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 char const* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_9 (char const*,int ) ;
 int FUNC_10 (char*,int,char const*,int ) ;

void
FUNC_11(const char *VAR_19, va_list VAR_20)
{



 struct thread *VAR_21 = VAR_9;
 int VAR_22, VAR_23;
 static char VAR_24[256];

 FUNC_7();
 VAR_21->td_stopsched = 1;

 VAR_22 = VAR_1;
 VAR_23 = 0;
 if (VAR_12)
  VAR_22 |= VAR_3;
 else {
  VAR_22 |= VAR_2;
  VAR_12 = VAR_19;
  VAR_23 = 1;
 }

 if (VAR_23) {
  (void)FUNC_10(VAR_24, sizeof(VAR_24), VAR_19, VAR_20);
  VAR_12 = VAR_24;
  FUNC_2();
  FUNC_6("panic: %s\n", VAR_24);
 } else {
  FUNC_6("panic: ");
  FUNC_9(VAR_19, VAR_20);
  FUNC_6("\n");
 }



 FUNC_6("time = %jd\n", (intmax_t )VAR_16);







 VAR_21->td_flags |= VAR_6;

 if (!VAR_15)
  VAR_22 |= VAR_3;
 if (VAR_14)
  VAR_22 |= VAR_5;
 if (VAR_13)
  VAR_22 |= VAR_4;
 FUNC_5(VAR_22);
}
