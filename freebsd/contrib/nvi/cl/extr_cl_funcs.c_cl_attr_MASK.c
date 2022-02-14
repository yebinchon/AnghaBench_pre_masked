
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int scr_attr_t ;
typedef int WINDOW ;
struct TYPE_3__ {int * rmso; int * smso; int * rmcup; int ti_te; int * smcup; } ;
typedef int SCR ;
typedef TYPE_1__ CL_PRIVATE ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*,int **) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int
FUNC_9(SCR *VAR_7, scr_attr_t VAR_8, int VAR_9)
{
 CL_PRIVATE *VAR_10;
 WINDOW *VAR_11;

 VAR_10 = FUNC_0(VAR_7);
 VAR_11 = FUNC_1(VAR_7) ? FUNC_1(VAR_7) : VAR_6;

 switch (VAR_8) {
 case 129:
 if (VAR_9) {
  if (VAR_10->ti_te != VAR_3) {
   VAR_10->ti_te = VAR_3;
   if (VAR_10->smcup == ((void*)0))
    (void)FUNC_4(VAR_7, "smcup", &VAR_10->smcup);
   if (VAR_10->smcup != ((void*)0))
    (void)FUNC_6(VAR_10->smcup, 1, VAR_4);
  }
 } else
  if (VAR_10->ti_te != VAR_2) {
   VAR_10->ti_te = VAR_2;
   if (VAR_10->rmcup == ((void*)0))
    (void)FUNC_4(VAR_7, "rmcup", &VAR_10->rmcup);
   if (VAR_10->rmcup != ((void*)0))
    (void)FUNC_6(VAR_10->rmcup, 1, VAR_4);
   (void)FUNC_5(VAR_5);
  }
  (void)FUNC_5(VAR_5);
  break;
 case 128:
  if (FUNC_2(VAR_7, VAR_0 | VAR_1)) {
   if (VAR_10->smso == ((void*)0))
    return (1);
   if (VAR_9)
    (void)FUNC_6(VAR_10->smso, 1, VAR_4);
   else
    (void)FUNC_6(VAR_10->rmso, 1, VAR_4);
   (void)FUNC_5(VAR_5);
  } else {
   if (VAR_9)
    (void)FUNC_8(VAR_11);
   else
    (void)FUNC_7(VAR_11);
  }
  break;
 default:
  FUNC_3();
 }
 return (0);
}
