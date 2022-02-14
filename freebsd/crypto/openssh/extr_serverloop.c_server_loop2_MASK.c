
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int ;
struct ssh {int dummy; } ;
typedef int fd_set ;
struct TYPE_2__ {scalar_t__ rekey_interval; } ;
typedef int Authctxt ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ssh*,int *,int *) ;
 int FUNC_2 (struct ssh*) ;
 int FUNC_3 (struct ssh*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ssh*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int) ;
 int* VAR_5 ;
 int FUNC_9 () ;
 TYPE_1__ VAR_6 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (struct ssh*) ;
 scalar_t__ FUNC_15 (struct ssh*,int *,int) ;
 int FUNC_16 (int *,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_17 () ;
 int FUNC_18 (struct ssh*,int *) ;
 int VAR_8 ;
 int FUNC_19 (int ,int ) ;
 int VAR_9 ;
 int FUNC_20 (struct ssh*) ;
 int VAR_10 ;
 int FUNC_21 (struct ssh*,int,int,int **,int **,int*,int*,int) ;

void
FUNC_22(struct ssh *VAR_11, Authctxt *VAR_12)
{
 fd_set *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 int VAR_15;
 u_int VAR_16 = 0, VAR_17, VAR_18;
 u_int64_t VAR_19 = 0;

 FUNC_6("Entering interactive session for SSH2.");

 FUNC_19(VAR_0, VAR_8);
 VAR_4 = 0;
 VAR_17 = FUNC_10();
 VAR_18 = FUNC_11();

 if (!VAR_10) {
  FUNC_19(VAR_3, VAR_9);
  FUNC_19(VAR_1, VAR_9);
  FUNC_19(VAR_2, VAR_9);
 }

 FUNC_9();

 VAR_15 = FUNC_0(VAR_17, VAR_18);
 VAR_15 = FUNC_0(VAR_15, VAR_5[0]);

 FUNC_17();

 for (;;) {
  FUNC_14(VAR_11);

  if (!FUNC_20(VAR_11) &&
      FUNC_13())
   FUNC_3(VAR_11);
  if (VAR_6.rekey_interval > 0 && !FUNC_20(VAR_11))
   VAR_19 = FUNC_12() * 1000;
  else
   VAR_19 = 0;

  FUNC_21(VAR_11, VAR_17, VAR_18,
      &VAR_13, &VAR_14, &VAR_15, &VAR_16, VAR_19);

  if (VAR_7) {
   FUNC_8("Exiting on signal %d", (int)VAR_7);

   FUNC_4(255);
  }

  FUNC_5(VAR_11);
  if (!FUNC_20(VAR_11))
   FUNC_1(VAR_11, VAR_13, VAR_14);
  if (FUNC_15(VAR_11, VAR_13, VAR_17) < 0)
   break;
  FUNC_16(VAR_14, VAR_18);
 }
 FUNC_5(VAR_11);

 FUNC_7(VAR_13);
 FUNC_7(VAR_14);


 FUNC_2(VAR_11);


 FUNC_18(VAR_11, ((void*)0));
}
