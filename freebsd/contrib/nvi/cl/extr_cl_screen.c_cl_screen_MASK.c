
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int WINDOW ;
struct TYPE_17__ {int * cup; int rows; struct TYPE_17__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_1__ GS ;
typedef TYPE_1__ CL_PRIVATE ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_8 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int VAR_11 ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int * VAR_12 ;
 int FUNC_13 (int *,int ,scalar_t__) ;
 int FUNC_14 (int ,int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,scalar_t__,int ) ;
 int FUNC_17 (int *) ;

int
FUNC_18(SCR *VAR_13, u_int32_t VAR_14)
{
 CL_PRIVATE *VAR_15;
 WINDOW *VAR_16;
 GS *VAR_17;

 VAR_17 = VAR_13->gp;
 VAR_15 = FUNC_0(VAR_13);
 VAR_16 = FUNC_1(VAR_13) ? FUNC_1(VAR_13) : VAR_12;


 if (FUNC_3(VAR_17, VAR_3)) {
  if ((!FUNC_3(VAR_13, VAR_7 | VAR_8) ||
       FUNC_12(FUNC_6(VAR_13, VAR_5), FUNC_6(VAR_13, VAR_4))) &&
      FUNC_10(VAR_17))
   return (1);
  FUNC_2(VAR_17, VAR_3);
 }


 if ((FUNC_5(VAR_6) && FUNC_3(VAR_13, VAR_7)) ||
     (FUNC_5(VAR_9) && FUNC_3(VAR_13, VAR_8)))
  return (0);
 if (FUNC_3(VAR_13, VAR_7))
  FUNC_2(VAR_13, VAR_7);
 if (FUNC_3(VAR_13, VAR_8)) {
  FUNC_2(VAR_13, VAR_8);

  if (FUNC_8(VAR_13, VAR_11) != ((void*)0)) {
   (void)FUNC_16(VAR_16, FUNC_7(VAR_13, VAR_13->rows), 0);
   FUNC_15(VAR_16);
  }
  (void)FUNC_16(VAR_16, FUNC_7(VAR_13, VAR_13->rows) - 1, 0);
  FUNC_17(VAR_16);
 }


 if (FUNC_5(VAR_6)) {
  if (FUNC_9(VAR_13))
   return (1);
  FUNC_4(VAR_15, VAR_0 | VAR_1);





  if (FUNC_3(VAR_13, VAR_6) && VAR_15->cup != ((void*)0))
   FUNC_14(FUNC_13(VAR_15->cup,
       0, FUNC_6(VAR_13, VAR_5) - 1), 1, VAR_10);
 } else {
  if (FUNC_11(VAR_13))
   return (1);
  FUNC_2(VAR_15, VAR_0);
  FUNC_4(VAR_15, VAR_2);
 }
 return (0);
}
