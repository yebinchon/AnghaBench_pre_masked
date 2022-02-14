
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_softc {scalar_t__ initialized; int suspending; scalar_t__ suspend_countdown; scalar_t__ suspends; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 () ;
 struct apm_softc VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 int * VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct apm_softc *VAR_10 = &VAR_5;
 int VAR_11;

 if (VAR_10 == ((void*)0) || VAR_10->initialized == 0)
  return;

 VAR_4 = 0;
 VAR_10->suspends = VAR_10->suspend_countdown = 0;

 FUNC_2(VAR_8);





 FUNC_6(&VAR_2);
 VAR_11 = FUNC_1(VAR_9);
 if (VAR_11)
  goto backout;

 FUNC_3(VAR_6[VAR_1]);
 if (FUNC_5(VAR_3) == 0) {
  VAR_10->suspending = 1;
  FUNC_4();
  FUNC_7(&VAR_2);
  return;
 }


 FUNC_3(VAR_6[VAR_0]);
 FUNC_0(VAR_9);
backout:
 FUNC_7(&VAR_2);
 FUNC_2(VAR_7);
}
