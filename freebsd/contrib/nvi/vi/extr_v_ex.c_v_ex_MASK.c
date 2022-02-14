
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int VICMD ;
struct TYPE_19__ {int ccnt; int tiq; int * gp; } ;
struct TYPE_18__ {scalar_t__ term; int len; int lb; } ;
typedef TYPE_1__ TEXT ;
typedef TYPE_2__ SCR ;
typedef int GS ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int * FUNC_3 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *,int ,int,int ,int) ;
 int FUNC_8 (char) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int *,char,int) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int*) ;
 int FUNC_14 (TYPE_2__*) ;

int
FUNC_15(SCR *VAR_10, VICMD *VAR_11)
{
 GS *VAR_12;
 TEXT *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_12 = VAR_10->gp;
 for (VAR_14 = VAR_15 = 0;;) {





  if (!FUNC_0(VAR_12)) {

   if (FUNC_12(VAR_10, VAR_11, ':',
       VAR_6 | VAR_7 | VAR_8 | VAR_9))
    return (1);
   VAR_13 = FUNC_4(VAR_10->tiq);






   if (VAR_13->term == VAR_4) {
    if (VAR_13->len > 1 && FUNC_10(VAR_10, VAR_13))
     return (1);
    VAR_14 = 1;
    break;
   }


   if (VAR_13->term == VAR_3)
    break;


   if (VAR_13->term != VAR_5)
    break;


   if (FUNC_3(VAR_10, VAR_0) != ((void*)0) && FUNC_10(VAR_10, VAR_13))
    return (1);


   if (FUNC_7(VAR_10, ((void*)0), VAR_13->lb, VAR_13->len, 0, 1))
    return (1);
  }


  FUNC_14(VAR_10);
  if (FUNC_1(VAR_10, VAR_2))
   (void)FUNC_8('\n');


  (void)FUNC_5(VAR_10);


  (void)FUNC_6(VAR_10);


  if (FUNC_13(VAR_10, &VAR_16))
   return (1);





  if (!VAR_16)
   break;
  VAR_15 = 1;


  ++VAR_10->ccnt;
 }






 if (VAR_15) {
  FUNC_2(VAR_10, VAR_1);
  if (FUNC_13(VAR_10, &VAR_16))
   return (1);
 }


 if (FUNC_11(VAR_10, VAR_11))
  return (1);


 if (VAR_14)
  return (FUNC_9(VAR_10));

 return (0);
}
