
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dts_vstate; } ;
typedef TYPE_1__ dtrace_state_t ;
typedef int dof_hdr_t ;
typedef int c ;
struct TYPE_7__ {int * dta_enabling; TYPE_1__* dta_state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,int ,int **,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_10 (int *,int *) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_14(void)
{
 int VAR_8, VAR_9;
 dtrace_state_t *VAR_10;
 dof_hdr_t *VAR_11;
 char VAR_12[32];

 FUNC_0(FUNC_2(&VAR_7));
 FUNC_0(FUNC_2(&VAR_4));

 for (VAR_8 = 0; ; VAR_8++) {
  (void) FUNC_13(VAR_12, sizeof (VAR_12), "dof-data-%d", VAR_8);

  VAR_6 = 1;

  if ((VAR_11 = FUNC_6(VAR_12)) == ((void*)0)) {
   VAR_6 = 0;
   break;
  }
  if ((VAR_10 = VAR_5.dta_state) == ((void*)0)) {
   VAR_10 = FUNC_10(((void*)0), ((void*)0));
   VAR_5.dta_state = VAR_10;

   if (VAR_10 == ((void*)0)) {
    FUNC_3(VAR_2, "failed to create "
        "anonymous state");
    FUNC_4(VAR_11);
    break;
   }
  }

  VAR_9 = FUNC_7(VAR_11, &VAR_10->dts_vstate, FUNC_1(),
      &VAR_5.dta_enabling, 0, 0, VAR_0);

  if (VAR_9 == 0)
   VAR_9 = FUNC_5(VAR_11, VAR_10);

  VAR_6 = 0;
  FUNC_4(VAR_11);

  if (VAR_9 != 0) {




   FUNC_0(VAR_5.dta_enabling == ((void*)0));
   FUNC_11(VAR_10);
   VAR_5.dta_state = ((void*)0);
   break;
  }

  FUNC_0(VAR_5.dta_enabling != ((void*)0));
 }

 if (VAR_5.dta_enabling != ((void*)0)) {
  int VAR_13;
  VAR_13 = FUNC_9(VAR_5.dta_enabling);
  FUNC_0(VAR_13 == 0);

  FUNC_8(VAR_5.dta_enabling);
 }
}
