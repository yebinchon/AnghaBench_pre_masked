
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct termios {int dummy; } ;
typedef int WINDOW ;
struct TYPE_15__ {TYPE_1__* frp; scalar_t__ killersig; struct termios orig; int * gp; } ;
struct TYPE_14__ {int * name; } ;
typedef TYPE_2__ SCR ;
typedef int GS ;
typedef TYPE_2__ CL_PRIVATE ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int *,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int,int *,int *,int*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,size_t,size_t) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,int ) ;
 int * VAR_12 ;
 int FUNC_12 (int ,struct termios*) ;
 int FUNC_13 (int ,int,struct termios*) ;
 int FUNC_14 (int *,size_t,size_t) ;
 int FUNC_15 (int *) ;

int
FUNC_16(SCR *VAR_13, int *VAR_14)
{
 struct termios VAR_15;
 CL_PRIVATE *VAR_16;
 WINDOW *VAR_17;
 GS *VAR_18;
 size_t VAR_19, VAR_20;
 int VAR_21;

 VAR_18 = VAR_13->gp;
 VAR_16 = FUNC_0(VAR_13);
 VAR_17 = FUNC_1(VAR_13) ? FUNC_1(VAR_13) : VAR_12;
 *VAR_14 = 1;
 if (FUNC_3(VAR_13, VAR_6)) {

  if (FUNC_3(VAR_16, VAR_3)) {
   (void)FUNC_12(VAR_8, &VAR_15);
   (void)FUNC_13(VAR_8,
       VAR_10 | VAR_9, &VAR_16->orig);
  }


  (void)FUNC_11(0, VAR_7);




  if (FUNC_3(VAR_16, VAR_3))
   (void)FUNC_13(VAR_8, VAR_10 | VAR_9, &VAR_15);
  return (0);
 }
 FUNC_9(VAR_17, VAR_19, VAR_20);
 (void)FUNC_14(VAR_17, VAR_5 - 1, 0);
 (void)FUNC_15(VAR_17);
 (void)FUNC_12(VAR_8, &VAR_15);


 (void)FUNC_10(VAR_12, VAR_4);


 (void)FUNC_6(VAR_13, ((void*)0), 0);

 (void)FUNC_8();
 (void)FUNC_13(VAR_8, VAR_9 | VAR_10, &VAR_16->orig);


 (void)FUNC_11(0, VAR_7);
 if (VAR_16->killersig) {
  FUNC_2(VAR_16, VAR_0 | VAR_1);
  return (0);
 }


 FUNC_15(VAR_17);
 if (FUNC_3(VAR_16, VAR_3))
  (void)FUNC_13(VAR_8, VAR_10 | VAR_9, &VAR_15);


 (void)FUNC_6(VAR_13, VAR_13->frp->name, 1);


 (void)FUNC_10(VAR_12, VAR_11);


 (void)FUNC_14(VAR_17, VAR_19, VAR_20);
 (void)FUNC_5(VAR_13, 1);


 if (FUNC_7(VAR_13, 1, ((void*)0), ((void*)0), &VAR_21))
  return (1);
 if (VAR_21)
  FUNC_4(FUNC_0(VAR_13), VAR_2);

 return (0);
}
